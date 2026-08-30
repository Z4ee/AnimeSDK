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
namespace System::Reflection::Emit { class TypeBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS16_0__BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_G__FORBODY_0_OFFSET UNITYSDK_OFFSET(0x1B6A5780)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6A0EC0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass16_0_TypeDefinitionIndex = 7268;

	class DynamicObjectTypeBuilder___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Func_3<::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Action*>* tryEmitLoadCustomFormatter; // 0x10
		::MessagePack::Internal::ArgumentField options; // 0x18
		::System::Reflection::Emit::TypeBuilder* typeBuilder; // 0x28
		::System::Reflection::Emit::LocalBuilder* key; // 0x30
		::System::Reflection::Emit::LocalBuilder* localResolver; // 0x38
		::Il2CppArray<::MessagePack::Internal::DynamicObjectTypeBuilder_DeserializeInfo*>* infoList; // 0x40
		::System::Reflection::Emit::ILGenerator* il; // 0x48
		::System::Reflection::Emit::LocalBuilder* localResult; // 0x50
		::MessagePack::Internal::ArgumentField reader; // 0x58
		::System::Reflection::Emit::Label switchDefault; // 0x68
		::System::Nullable_1<::System::Reflection::Emit::Label> gotoDefault; // 0x6C
		::System::Boolean canOverwrite; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDeserializeInternalDeserializeLoopIntKey_g__ForBody_0(::System::Reflection::Emit::LocalBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS16_0__BUILDDESERIALIZEINTERNALDESERIALIZELOOPINTKEY_G__FORBODY_0_OFFSET))(this, a1);
		}
	};
}
