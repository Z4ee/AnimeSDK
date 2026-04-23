#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1675FA0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22AD320)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22AD260)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GET_INITIALTYPE_OFFSET UNITYSDK_OFFSET(0x5580)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x743C0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ConvertUtils_TypeConvertKey_TypeDefinitionIndex = 8406;

	struct alignas(8) ConvertUtils_TypeConvertKey
	{
		::System::Type* _initialType; // 0x10
		::System::Type* _targetType; // 0x18

		::System::Void _ctor(::System::Type* initialType, ::System::Type* targetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY__CTOR_OFFSET))(this, initialType, targetType);
		}

		::System::Type* get_InitialType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GET_INITIALTYPE_OFFSET))(this);
		}

		::System::Type* get_TargetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GET_TARGETTYPE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TYPECONVERTKEY_EQUALS_1_OFFSET))(this, other);
		}
	};
}
