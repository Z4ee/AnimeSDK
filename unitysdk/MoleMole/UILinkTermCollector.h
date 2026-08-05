#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_706;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UILINKTERMCOLLECTOR_ADD_ONHASLINKSCHANGED_OFFSET UNITYSDK_OFFSET(0x1831F610)
#define MOLEMOLE_UILINKTERMCOLLECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1831FD50)
#define MOLEMOLE_UILINKTERMCOLLECTOR_BINDNOUNBUTTON_1_OFFSET UNITYSDK_OFFSET(0x1831F750)
#define MOLEMOLE_UILINKTERMCOLLECTOR_BINDNOUNBUTTON_OFFSET UNITYSDK_OFFSET(0x1831F6F0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_BIND_OFFSET UNITYSDK_OFFSET(0x1831F260)
#define MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTANDOPENTERMPANEL_OFFSET UNITYSDK_OFFSET(0x18320A70)
#define MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTLINKSOURCETEXTS_OFFSET UNITYSDK_OFFSET(0x183211A0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18321490)
#define MOLEMOLE_UILINKTERMCOLLECTOR_FORCEREFRESH_OFFSET UNITYSDK_OFFSET(0x1831F690)
#define MOLEMOLE_UILINKTERMCOLLECTOR_GET_HASLINKS_OFFSET UNITYSDK_OFFSET(0x1831FCC0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_0B71976CC594AA66_OFFSET UNITYSDK_OFFSET(0x18321620)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_134F49A7FFBB616E_OFFSET UNITYSDK_OFFSET(0x18320D10)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_1576E9081793E1A2_OFFSET UNITYSDK_OFFSET(0x18321670)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_68B1130DBA32BBA1_OFFSET UNITYSDK_OFFSET(0x18320E00)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_7A474BC0F35B0ED4_OFFSET UNITYSDK_OFFSET(0x183217B0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x18321700)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_A4BEEC2B136BCC36_OFFSET UNITYSDK_OFFSET(0x18320510)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_A8179086E2349DB9_OFFSET UNITYSDK_OFFSET(0x1831FF90)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_CF6091CB7ACD16CF_OFFSET UNITYSDK_OFFSET(0x1831FA90)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_D9BF6C02E33BB0DE_OFFSET UNITYSDK_OFFSET(0x18321530)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0x18321750)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18320770)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x183206C0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1831FED0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_REMOVE_ONHASLINKSCHANGED_OFFSET UNITYSDK_OFFSET(0x1831FCD0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_SETROOT_OFFSET UNITYSDK_OFFSET(0x1831FA30)
#define MOLEMOLE_UILINKTERMCOLLECTOR_UNBINDNOUNBUTTON_OFFSET UNITYSDK_OFFSET(0x18320900)
#define MOLEMOLE_UILINKTERMCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x183214E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILinkTermCollector_TypeDefinitionIndex = 71492;

	class UILinkTermCollector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _rootOverride; // 0x18
		::UnityEngine::Transform* Field_5_7; // 0x20
		::System::Boolean Field_5_6; // 0x28
		::Class_2_B4378B46E0020E85* Field_5_5; // 0x30
		::System::Boolean Field_5_4; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* Field_5_11; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_5_10; // 0x48
		::System::Action_1<::System::Boolean>* Field_5_9; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR__CTOR_OFFSET))(this);
		}

		static ::MoleMole::UILinkTermCollector* Bind(::MoleMole::UIBaseController* a1, ::Class_0_16E4307DCC419505_706* a2)
		{
			return ((::MoleMole::UILinkTermCollector*(*)(::MoleMole::UIBaseController*, ::Class_0_16E4307DCC419505_706*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_BIND_OFFSET))(a1, a2);
		}

		static ::MoleMole::UILinkTermCollector* BindNounButton(::MoleMole::UIBaseController* a1, ::Class_2_B4378B46E0020E85* a2)
		{
			return ((::MoleMole::UILinkTermCollector*(*)(::MoleMole::UIBaseController*, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_BINDNOUNBUTTON_OFFSET))(a1, a2);
		}

		static ::MoleMole::UILinkTermCollector* BindNounButton_1(::MoleMole::UIBaseController* a1, ::Class_2_B4378B46E0020E85* a2, ::UnityEngine::Transform* a3)
		{
			return ((::MoleMole::UILinkTermCollector*(*)(::MoleMole::UIBaseController*, ::Class_2_B4378B46E0020E85*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_BINDNOUNBUTTON_1_OFFSET))(a1, a2, a3);
		}

		::System::Boolean get_HasLinks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_GET_HASLINKS_OFFSET))(this);
		}

		::System::Void add_OnHasLinksChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ADD_ONHASLINKSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnHasLinksChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_REMOVE_ONHASLINKSCHANGED_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_SETROOT_OFFSET))(this, a1);
		}

		::System::Void CollectAndOpenTermPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTANDOPENTERMPANEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* CollectLinkSourceTexts()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTLINKSOURCETEXTS_OFFSET))(this);
		}

		::System::Void UnbindNounButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_UNBINDNOUNBUTTON_OFFSET))(this);
		}

		::System::Void ForceRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_FORCEREFRESH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_5_CF6091CB7ACD16CF(::Class_2_B4378B46E0020E85* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_CF6091CB7ACD16CF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_5_D9BF6C02E33BB0DE()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_D9BF6C02E33BB0DE_OFFSET))(this);
		}

		::System::Void Method_5_0B71976CC594AA66()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_0B71976CC594AA66_OFFSET))(this);
		}

		::System::Void Method_5_1576E9081793E1A2(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_1576E9081793E1A2_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_5_A8179086E2349DB9()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_A8179086E2349DB9_OFFSET))(this);
		}

		::System::Void Method_5_7C2C2820B36B9508()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_7C2C2820B36B9508_OFFSET))(this);
		}

		::System::Void Method_5_FDF9B21BA16000B3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_FDF9B21BA16000B3_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_7A474BC0F35B0ED4(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_7A474BC0F35B0ED4_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_5_134F49A7FFBB616E()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_134F49A7FFBB616E_OFFSET))(this);
		}

		::System::Void Method_5_68B1130DBA32BBA1(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_68B1130DBA32BBA1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A4BEEC2B136BCC36(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_A4BEEC2B136BCC36_OFFSET))(this, a1);
		}
	};
}
