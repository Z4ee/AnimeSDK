#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/AsyncAction.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/MaterialParameterType.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::UI::UIStateCtrl { class MaterialParameterData; }
namespace RPG::Client::UI::UIStateCtrl { class MaterialSwitchTarget; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_11C0D92875DC99E9_OFFSET UNITYSDK_OFFSET(0xCB07C90)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCB08E80)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_22C340ADCFACE734_OFFSET UNITYSDK_OFFSET(0xCB08570)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_25488AC9110D7670_OFFSET UNITYSDK_OFFSET(0xCB086D0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_33E15BC306192EAB_OFFSET UNITYSDK_OFFSET(0xCB08B70)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_37A191428D484A96_OFFSET UNITYSDK_OFFSET(0xCB08D00)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xCB081B0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0xCB09020)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCB081F0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_6FC8AF496F5916AD_OFFSET UNITYSDK_OFFSET(0xCB07AC0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_87029766AE178AA9_OFFSET UNITYSDK_OFFSET(0xCB08930)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_9F432F490AFBC931_OFFSET UNITYSDK_OFFSET(0xCB07F00)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xCB080A0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xCB08EE0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_ACBE0CBC38A6628D_OFFSET UNITYSDK_OFFSET(0xCB08230)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_B06F516E4459C742_OFFSET UNITYSDK_OFFSET(0xCB07460)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCB07730)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCB08FE0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0xCB077F0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_EE9ABC9EE39F07A3_OFFSET UNITYSDK_OFFSET(0xCB08640)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_F390B241F7B14B74_OFFSET UNITYSDK_OFFSET(0xCB08AD0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_F41ED66D63555D7D_OFFSET UNITYSDK_OFFSET(0xCB08860)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCB08F70)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchMaterialAction_TypeDefinitionIndex = 69139;

	class SwitchMaterialAction : public ::RPG::Client::UI::UIStateCtrl::AsyncAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* MaterialTargets; // 0x28
		::RPG::Client::WeakAssetReference MaterialReference; // 0x30
		::System::Boolean ModifyMaterialParameters; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialParameterData*>* MaterialParameters; // 0x48
		::UnityEngine::Material* _MaterialInstance; // 0x50
		::UnityEngine::Material* _LoadedMaterial; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_B06F516E4459C742()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_B06F516E4459C742_OFFSET))(this);
		}

		::System::Void Method_3_6FC8AF496F5916AD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_6FC8AF496F5916AD_OFFSET))(this, a1);
		}

		::System::Void Method_3_9F432F490AFBC931(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_9F432F490AFBC931_OFFSET))(this, a1);
		}

		::System::Void Method_3_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_ECA33935490AF2E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_ECA33935490AF2E4_OFFSET))(this);
		}

		::System::Void Method_3_11C0D92875DC99E9(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_11C0D92875DC99E9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_ACBE0CBC38A6628D(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1, ::RPG::Client::UI::UIStateCtrl::MaterialParameterType a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Color a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*, ::RPG::Client::UI::UIStateCtrl::MaterialParameterType, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_ACBE0CBC38A6628D_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_22C340ADCFACE734(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_22C340ADCFACE734_OFFSET))(this, a1);
		}

		::System::Void Method_3_EE9ABC9EE39F07A3(::UnityEngine::Material* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_EE9ABC9EE39F07A3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F41ED66D63555D7D(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_F41ED66D63555D7D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F390B241F7B14B74(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_F390B241F7B14B74_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_25488AC9110D7670(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_25488AC9110D7670_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_87029766AE178AA9(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_87029766AE178AA9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_33E15BC306192EAB(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_33E15BC306192EAB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_37A191428D484A96(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_37A191428D484A96_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_3_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_2_OFFSET))(this);
		}
	};
}
