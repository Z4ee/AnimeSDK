#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_ASMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1EB7BAB0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7BAC0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_GET_TBASEINFO_OFFSET UNITYSDK_OFFSET(0x1EB7B9D0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EB7BAE0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_SET_TBASEINFO_OFFSET UNITYSDK_OFFSET(0x1EB7B9E0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7BAD0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB7BA20)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB7B9F0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7BAA0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7BA90)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializedTypeInfo_TypeDefinitionIndex = 29797;

	class SerializedTypeInfo : public ::System::Object
	{
	public:
		::System::String* _baseInfo; // 0x10
		::System::Type* _type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO__CTOR_1_OFFSET))(this, info);
		}

		::System::String* get_TBaseInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_GET_TBASEINFO_OFFSET))(this);
		}

		::System::Void set_TBaseInfo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_SET_TBASEINFO_OFFSET))(this, value);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* AsMemberInfo()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_ASMEMBERINFO_OFFSET))(this);
		}

		::System::String* AsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_ASSTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::Type* op_Implicit(::ParadoxNotion::Serialization::SerializedTypeInfo* value)
		{
			return ((::System::Type*(*)(::ParadoxNotion::Serialization::SerializedTypeInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDTYPEINFO_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
