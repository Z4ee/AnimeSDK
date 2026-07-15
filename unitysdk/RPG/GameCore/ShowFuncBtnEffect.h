#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFUNCBTNEFFECT_METHOD_3_5E90A06F0BCB4AD2_OFFSET UNITYSDK_OFFSET(0x1BE3FA90)
#define RPG_GAMECORE_SHOWFUNCBTNEFFECT_METHOD_3_B1401F1419EBB249_OFFSET UNITYSDK_OFFSET(0x1BE3FA40)
#define RPG_GAMECORE_SHOWFUNCBTNEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3FA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFuncBtnEffect_TypeDefinitionIndex = 19714;

	class ShowFuncBtnEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1401F1419EBB249(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFuncBtnEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFuncBtnEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT_METHOD_3_B1401F1419EBB249_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E90A06F0BCB4AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFuncBtnEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT_METHOD_3_5E90A06F0BCB4AD2_OFFSET))(a1, a2);
		}
	};
}
