#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/Label.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_LOCALFIELD_OFFSET UNITYSDK_OFFSET(0x1E725960)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1E725940)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_SWITCHLABEL_OFFSET UNITYSDK_OFFSET(0x1E725980)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_LOCALFIELD_OFFSET UNITYSDK_OFFSET(0x1E725970)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1E725950)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_SWITCHLABEL_OFFSET UNITYSDK_OFFSET(0x1E725990)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7259A0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_DeserializeInfo_TypeDefinitionIndex = 31049;

	class DynamicObjectTypeBuilder_DeserializeInfo : public ::System::Object
	{
	public:
		::System::Reflection::Emit::LocalBuilder* _LocalField_k__BackingField; // 0x10
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _MemberInfo_k__BackingField; // 0x18
		::System::Reflection::Emit::Label _SwitchLabel_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* get_MemberInfo()
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Void set_MemberInfo(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_MEMBERINFO_OFFSET))(this, value);
		}

		::System::Reflection::Emit::LocalBuilder* get_LocalField()
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_LOCALFIELD_OFFSET))(this);
		}

		::System::Void set_LocalField(::System::Reflection::Emit::LocalBuilder* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_LOCALFIELD_OFFSET))(this, value);
		}

		::System::Reflection::Emit::Label get_SwitchLabel()
		{
			return ((::System::Reflection::Emit::Label(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_GET_SWITCHLABEL_OFFSET))(this);
		}

		::System::Void set_SwitchLabel(::System::Reflection::Emit::Label value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::Label))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER_DESERIALIZEINFO_SET_SWITCHLABEL_OFFSET))(this, value);
		}
	};
}
