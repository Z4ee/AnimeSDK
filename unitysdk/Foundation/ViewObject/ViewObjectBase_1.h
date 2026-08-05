#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectReadyFlagsRequest.h"
#include "unitysdk/Struct_2_C8DD384065D32AEE.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_B85817849BC6CF88;
namespace Foundation::ViewObject { class IViewObjectComponent; }
namespace Foundation::ViewObject { template <typename T> class IViewObjectComponent_1; }
namespace Foundation::ViewObject::Container { template <typename T> class ComponentContainer_1; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectBase_1_TypeDefinitionIndex = 74319;

	template <typename TViewObjectHandle>
	class ViewObjectBase_1 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle _SelfHandle_k__BackingField; // 0x0
		::System::String* _Name_k__BackingField; // 0x0
		::System::UInt32 _NetID_k__BackingField; // 0x0
		::Foundation::ViewObject::Container::ComponentContainer_1<::Foundation::ViewObject::IViewObjectComponent_1<TViewObjectHandle>*>* ComponentContainer; // 0x0
		::System::Boolean _enable; // 0x0
		::Class_1_B85817849BC6CF88* _ConfigViewObject_k__BackingField; // 0x0
		::System::Boolean _MarkedForDestroy_k__BackingField; // 0x0
		::System::Boolean _Recycling_k__BackingField; // 0x0
		::System::Boolean _Awoken_k__BackingField; // 0x0
		::System::Boolean _SpawnComplete_k__BackingField; // 0x0
		::Foundation::ViewObject::EViewObjectMetaFlags _MetaFlags_k__BackingField; // 0x0
		::System::Boolean _bPostedReady_k__BackingField; // 0x0
		::System::UInt32 _RequireReadyFlags_k__BackingField; // 0x0
		::System::UInt32 _ReadyFlags_k__BackingField; // 0x0
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectReadyFlagsRequest>* _readyFlagsRequests; // 0x0
		// static const ::System::UInt32 MaxFlags = 0xFFFFFFFF; // 0x0
	};
}
