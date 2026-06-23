#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentCustomEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFlags.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace Foundation::ViewObject { template <typename T> class ViewObjectBase_1; }
namespace System { class EventArgs; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int BaseViewObjectComponent_2_TypeDefinitionIndex = 63812;

	template <typename T, typename TViewObjectHandle>
	class BaseViewObjectComponent_2 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::EViewObjectComponentFlags flags; // 0x0
		::System::Boolean _enable; // 0x0
		::Foundation::ViewObject::ViewObjectBase_1<TViewObjectHandle>* _owner; // 0x0
		static ::Struct_2_9E75F47F2670B678* StaticGet__ReceiveEventMask()
		{
			return (::Struct_2_9E75F47F2670B678*)Il2CppClass::FromTypeDefinitionIndex(BaseViewObjectComponent_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
