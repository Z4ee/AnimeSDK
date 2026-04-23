#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialParameterType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB3A4EA0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xB3A4F80)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0xB3A5030)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0xB3A5090)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB3A4F20)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB3A4FE0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0xB3A50F0)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0xB3A5140)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_4_OFFSET UNITYSDK_OFFSET(0xB3A5190)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB3A4E50)
#define RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A51E0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int MaterialParameterData_TypeDefinitionIndex = 68167;

	class MaterialParameterData : public ::System::Object
	{
	public:
		::UnityEngine::Material* TargetMaterial; // 0x10
		::System::String* ParameterName; // 0x18
		::RPG::Client::UI::UIStateCtrl::MaterialParameterType ParameterType; // 0x20
		::System::Boolean UseAnimation; // 0x24
		::System::Single InitialFloatValue; // 0x28
		::System::Single FinalFloatValue; // 0x2C
		::UnityEngine::Vector3 InitialVector3Value; // 0x30
		::UnityEngine::Vector3 FinalVector3Value; // 0x3C
		::UnityEngine::Color InitialColorValue; // 0x48
		::UnityEngine::Color FinalColorValue; // 0x58
		::System::String* KeywordName; // 0x68
		::System::Boolean EnableKeyword; // 0x70
		::System::Single AnimationDuration; // 0x74
		::UnityEngine::AnimationCurve* AnimationCurve; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_1_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_1D4018D4200358D0_3_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_3_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_MATERIALPARAMETERDATA_METHOD_1_391A84BCD9F51317_4_OFFSET))(this);
		}
	};
}
