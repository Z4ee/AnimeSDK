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

#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_1132C30D1CEC0AA3_OFFSET UNITYSDK_OFFSET(0xB3A8CB0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB3A9220)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB3A8520)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0xB3A93C0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB3A8560)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_49897069321A610F_OFFSET UNITYSDK_OFFSET(0xB3A7FE0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_65FC837228DA1EEE_OFFSET UNITYSDK_OFFSET(0xB3A8250)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_664827E38F38BD64_OFFSET UNITYSDK_OFFSET(0xB3A85A0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xB3A7790)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xB3A8410)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB3A9280)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB3A7A70)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_BC012EAD9D9F105D_OFFSET UNITYSDK_OFFSET(0xB3A90A0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_C6F5878926A4BF76_OFFSET UNITYSDK_OFFSET(0xB3A8A40)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3A9380)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_CC15D6CD4D3CC816_OFFSET UNITYSDK_OFFSET(0xB3A7B30)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_D616235B5277BF64_OFFSET UNITYSDK_OFFSET(0xB3A8F00)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0xB3A7E00)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_EE9ABC9EE39F07A3_OFFSET UNITYSDK_OFFSET(0xB3A89B0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_F34B94A208F649D9_OFFSET UNITYSDK_OFFSET(0xB3A88E0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_F390B241F7B14B74_OFFSET UNITYSDK_OFFSET(0xB3A8E60)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_F41ED66D63555D7D_OFFSET UNITYSDK_OFFSET(0xB3A8BE0)
#define RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A9310)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int SwitchMaterialAction_TypeDefinitionIndex = 68166;

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

		::System::Void Method_3_96A53A17AC5D0E93()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_96A53A17AC5D0E93_OFFSET))(this);
		}

		::System::Void Method_3_E05ADF64DE351167(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_E05ADF64DE351167_OFFSET))(this, a1);
		}

		::System::Void Method_3_65FC837228DA1EEE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_65FC837228DA1EEE_OFFSET))(this, a1);
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

		::System::Void Method_3_CC15D6CD4D3CC816()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_CC15D6CD4D3CC816_OFFSET))(this);
		}

		::System::Void Method_3_49897069321A610F(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_49897069321A610F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_664827E38F38BD64(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1, ::RPG::Client::UI::UIStateCtrl::MaterialParameterType a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Color a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*, ::RPG::Client::UI::UIStateCtrl::MaterialParameterType, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_664827E38F38BD64_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_F34B94A208F649D9(::RPG::Client::UI::UIStateCtrl::MaterialParameterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::MaterialParameterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_F34B94A208F649D9_OFFSET))(this, a1);
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

		::System::Void Method_3_C6F5878926A4BF76(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_C6F5878926A4BF76_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_1132C30D1CEC0AA3(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_1132C30D1CEC0AA3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_D616235B5277BF64(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_D616235B5277BF64_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_BC012EAD9D9F105D(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_SWITCHMATERIALACTION_METHOD_3_BC012EAD9D9F105D_OFFSET))(this, a1, a2);
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
