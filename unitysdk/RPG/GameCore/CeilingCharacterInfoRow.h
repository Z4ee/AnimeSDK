#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CEILINGCHARACTERINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF7EC30)
#define RPG_GAMECORE_CEILINGCHARACTERINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7F270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CeilingCharacterInfoRow_TypeDefinitionIndex = 13250;

	class CeilingCharacterInfoRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID CeilingDesc; // 0x10
		::System::UInt32 CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CeilingCharacterInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CeilingCharacterInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEILINGCHARACTERINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
