#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITENTERSCENE_METHOD_3_7A4733B0087E7C96_OFFSET UNITYSDK_OFFSET(0x1D215C40)
#define RPG_GAMECORE_LOOPWAITENTERSCENE_METHOD_3_E57E1A5E5CFBC63A_OFFSET UNITYSDK_OFFSET(0x1D215BF0)
#define RPG_GAMECORE_LOOPWAITENTERSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D215C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitEnterScene_TypeDefinitionIndex = 20939;

	class LoopWaitEnterScene : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTERSCENE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E57E1A5E5CFBC63A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitEnterScene*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitEnterScene*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTERSCENE_METHOD_3_E57E1A5E5CFBC63A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A4733B0087E7C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitEnterScene* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitEnterScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITENTERSCENE_METHOD_3_7A4733B0087E7C96_OFFSET))(a1, a2);
		}
	};
}
