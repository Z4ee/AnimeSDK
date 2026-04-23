#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEBOSSDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0E340)
#define RPG_GAMECORE_IDLELIVEBOSSDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0E5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveBossDataRow_TypeDefinitionIndex = 11143;

	class IdleLiveBossDataRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* NodeIcon; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 BossID; // 0x30
		::RPG::Client::TextID Desc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEBOSSDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveBossDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveBossDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEBOSSDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
