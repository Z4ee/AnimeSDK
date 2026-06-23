#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_ASMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1D543210)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1D543220)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1D542AD0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1D542C20)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_GET_TBASEINFO_OFFSET UNITYSDK_OFFSET(0x1D542AB0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D543320)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D5432E0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_SET_TBASEINFO_OFFSET UNITYSDK_OFFSET(0x1D542AC0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D543280)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D542DC0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D542CA0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D543130)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D543140)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D543150)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D543120)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializedUnityEventInfo_TypeDefinitionIndex = 29970;

	class SerializedUnityEventInfo : public ::System::Object
	{
	public:
		::System::String* _baseInfo; // 0x10
		::System::Reflection::MemberInfo* _memberInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Reflection::FieldInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO__CTOR_1_OFFSET))(this, info);
		}

		::System::Void _ctor_2(::System::Reflection::PropertyInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO__CTOR_2_OFFSET))(this, info);
		}

		::System::Void _ctor_3(::System::Reflection::MemberInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO__CTOR_3_OFFSET))(this, info);
		}

		::System::String* get_TBaseInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_GET_TBASEINFO_OFFSET))(this);
		}

		::System::Void set_TBaseInfo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_SET_TBASEINFO_OFFSET))(this, value);
		}

		::System::Boolean get_isStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Type* get_memberType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* AsMemberInfo()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_ASMEMBERINFO_OFFSET))(this);
		}

		::System::String* AsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_ASSTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::Reflection::FieldInfo* op_Implicit(::ParadoxNotion::Serialization::SerializedUnityEventInfo* value)
		{
			return ((::System::Reflection::FieldInfo*(*)(::ParadoxNotion::Serialization::SerializedUnityEventInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_OP_IMPLICIT_OFFSET))(value);
		}

		static ::System::Reflection::PropertyInfo* op_Implicit_1(::ParadoxNotion::Serialization::SerializedUnityEventInfo* value)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::ParadoxNotion::Serialization::SerializedUnityEventInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDUNITYEVENTINFO_OP_IMPLICIT_1_OFFSET))(value);
		}
	};
}
