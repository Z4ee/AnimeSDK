#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace MiHoYo::SDK::Protobuf::Reflection { class SingleFieldAccessor; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181C6660)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x181C66A0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SingleFieldAccessor___c__DisplayClass2_0_TypeDefinitionIndex = 34049;

	class SingleFieldAccessor___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::SingleFieldAccessor* __4__this; // 0x10
		::System::Object* defaultValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0(::MiHoYo::SDK::Protobuf::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SINGLEFIELDACCESSOR___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET))(this, a1);
		}
	};
}
