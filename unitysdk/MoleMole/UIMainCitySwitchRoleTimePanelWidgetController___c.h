#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_67F3C5E647F33C2D;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15284810)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15284850)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__32_2_OFFSET UNITYSDK_OFFSET(0x15284870)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__32_3_OFFSET UNITYSDK_OFFSET(0x15284970)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__32_4_OFFSET UNITYSDK_OFFSET(0x15284B20)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__REFRESHSTAGE_B__26_0_OFFSET UNITYSDK_OFFSET(0x15284860)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex = 78546;

	class UIMainCitySwitchRoleTimePanelWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__32_4()
		{
			return (::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A4C0);
		}
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A4C8);
		}
		static ::System::Action_1<::Class_2_67F3C5E647F33C2D*>** StaticGet___9__32_2()
		{
			return (::System::Action_1<::Class_2_67F3C5E647F33C2D*>**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A4D0);
		}
		static ::System::Action** StaticGet___9__32_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A4D8);
		}
		static ::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMainCitySwitchRoleTimePanelWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshStage_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__REFRESHSTAGE_B__26_0_OFFSET))(this);
		}

		::System::Void _OnClickSendTime_b__32_2(::Class_2_67F3C5E647F33C2D* teleportByTransition)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__32_2_OFFSET))(this, teleportByTransition);
		}

		::System::Void _OnClickSendTime_b__32_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__32_3_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _OnClickSendTime_b__32_4(::System::Threading::CancellationToken token)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__ONCLICKSENDTIME_B__32_4_OFFSET))(this, token);
		}
	};
}
