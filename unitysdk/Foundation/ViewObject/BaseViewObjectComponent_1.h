#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace Foundation::ViewObject { class ViewObject; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int BaseViewObjectComponent_1_TypeDefinitionIndex = 61817;

	template <typename T>
	class BaseViewObjectComponent_1 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::EViewObjectComponentFlags flags; // 0x0
		::System::Boolean _enable; // 0x0
		::Foundation::ViewObject::ViewObject* _owner; // 0x0
		static ::Struct_2_9E75F47F2670B678* StaticGet__ReceiveEventMask()
		{
			return (::Struct_2_9E75F47F2670B678*)Il2CppClass::FromTypeDefinitionIndex(BaseViewObjectComponent_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
