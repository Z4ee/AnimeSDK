#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_ISINITIALIZEDLOCALVARIABLE_OFFSET UNITYSDK_OFFSET(0x14F9CCC0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_LOCALVARIABLE_OFFSET UNITYSDK_OFFSET(0x14F9CCA0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x14F9CC80)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_SWITCHLABEL_OFFSET UNITYSDK_OFFSET(0x14F9CCE0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_ISINITIALIZEDLOCALVARIABLE_OFFSET UNITYSDK_OFFSET(0x14F9CCD0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_LOCALVARIABLE_OFFSET UNITYSDK_OFFSET(0x14F9CCB0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x14F9CC90)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_SWITCHLABEL_OFFSET UNITYSDK_OFFSET(0x14F9CCF0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F96840)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_DeserializeInfo_TypeDefinitionIndex = 7278;

	class DynamicObjectTypeBuilder_DeserializeInfo : public ::System::Object
	{
	public:
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _MemberInfo_k__BackingField; // 0x10
		::System::Reflection::Emit::LocalBuilder* _IsInitializedLocalVariable_k__BackingField; // 0x18
		::System::Reflection::Emit::LocalBuilder* _LocalVariable_k__BackingField; // 0x20
		::System::Reflection::Emit::Label _SwitchLabel_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* get_MemberInfo()
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Void set_MemberInfo(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_MEMBERINFO_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::LocalBuilder* get_LocalVariable()
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_LOCALVARIABLE_OFFSET))(this);
		}

		::System::Void set_LocalVariable(::System::Reflection::Emit::LocalBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_LOCALVARIABLE_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::LocalBuilder* get_IsInitializedLocalVariable()
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_ISINITIALIZEDLOCALVARIABLE_OFFSET))(this);
		}

		::System::Void set_IsInitializedLocalVariable(::System::Reflection::Emit::LocalBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_ISINITIALIZEDLOCALVARIABLE_OFFSET))(this, a1);
		}

		::System::Reflection::Emit::Label get_SwitchLabel()
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_SWITCHLABEL_OFFSET))(this);
		}

		::System::Void set_SwitchLabel(::System::Reflection::Emit::Label a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::Label))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_SWITCHLABEL_OFFSET))(this, a1);
		}
	};
}
