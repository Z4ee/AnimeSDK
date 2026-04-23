#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System::Reflection { class ParameterInfo; }

#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_CONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x1735E250)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1735E240)
#define MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1735C790)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ObjectSerializationInfo_EmittableMemberAndConstructorParameter_TypeDefinitionIndex = 9383;

	class ObjectSerializationInfo_EmittableMemberAndConstructorParameter : public ::System::Object
	{
	public:
		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* _MemberInfo_k__BackingField; // 0x10
		::System::Reflection::ParameterInfo* _ConstructorParameter_k__BackingField; // 0x18

		::System::Void _ctor(::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* memberInfo, ::System::Reflection::ParameterInfo* constructorParameter)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER__CTOR_OFFSET))(this, memberInfo, constructorParameter);
		}

		::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* get_MemberInfo()
		{
			return ((::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_MEMBERINFO_OFFSET))(this);
		}

		::System::Reflection::ParameterInfo* get_ConstructorParameter()
		{
			return ((::System::Reflection::ParameterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_OBJECTSERIALIZATIONINFO_EMITTABLEMEMBERANDCONSTRUCTORPARAMETER_GET_CONSTRUCTORPARAMETER_OFFSET))(this);
		}
	};
}
