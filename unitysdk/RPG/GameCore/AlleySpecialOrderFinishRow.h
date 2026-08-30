#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SpecialOrderFinishTypeEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C565820)
#define RPG_GAMECORE_ALLEYSPECIALORDERFINISHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C565A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleySpecialOrderFinishRow_TypeDefinitionIndex = 12536;

	class AlleySpecialOrderFinishRow : public ::System::Object
	{
	public:
		::RPG::GameCore::SpecialOrderFinishTypeEnum SpecialOrderFinishType; // 0x10
		::System::UInt32 SpecialOrderFinishID; // 0x14
		::RPG::Client::TextID SpecialOrderFinishDesc; // 0x18
		::System::UInt32 Param1; // 0x28
		::System::UInt32 Param2; // 0x2C
		::System::UInt32 Param3; // 0x30

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
