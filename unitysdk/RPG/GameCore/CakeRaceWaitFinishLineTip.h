#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_METHOD_3_95FC791C87CEF7DD_OFFSET UNITYSDK_OFFSET(0x195F22D0)
#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_METHOD_3_BCD8497FEBE0B1E9_OFFSET UNITYSDK_OFFSET(0x195F21C0)
#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x195F22A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitFinishLineTip_TypeDefinitionIndex = 22978;

	class CakeRaceWaitFinishLineTip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BCD8497FEBE0B1E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitFinishLineTip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitFinishLineTip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_METHOD_3_BCD8497FEBE0B1E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95FC791C87CEF7DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitFinishLineTip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitFinishLineTip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_METHOD_3_95FC791C87CEF7DD_OFFSET))(a1, a2);
		}
	};
}
