#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass3_3; }
namespace System::Reflection { class FieldInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_4__BUILDTYPE_B__4_OFFSET UNITYSDK_OFFSET(0x18166720)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x18166710)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_4_TypeDefinitionIndex = 7283;

	class DynamicObjectTypeBuilder___c__DisplayClass3_4 : public ::System::Object
	{
	public:
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass3_3* CS___8__locals4; // 0x10
		::System::Reflection::FieldInfo* fi; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_4__CTOR_OFFSET))(this);
		}

		::System::Void _BuildType_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_4__BUILDTYPE_B__4_OFFSET))(this);
		}
	};
}
