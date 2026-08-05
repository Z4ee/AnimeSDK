#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_27AD63A12C5B0B47.h"
#include "unitysdk/Enum_3_DE5FD6A85AA32935.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_620977F55CD7E401_3;
namespace System { class String; }

#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x129D6AB0)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x129D70C0)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_GET_LASTRESULT_OFFSET UNITYSDK_OFFSET(0x129D6AA0)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x129D6B70)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x129D7040)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_AB3D5D4FC73A34DD_OFFSET UNITYSDK_OFFSET(0x129D7220)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x129D7260)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x129D7210)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x129D6DF0)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER_ONGROUPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x129D6F50)
#define MOLEMOLE_NAP_VOGROUPSTATELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x129D71B0)

namespace MoleMole
{
	inline static constexpr unsigned int Nap_VoGroupStateListener_TypeDefinitionIndex = 48698;

	class Nap_VoGroupStateListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_1; // 0x0
		::System::UInt32 GroupID; // 0x18
		::System::String* GroupState; // 0x20
		::System::Int32 StateValue; // 0x28
		::Enum_3_27AD63A12C5B0B47 CompareType; // 0x2C
		::Enum_3_DE5FD6A85AA32935 TriggerTimes; // 0x30
		::System::Boolean Field_5_11; // 0x34
		::System::Boolean Field_5_10; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_LastResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_GET_LASTRESULT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnGroupStateChanged(::Foundation::ViewObject::Subsystem::GroupStateChangeData a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_ONGROUPSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_EVALUATE_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Void Method_5_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_5_AB3D5D4FC73A34DD(::System::Boolean a1, ::Class_3_620977F55CD7E401_3* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_620977F55CD7E401_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_AB3D5D4FC73A34DD_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAP_VOGROUPSTATELISTENER_METHOD_5_BB2928BEC244DEB7_OFFSET))(this);
		}
	};
}
