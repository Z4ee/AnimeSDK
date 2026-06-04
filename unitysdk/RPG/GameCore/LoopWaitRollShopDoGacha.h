#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_METHOD_3_BACD8976E7A6F946_OFFSET UNITYSDK_OFFSET(0x198B1FC0)
#define RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_METHOD_3_D4CB801DCBC4AB06_OFFSET UNITYSDK_OFFSET(0x198B1F30)
#define RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA__CTOR_OFFSET UNITYSDK_OFFSET(0x198B1F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitRollShopDoGacha_TypeDefinitionIndex = 20044;

	class LoopWaitRollShopDoGacha : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D4CB801DCBC4AB06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRollShopDoGacha*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRollShopDoGacha*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_METHOD_3_D4CB801DCBC4AB06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BACD8976E7A6F946(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitRollShopDoGacha* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitRollShopDoGacha*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITROLLSHOPDOGACHA_METHOD_3_BACD8976E7A6F946_OFFSET))(a1, a2);
		}
	};
}
