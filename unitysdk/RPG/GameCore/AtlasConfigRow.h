#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ATLASCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186ACC90)
#define RPG_GAMECORE_ATLASCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186ACE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AtlasConfigRow_TypeDefinitionIndex = 11974;

	class AtlasConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AtlasConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AtlasConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
