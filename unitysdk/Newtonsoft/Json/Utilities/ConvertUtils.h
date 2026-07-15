#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/ConvertUtils_ConvertResult.h"
#include "unitysdk/Newtonsoft/Json/Utilities/ConvertUtils_TypeConvertKey.h"
#include "unitysdk/Newtonsoft/Json/Utilities/ParseResult.h"
#include "unitysdk/Newtonsoft/Json/Utilities/PrimitiveTypeCode.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json::Utilities { class TypeInformation; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class IConvertible; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Version; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::Globalization { class CultureInfo; }

#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERTORCAST_OFFSET UNITYSDK_OFFSET(0x15BAADE0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CREATECASTCONVERTER_OFFSET UNITYSDK_OFFSET(0x15BC12E0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ENSURETYPEASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x15BC2430)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x15B95A00)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_1_OFFSET UNITYSDK_OFFSET(0x15B83210)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x15B959C0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPEINFORMATION_OFFSET UNITYSDK_OFFSET(0x15BC11A0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_HEXCHARTOINT_OFFSET UNITYSDK_OFFSET(0x15BC2C10)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_HEXTEXTTOINT_OFFSET UNITYSDK_OFFSET(0x15BC2AF0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT32TRYPARSE_OFFSET UNITYSDK_OFFSET(0x15BC2660)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT64TRYPARSE_OFFSET UNITYSDK_OFFSET(0x15BC27E0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISCONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x15B9B470)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x15BAAD70)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_PARSETIMESPAN_OFFSET UNITYSDK_OFFSET(0x15B819E0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTGUID_OFFSET UNITYSDK_OFFSET(0x15BC2950)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTINTERNAL_OFFSET UNITYSDK_OFFSET(0x15BC1610)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x15BC1570)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_VERSIONTRYPARSE_OFFSET UNITYSDK_OFFSET(0x15BC2370)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BC2CA0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ConvertUtils_TypeDefinitionIndex = 9320;

	class ConvertUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Newtonsoft::Json::Utilities::TypeInformation*>** StaticGet_PrimitiveTypeCodes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Utilities::TypeInformation*>**)Il2CppClass::FromTypeDefinitionIndex(ConvertUtils_TypeDefinitionIndex)->GetStaticField(0x34740);
		}
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey, ::System::Func_2<::System::Object*, ::System::Object*>*>** StaticGet_CastConverters()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey, ::System::Func_2<::System::Object*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConvertUtils_TypeDefinitionIndex)->GetStaticField(0x34748);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>** StaticGet_TypeCodeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>**)Il2CppClass::FromTypeDefinitionIndex(ConvertUtils_TypeDefinitionIndex)->GetStaticField(0x34750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Utilities::PrimitiveTypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode_1(::System::Type* a1, ::System::Boolean& a2)
		{
			return ((::Newtonsoft::Json::Utilities::PrimitiveTypeCode(*)(::System::Type*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_1_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible* a1)
		{
			return ((::Newtonsoft::Json::Utilities::TypeInformation*(*)(::System::IConvertible*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPEINFORMATION_OFFSET))(a1);
		}

		static ::System::Boolean IsConvertible(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISCONVERTIBLE_OFFSET))(a1);
		}

		static ::System::TimeSpan ParseTimeSpan(::System::String* a1)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_PARSETIMESPAN_OFFSET))(a1);
		}

		static ::System::Func_2<::System::Object*, ::System::Object*>* CreateCastConverter(::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey a1)
		{
			return ((::System::Func_2<::System::Object*, ::System::Object*>*(*)(::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CREATECASTCONVERTER_OFFSET))(a1);
		}

		static ::System::Boolean TryConvert(::System::Object* a1, ::System::Globalization::CultureInfo* a2, ::System::Type* a3, ::System::Object*& a4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERT_OFFSET))(a1, a2, a3, a4);
		}

		static ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult TryConvertInternal(::System::Object* a1, ::System::Globalization::CultureInfo* a2, ::System::Type* a3, ::System::Object*& a4)
		{
			return ((::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Object* ConvertOrCast(::System::Object* a1, ::System::Globalization::CultureInfo* a2, ::System::Type* a3)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERTORCAST_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* EnsureTypeAssignable(::System::Object* a1, ::System::Type* a2, ::System::Type* a3)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ENSURETYPEASSIGNABLE_OFFSET))(a1, a2, a3);
		}

		static ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* a1)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETCONVERTER_OFFSET))(a1);
		}

		static ::System::Boolean VersionTryParse(::System::String* a1, ::System::Version*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Version*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_VERSIONTRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsInteger(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISINTEGER_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::Newtonsoft::Json::Utilities::ParseResult(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT32TRYPARSE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int64& a4)
		{
			return ((::Newtonsoft::Json::Utilities::ParseResult(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT64TRYPARSE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryConvertGuid(::System::String* a1, ::System::Guid& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTGUID_OFFSET))(a1, a2);
		}

		static ::System::Int32 HexTextToInt(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_HEXTEXTTOINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 HexCharToInt(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_HEXCHARTOINT_OFFSET))(a1);
		}
	};
}
