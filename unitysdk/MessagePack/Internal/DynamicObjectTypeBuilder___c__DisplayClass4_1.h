#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder___c__DisplayClass4_0; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Action; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS4_1__BUILDFORMATTERTODYNAMICMETHOD_B__3_OFFSET UNITYSDK_OFFSET(0x1E7AD070)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS4_1__BUILDFORMATTERTODYNAMICMETHOD_B__4_OFFSET UNITYSDK_OFFSET(0x1E7AD2E0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AD060)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass4_1_TypeDefinitionIndex = 31053;

	class DynamicObjectTypeBuilder___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::MessagePack::Internal::DynamicObjectTypeBuilder___c__DisplayClass4_0* CS___8__locals1; // 0x10
		::System::Reflection::Emit::ILGenerator* il; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Void _BuildFormatterToDynamicMethod_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS4_1__BUILDFORMATTERTODYNAMICMETHOD_B__3_OFFSET))(this);
		}

		::System::Action* _BuildFormatterToDynamicMethod_b__4(::System::Int32 index, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* member)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS4_1__BUILDFORMATTERTODYNAMICMETHOD_B__4_OFFSET))(this, index, member);
		}
	};
}
