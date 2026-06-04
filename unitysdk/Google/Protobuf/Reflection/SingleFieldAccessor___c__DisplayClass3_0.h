#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf::Reflection { class SingleFieldAccessor; }

#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7E3B0)
#define GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__DISPLAYCLASS3_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x17E7E4C0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SingleFieldAccessor___c__DisplayClass3_0_TypeDefinitionIndex = 5575;

	class SingleFieldAccessor___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Object* defaultValue; // 0x10
		::Google::Protobuf::Reflection::SingleFieldAccessor* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__1(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__DISPLAYCLASS3_0___CTOR_B__1_OFFSET))(this, a1);
		}
	};
}
