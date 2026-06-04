#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFUNCBTNEFFECT_METHOD_3_06F1A774963AAA7B_OFFSET UNITYSDK_OFFSET(0x19C7B280)
#define RPG_GAMECORE_SHOWFUNCBTNEFFECT_METHOD_3_5E90A06F0BCB4AD2_OFFSET UNITYSDK_OFFSET(0x19C7B300)
#define RPG_GAMECORE_SHOWFUNCBTNEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7B2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFuncBtnEffect_TypeDefinitionIndex = 19358;

	class ShowFuncBtnEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06F1A774963AAA7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFuncBtnEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFuncBtnEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT_METHOD_3_06F1A774963AAA7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E90A06F0BCB4AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFuncBtnEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFUNCBTNEFFECT_METHOD_3_5E90A06F0BCB4AD2_OFFSET))(a1, a2);
		}
	};
}
