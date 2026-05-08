#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_2.h"
#include "unitysdk/UnityEngine/Timeline/Marker.h"
#include "unitysdk/UnityEngine/Timeline/NotificationFlags.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1387A2A0)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1387A2E0)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x1387A2F0)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_METHOD_4_498FEDD1CE715687_OFFSET UNITYSDK_OFFSET(0x1387A1E0)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_METHOD_4_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1387A0F0)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1387A180)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x1387A250)
#define MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1387A340)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DynamicObjectSwitchMarker_TypeDefinitionIndex = 62455;

	class DynamicObjectSwitchMarker : public ::UnityEngine::Timeline::Marker
	{
	public:
		::System::Boolean AutoRecoverToDefault; // 0x28
		::System::Boolean IsActive; // 0x29
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* TagList; // 0x30
		::MoleMole::GameplayTag TargetLayerName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_BCCEF225A11BDA90(::Struct_2_6CC2897B74C41026_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_METHOD_4_BCCEF225A11BDA90_OFFSET))(this, a1);
		}

		::System::Void Method_4_498FEDD1CE715687(::Struct_2_6CC2897B74C41026_2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6CC2897B74C41026_2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_METHOD_4_498FEDD1CE715687_OFFSET))(this, a1, a2);
		}

		::System::Void Notify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_NOTIFY_OFFSET))(this);
		}

		::UnityEngine::Timeline::INapNotifyData* GetData()
		{
			return ((::UnityEngine::Timeline::INapNotifyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_GETDATA_OFFSET))(this);
		}

		::UnityEngine::Timeline::NotificationFlags get_flags()
		{
			return ((::UnityEngine::Timeline::NotificationFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean Method_4_111E3F406ABDDAA7(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_METHOD_4_111E3F406ABDDAA7_OFFSET))(this, a1);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DYNAMICOBJECTSWITCHMARKER_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
