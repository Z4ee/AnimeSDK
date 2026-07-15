#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_METHOD_3_93ACFA1058D5D220_OFFSET UNITYSDK_OFFSET(0x1B7079C0)
#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_METHOD_3_95FC791C87CEF7DD_OFFSET UNITYSDK_OFFSET(0x1B707A90)
#define RPG_GAMECORE_CAKERACEWAITFINISHLINETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B707A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitFinishLineTip_TypeDefinitionIndex = 23445;

	class CakeRaceWaitFinishLineTip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93ACFA1058D5D220(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitFinishLineTip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitFinishLineTip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_METHOD_3_93ACFA1058D5D220_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95FC791C87CEF7DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceWaitFinishLineTip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceWaitFinishLineTip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITFINISHLINETIP_METHOD_3_95FC791C87CEF7DD_OFFSET))(a1, a2);
		}
	};
}
