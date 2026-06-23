#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_1.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x13F32EC0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x13F32F00)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_419DAD939F040083_OFFSET UNITYSDK_OFFSET(0x13F32D50)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x13F32A90)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_567EC27AC5C589E5_OFFSET UNITYSDK_OFFSET(0x13F32F10)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_5E2AE1516CAE1DCB_OFFSET UNITYSDK_OFFSET(0x13F32990)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x13F32E70)
#define MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x13F32FA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendEventToFCMarker_TypeDefinitionIndex = 82024;

	class SendEventToFCMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* eventName; // 0x28
		::System::Boolean isFCRawEvent; // 0x30
		::System::Boolean forceTriggerOnExit; // 0x31
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_5E2AE1516CAE1DCB(::Struct_2_6CC2897B74C41026_1 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_1))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_5E2AE1516CAE1DCB_OFFSET))(this, a1);
		}

		::System::Void Method_4_419DAD939F040083(::Struct_2_6CC2897B74C41026_1 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_1, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_419DAD939F040083_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_567EC27AC5C589E5(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_567EC27AC5C589E5_OFFSET))(this, a1);
		}

		::System::Void Method_4_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOFCMARKER_METHOD_4_508D4DD02D3DB74E_OFFSET))(this);
		}
	};
}
