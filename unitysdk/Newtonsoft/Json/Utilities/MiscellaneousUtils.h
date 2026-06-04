#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class ArgumentOutOfRangeException; }
namespace System { class String; }

#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_BYTEARRAYCOMPARE_OFFSET UNITYSDK_OFFSET(0x18847010)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18844800)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_FORMATVALUEFORPRINT_OFFSET UNITYSDK_OFFSET(0x18860870)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETLOCALNAME_OFFSET UNITYSDK_OFFSET(0x1887B560)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETPREFIX_OFFSET UNITYSDK_OFFSET(0x1887B470)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETQUALIFIEDNAMEPARTS_OFFSET UNITYSDK_OFFSET(0x1887B4E0)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1887B3D0)
#define NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_VALUEEQUALS_OFFSET UNITYSDK_OFFSET(0x188614A0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int MiscellaneousUtils_TypeDefinitionIndex = 9329;

	class MiscellaneousUtils : public ::System::Object
	{
	public:
		static ::System::Boolean ValueEquals(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_VALUEEQUALS_OFFSET))(a1, a2);
		}

		static ::System::ArgumentOutOfRangeException* CreateArgumentOutOfRangeException(::System::String* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_CREATEARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ToString(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_TOSTRING_OFFSET))(a1);
		}

		static ::System::Int32 ByteArrayCompare(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_BYTEARRAYCOMPARE_OFFSET))(a1, a2);
		}

		static ::System::String* GetPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETPREFIX_OFFSET))(a1);
		}

		static ::System::String* GetLocalName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETLOCALNAME_OFFSET))(a1);
		}

		static ::System::Void GetQualifiedNameParts(::System::String* a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_GETQUALIFIEDNAMEPARTS_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatValueForPrint(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_MISCELLANEOUSUTILS_FORMATVALUEFORPRINT_OFFSET))(a1);
		}
	};
}
