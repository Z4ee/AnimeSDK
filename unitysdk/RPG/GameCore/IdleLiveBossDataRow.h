#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEBOSSDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B692E90)
#define RPG_GAMECORE_IDLELIVEBOSSDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B693130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveBossDataRow_TypeDefinitionIndex = 11291;

	class IdleLiveBossDataRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* NodeIcon; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::RPG::Client::TextID Desc; // 0x30
		::System::UInt32 BossID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEBOSSDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveBossDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveBossDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEBOSSDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
