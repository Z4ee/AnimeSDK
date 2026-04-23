#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGMAGICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187ECC80)
#define RPG_GAMECORE_CHENLINGMAGICROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187ECEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingMagicRow_TypeDefinitionIndex = 10590;

	class ChenLingMagicRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 EffectID; // 0x30
		::System::UInt32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGMAGICROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingMagicRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingMagicRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGMAGICROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
