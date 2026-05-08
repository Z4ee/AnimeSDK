#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_2.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x12FC1D80)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x12FC1DC0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_013B52BF04AE9684_OFFSET UNITYSDK_OFFSET(0x12FC1C00)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_1C008C62BF8D9732_OFFSET UNITYSDK_OFFSET(0x12FC1AA0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_567EC27AC5C589E5_OFFSET UNITYSDK_OFFSET(0x12FC1DD0)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_E50FAF7989D1DA0C_OFFSET UNITYSDK_OFFSET(0x12FC1990)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x12FC1D30)
#define MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC1E60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SendEventToGraphMarker_TypeDefinitionIndex = 58138;

	class SendEventToGraphMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::String* eventName; // 0x28
		::System::Boolean SendToGlobal; // 0x30
		::System::Boolean forceTriggerOnExit; // 0x31
		::System::Collections::Generic::List_1<::System::String*>* AllowBranchGroupTagList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_E50FAF7989D1DA0C(::Struct_2_6CC2897B74C41026_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_E50FAF7989D1DA0C_OFFSET))(this, a1);
		}

		::System::Void Method_4_013B52BF04AE9684(::Struct_2_6CC2897B74C41026_2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_013B52BF04AE9684_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_567EC27AC5C589E5(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_567EC27AC5C589E5_OFFSET))(this, a1);
		}

		::System::Void Method_4_1C008C62BF8D9732(::Struct_2_6CC2897B74C41026_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SENDEVENTTOGRAPHMARKER_METHOD_4_1C008C62BF8D9732_OFFSET))(this, a1);
		}
	};
}
