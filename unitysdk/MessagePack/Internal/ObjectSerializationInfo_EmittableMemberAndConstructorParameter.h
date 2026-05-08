#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System::Reflection { class ParameterInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_CONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B41CD10)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1B41CCF0)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_SET_CONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B41CD20)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_SET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1B41CD00)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41CD30)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_EmittableMemberAndConstructorParameter_TypeDefinitionIndex = 27839;

	class ObjectSerializationInfo_EmittableMemberAndConstructorParameter : public ::System::Object
	{
	public:
		::System::Reflection::ParameterInfo* _ConstructorParameter_k__BackingField; // 0x10
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _MemberInfo_k__BackingField; // 0x18

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
