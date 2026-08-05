#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System::Reflection { class ParameterInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_CONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1EB71350)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1EB71330)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_SET_CONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1EB71360)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_SET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1EB71340)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB71370)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_EmittableMemberAndConstructorParameter_TypeDefinitionIndex = 31317;

	class ObjectSerializationInfo_EmittableMemberAndConstructorParameter : public ::System::Object
	{
	public:
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _MemberInfo_k__BackingField; // 0x10
		::System::Reflection::ParameterInfo* _ConstructorParameter_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* get_MemberInfo()
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Void set_MemberInfo(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* value)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_SET_MEMBERINFO_OFFSET))(this, value);
		}

		::System::Reflection::ParameterInfo* get_ConstructorParameter()
		{
			return ((::System::Reflection::ParameterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_CONSTRUCTORPARAMETER_OFFSET))(this);
		}

		::System::Void set_ConstructorParameter(::System::Reflection::ParameterInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_SET_CONSTRUCTORPARAMETER_OFFSET))(this, value);
		}
	};
}
