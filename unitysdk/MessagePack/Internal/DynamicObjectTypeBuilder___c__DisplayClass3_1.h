#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass3_0; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Action; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__BUILDTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1B6A6B90)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__BUILDTYPE_B__1_OFFSET UNITYSDK_OFFSET(0x1B6A6CC0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6991E0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_1_TypeDefinitionIndex = 7272;

	class DynamicObjectTypeBuilder___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass3_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _BuildType_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__BUILDTYPE_B__0_OFFSET))(this);
		}

		::System::Action* _BuildType_b__1(::System::Int32 a1, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__BUILDTYPE_B__1_OFFSET))(this, a1, a2);
		}
	};
}
