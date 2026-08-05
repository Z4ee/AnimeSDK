#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass3_0; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Action; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__BUILDTYPE_B__3_OFFSET UNITYSDK_OFFSET(0x1E7ACDC0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7ACDB0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_3_TypeDefinitionIndex = 31062;

	class DynamicObjectTypeBuilder___c__DisplayClass3_3 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass3_0* CS___8__locals3; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__CTOR_OFFSET))(this);
		}

		::System::Action* _BuildType_b__3(::System::Int32 index, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* member)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__BUILDTYPE_B__3_OFFSET))(this, index, member);
		}
	};
}
