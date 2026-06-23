#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_520;
namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UILINKTERMCOLLECTOR_ADD_ONHASLINKSCHANGED_OFFSET UNITYSDK_OFFSET(0x182A30C0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x182A3230)
#define MOLEMOLE_UILINKTERMCOLLECTOR_BIND_OFFSET UNITYSDK_OFFSET(0x182A2D10)
#define MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTANDOPENTERMPANEL_OFFSET UNITYSDK_OFFSET(0x182A3E50)
#define MOLEMOLE_UILINKTERMCOLLECTOR_COLLECTLINKSOURCETEXTS_OFFSET UNITYSDK_OFFSET(0x182A4150)
#define MOLEMOLE_UILINKTERMCOLLECTOR_FORCEREFRESH_OFFSET UNITYSDK_OFFSET(0x182A3140)
#define MOLEMOLE_UILINKTERMCOLLECTOR_GET_HASLINKS_OFFSET UNITYSDK_OFFSET(0x182A31A0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_1576E9081793E1A2_OFFSET UNITYSDK_OFFSET(0x182A4590)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_A8179086E2349DB9_OFFSET UNITYSDK_OFFSET(0x182A3470)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_B11FAAC925C71B21_OFFSET UNITYSDK_OFFSET(0x182A39F0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_E04C66D9E4FD064F_OFFSET UNITYSDK_OFFSET(0x182A4540)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182A3C70)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x182A3BC0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x182A33B0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_REMOVE_ONHASLINKSCHANGED_OFFSET UNITYSDK_OFFSET(0x182A31B0)
#define MOLEMOLE_UILINKTERMCOLLECTOR_SETROOT_OFFSET UNITYSDK_OFFSET(0x182A3DF0)
#define MOLEMOLE_UILINKTERMCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x182A4460)

namespace MoleMole
{
	inline static constexpr unsigned int UILinkTermCollector_TypeDefinitionIndex = 55345;

	class UILinkTermCollector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _rootOverride; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* Field_5_3; // 0x30
		::System::Action_1<::System::Boolean>* Field_5_4; // 0x38
		::System::Boolean Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR__CTOR_OFFSET))(this);
		}

		static ::MoleMole::UILinkTermCollector* Bind(::MoleMole::UIBaseController* a1, ::Class_0_16E4307DCC419505_520* a2)
		{
			return ((::MoleMole::UILinkTermCollector*(*)(::MoleMole::UIBaseController*, ::Class_0_16E4307DCC419505_520*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_BIND_OFFSET))(a1, a2);
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

		::System::Void ForceRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_FORCEREFRESH_OFFSET))(this);
		}

		::System::Void Method_5_B11FAAC925C71B21(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_B11FAAC925C71B21_OFFSET))(this, a1);
		}

		::System::Void Method_5_E04C66D9E4FD064F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_E04C66D9E4FD064F_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_5_A8179086E2349DB9()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_A8179086E2349DB9_OFFSET))(this);
		}

		::System::Void Method_5_1576E9081793E1A2(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINKTERMCOLLECTOR_METHOD_5_1576E9081793E1A2_OFFSET))(this, a1);
		}
	};
}
