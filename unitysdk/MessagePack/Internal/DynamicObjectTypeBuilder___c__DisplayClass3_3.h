#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass3_0; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Action; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__BUILDTYPE_B__3_OFFSET UNITYSDK_OFFSET(0x166A3990)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16697CB0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_3_TypeDefinitionIndex = 7274;

	class DynamicObjectTypeBuilder___c__DisplayClass3_3 : public ::System::Object
	{
	public:
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass3_0* CS___8__locals3; // 0x10
		::System::Reflection::Emit::ILGenerator* il; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__CTOR_OFFSET))(this);
		}

		::System::Action* _BuildType_b__3(::System::Int32 a1, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__BUILDTYPE_B__3_OFFSET))(this, a1, a2);
		}
	};
}
