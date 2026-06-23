#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1D9DE050)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1D9DEFE0)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DEF40)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ReflectionValueProvider_TypeDefinitionIndex = 7153;

	class ReflectionValueProvider : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* _memberInfo; // 0x10

		::System::Void _ctor(::System::Reflection::MemberInfo* memberInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER__CTOR_OFFSET))(this, memberInfo);
		}

		::System::Void SetValue(::System::Object* target, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_SETVALUE_OFFSET))(this, target, value);
		}

		::System::Object* GetValue(::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_GETVALUE_OFFSET))(this, target);
		}
	};
}
