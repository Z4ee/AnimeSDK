#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class ArgumentOutOfRangeException; }
namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_BYTEARRAYCOMPARE_OFFSET UNITYSDK_OFFSET(0x1E3BE700)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E3BE780)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_FORMATVALUEFORPRINT_OFFSET UNITYSDK_OFFSET(0x1E3C1450)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETLOCALNAME_OFFSET UNITYSDK_OFFSET(0x1E3C13E0)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETPREFIX_OFFSET UNITYSDK_OFFSET(0x1E3C12F0)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETQUALIFIEDNAMEPARTS_OFFSET UNITYSDK_OFFSET(0x1E3C1360)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C1250)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_VALUEEQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C0FA0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int MiscellaneousUtils_TypeDefinitionIndex = 7070;

	class MiscellaneousUtils : public ::System::Object
	{
	public:
		static ::System::Boolean ValueEquals(::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_VALUEEQUALS_OFFSET))(objA, objB);
		}

		static ::System::ArgumentOutOfRangeException* CreateArgumentOutOfRangeException(::System::String* paramName, ::System::Object* actualValue, ::System::String* message)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(paramName, actualValue, message);
		}

		static ::System::String* ToString(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_TOSTRING_OFFSET))(value);
		}

		static ::System::Int32 ByteArrayCompare(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_BYTEARRAYCOMPARE_OFFSET))(a1, a2);
		}

		static ::System::String* GetPrefix(::System::String* qualifiedName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETPREFIX_OFFSET))(qualifiedName);
		}

		static ::System::String* GetLocalName(::System::String* qualifiedName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETLOCALNAME_OFFSET))(qualifiedName);
		}

		static ::System::Void GetQualifiedNameParts(::System::String* qualifiedName, ::System::String*& prefix, ::System::String*& localName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETQUALIFIEDNAMEPARTS_OFFSET))(qualifiedName, prefix, localName);
		}

		static ::System::String* FormatValueForPrint(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_FORMATVALUEFORPRINT_OFFSET))(value);
		}
	};
}
