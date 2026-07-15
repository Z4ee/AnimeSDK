#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWPHASEUI_METHOD_3_8312D57E880CB29B_OFFSET UNITYSDK_OFFSET(0x1BE44BC0)
#define RPG_GAMECORE_SHOWPHASEUI_METHOD_3_D411BB6F6307253C_OFFSET UNITYSDK_OFFSET(0x1BE44C00)
#define RPG_GAMECORE_SHOWPHASEUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE44BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowPhaseUI_TypeDefinitionIndex = 22835;

	class ShowPhaseUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPHASEUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8312D57E880CB29B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPhaseUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPhaseUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPHASEUI_METHOD_3_8312D57E880CB29B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D411BB6F6307253C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowPhaseUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowPhaseUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWPHASEUI_METHOD_3_D411BB6F6307253C_OFFSET))(a1, a2);
		}
	};
}
