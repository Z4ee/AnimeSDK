#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETUPSCENESELECTION_METHOD_3_1788F76848666D1D_OFFSET UNITYSDK_OFFSET(0x18C763F0)
#define RPG_GAMECORE_PROPSETUPSCENESELECTION_METHOD_3_1F312887AF6B1A48_OFFSET UNITYSDK_OFFSET(0x18C76540)
#define RPG_GAMECORE_PROPSETUPSCENESELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18C764B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupSceneSelection_TypeDefinitionIndex = 20881;

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

		static ::System::Void Method_3_1788F76848666D1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupSceneSelection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupSceneSelection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPSCENESELECTION_METHOD_3_1788F76848666D1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1F312887AF6B1A48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetupSceneSelection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetupSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPSCENESELECTION_METHOD_3_1F312887AF6B1A48_OFFSET))(a1, a2);
		}
	};
}
