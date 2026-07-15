#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLERANDOMREVIVE_METHOD_3_48E144D251821758_OFFSET UNITYSDK_OFFSET(0x1BD1FC10)
#define RPG_GAMECORE_MARBLERANDOMREVIVE_METHOD_3_6C4779B4E04084B2_OFFSET UNITYSDK_OFFSET(0x1BD1FC70)
#define RPG_GAMECORE_MARBLERANDOMREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1FC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRandomRevive_TypeDefinitionIndex = 16187;

	class MarbleRandomRevive : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 ReviveTimes; // 0x10
		::System::Single ReviveRate; // 0x14
		::System::Int32 ReviveHp; // 0x18
		::System::Single ReviveMaxHPRatio; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48E144D251821758(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRandomRevive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRandomRevive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE_METHOD_3_48E144D251821758_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C4779B4E04084B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRandomRevive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRandomRevive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE_METHOD_3_6C4779B4E04084B2_OFFSET))(a1, a2);
		}
	};
}
