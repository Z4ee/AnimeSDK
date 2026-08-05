#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_ASMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1E7345B0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_ASSTRING_OFFSET UNITYSDK_OFFSET(0x1E7345C0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_GET_TBASEINFO_OFFSET UNITYSDK_OFFSET(0x1E734300)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E734680)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_SET_TBASEINFO_OFFSET UNITYSDK_OFFSET(0x1E734310)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E734620)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E734430)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E734320)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7345A0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E734590)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializedFieldInfo_TypeDefinitionIndex = 31162;

	class SerializedFieldInfo : public ::System::Object
	{
	public:
		::System::String* _baseInfo; // 0x10
		::System::Reflection::FieldInfo* _field; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Reflection::FieldInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO__CTOR_1_OFFSET))(this, info);
		}

		::System::String* get_TBaseInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_GET_TBASEINFO_OFFSET))(this);
		}

		::System::Void set_TBaseInfo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_SET_TBASEINFO_OFFSET))(this, value);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* AsMemberInfo()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_ASMEMBERINFO_OFFSET))(this);
		}

		::System::String* AsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_ASSTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::Reflection::FieldInfo* op_Implicit(::ParadoxNotion::Serialization::SerializedFieldInfo* value)
		{
			return ((::System::Reflection::FieldInfo*(*)(::ParadoxNotion::Serialization::SerializedFieldInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDFIELDINFO_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
