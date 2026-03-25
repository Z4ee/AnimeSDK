#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass3_1; }
namespace System::Reflection { class FieldInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_2__BUILDTYPE_B__2_OFFSET UNITYSDK_OFFSET(0x15D5B1E0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15D5B1D0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_2_TypeDefinitionIndex = 9181;

	class DynamicObjectTypeBuilder___c__DisplayClass3_2 : public ::System::Object
	{
	public:
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass3_1* CS___8__locals2; // 0x10
		::System::Reflection::FieldInfo* fi; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_2__CTOR_OFFSET))(this);
		}

		::System::Void _BuildType_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_2__BUILDTYPE_B__2_OFFSET))(this);
		}
	};
}
