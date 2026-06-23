#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_CUSTOMSERIALIZATIONPOLICY_GET_ALLOWNONSERIALIZABLETYPES_OFFSET UNITYSDK_OFFSET(0x1D544640)
#define SIRENIX_SERIALIZATION_CUSTOMSERIALIZATIONPOLICY_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D544630)
#define SIRENIX_SERIALIZATION_CUSTOMSERIALIZATIONPOLICY_SHOULDSERIALIZEMEMBER_OFFSET UNITYSDK_OFFSET(0x1D544650)
#define SIRENIX_SERIALIZATION_CUSTOMSERIALIZATIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D544580)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int CustomSerializationPolicy_TypeDefinitionIndex = 7498;

	class CustomSerializationPolicy : public ::System::Object
	{
	public:
		::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>* shouldSerializeFunc; // 0x10
		::System::String* id; // 0x18
		::System::Boolean allowNonSerializableTypes; // 0x20

		::System::Void _ctor(::System::String* id, ::System::Boolean allowNonSerializableTypes, ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>* shouldSerializeFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMSERIALIZATIONPOLICY__CTOR_OFFSET))(this, id, allowNonSerializableTypes, shouldSerializeFunc);
		}

		::System::String* get_ID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMSERIALIZATIONPOLICY_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_AllowNonSerializableTypes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMSERIALIZATIONPOLICY_GET_ALLOWNONSERIALIZABLETYPES_OFFSET))(this);
		}

		::System::Boolean ShouldSerializeMember(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMSERIALIZATIONPOLICY_SHOULDSERIALIZEMEMBER_OFFSET))(this, member);
		}
	};
}
