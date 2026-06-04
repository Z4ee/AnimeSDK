#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGMAGICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1962EAF0)
#define RPG_GAMECORE_CHENLINGMAGICROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1962ED20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingMagicRow_TypeDefinitionIndex = 10628;

	class ChenLingMagicRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ID; // 0x20
		::System::UInt32 EffectID; // 0x24
		::RPG::Client::TextID Desc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGMAGICROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingMagicRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingMagicRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGMAGICROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
