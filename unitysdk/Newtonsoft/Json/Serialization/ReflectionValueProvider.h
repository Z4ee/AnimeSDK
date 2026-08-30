#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MemberInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x172F6050)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_SETVALUE_OFFSET UNITYSDK_OFFSET(0x172F6260)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x172E0980)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ReflectionValueProvider_TypeDefinitionIndex = 9689;

	class ReflectionValueProvider : public ::System::Object
	{
	public:
		::System::Reflection::MemberInfo* _memberInfo; // 0x10

		::System::Void _ctor(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValue(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONVALUEPROVIDER_GETVALUE_OFFSET))(this, a1);
		}
	};
}
