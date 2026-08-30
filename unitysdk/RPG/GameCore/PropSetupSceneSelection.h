#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETUPSCENESELECTION_METHOD_3_228DC5932D8CB806_OFFSET UNITYSDK_OFFSET(0x1D36FB30)
#define RPG_GAMECORE_PROPSETUPSCENESELECTION_METHOD_3_2B2E43A1E54DA5B5_OFFSET UNITYSDK_OFFSET(0x1D36FBB0)
#define RPG_GAMECORE_PROPSETUPSCENESELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36FB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupSceneSelection_TypeDefinitionIndex = 21775;

	class PropSetupSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean DisableSelect; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSelect; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnselect; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnClick; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDisableClick; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnterHover; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExitHover; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPSCENESELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_228DC5932D8CB806(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupSceneSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupSceneSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPSCENESELECTION_METHOD_3_228DC5932D8CB806_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B2E43A1E54DA5B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupSceneSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPSCENESELECTION_METHOD_3_2B2E43A1E54DA5B5_OFFSET))(a1, a2);
		}
	};
}
