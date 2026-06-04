#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpecialOrderFinishTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194733D0)
#define RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19473630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleySpecialOrderFinishRow_TypeDefinitionIndex = 12015;

	class AlleySpecialOrderFinishRow : public ::System::Object
	{
	public:
		::System::UInt32 SpecialOrderFinishID; // 0x10
		::System::UInt32 Param1; // 0x14
		::System::UInt32 Param2; // 0x18
		::System::UInt32 Param3; // 0x1C
		::RPG::GameCore::SpecialOrderFinishTypeEnum SpecialOrderFinishType; // 0x20
		::RPG::Client::TextID SpecialOrderFinishDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleySpecialOrderFinishRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleySpecialOrderFinishRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
