#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/Newtonsoft/Json/Serialization/DefaultContractResolver.h"

namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace System::Reflection { class MemberInfo; }

#define STATETREESERIALIZE_STATETREESERIALIZESETTINGS_FIELDSONLYCONTRACTRESOLVER_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AF4CBC0)
#define STATETREESERIALIZE_STATETREESERIALIZESETTINGS_FIELDSONLYCONTRACTRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4CB50)

namespace StateTreeSerialize
{
	inline static constexpr unsigned int StateTreeSerializeSettings_FieldsOnlyContractResolver_TypeDefinitionIndex = 36891;

	class StateTreeSerializeSettings_FieldsOnlyContractResolver : public ::Newtonsoft::Json::Serialization::DefaultContractResolver
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREESERIALIZESETTINGS_FIELDSONLYCONTRACTRESOLVER__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreateProperty(::System::Reflection::MemberInfo* member, ::Newtonsoft::Json::MemberSerialization memberSerialization)
		{
			return ((::Newtonsoft::Json::Serialization::JsonProperty*(*)(::PVOID, ::System::Reflection::MemberInfo*, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + STATETREESERIALIZE_STATETREESERIALIZESETTINGS_FIELDSONLYCONTRACTRESOLVER_CREATEPROPERTY_OFFSET))(this, member, memberSerialization);
		}
	};
}
