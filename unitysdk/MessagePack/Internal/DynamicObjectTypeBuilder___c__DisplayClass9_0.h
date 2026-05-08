#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Internal/ArgumentField.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack::Internal { class DynamicObjectTypeBuilder_DeserializeInfo; }
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_0__BUILDDESERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1AFC85B0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC85A0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass9_0_TypeDefinitionIndex = 26714;

	class DynamicObjectTypeBuilder___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10
		::MessagePack::Internal::ArgumentField reader; // 0x18
		::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter; // 0x28
		::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* infoList; // 0x30
		::System::Reflection::Emit::LocalBuilder* localResolver; // 0x38
		::MessagePack::Internal::ArgumentField argOptions; // 0x40
		::System::Nullable_1<::System::Reflection::Emit::Label> gotoDefault; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo* _BuildDeserialize_b__0(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* item)
		{
			return ((::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_0__BUILDDESERIALIZE_B__0_OFFSET))(this, item);
		}
	};
}
