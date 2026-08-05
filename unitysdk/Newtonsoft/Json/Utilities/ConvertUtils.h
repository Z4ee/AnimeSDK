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

#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERTORCAST_OFFSET UNITYSDK_OFFSET(0x1ED3E5D0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERT_OFFSET UNITYSDK_OFFSET(0x1ED3D370)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CREATECASTCONVERTER_OFFSET UNITYSDK_OFFSET(0x1ED3D050)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ENSURETYPEASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x1ED3E410)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1ED3B360)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_1_OFFSET UNITYSDK_OFFSET(0x1ED3CA30)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1ED3B300)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1ED3CEB0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_HEXCHARTOINT_OFFSET UNITYSDK_OFFSET(0x1ED3EFD0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_HEXTEXTTOINT_OFFSET UNITYSDK_OFFSET(0x1ED3EEF0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT32TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1ED3E900)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT64TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1ED3EAF0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISCONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x1ED3CFE0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x1ED3E240)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_PARSETIMESPAN_OFFSET UNITYSDK_OFFSET(0x1ED3D040)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTGUID_OFFSET UNITYSDK_OFFSET(0x1ED3ECA0)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED3D520)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERT_OFFSET UNITYSDK_OFFSET(0x1ED3E170)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_VERSIONTRYPARSE_OFFSET UNITYSDK_OFFSET(0x1ED3E300)
#define NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED3F090)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int ConvertUtils_TypeDefinitionIndex = 7045;

	class ConvertUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Newtonsoft::Json::Utilities::TypeInformation*>** StaticGet_PrimitiveTypeCodes()
		{
			return (::Il2CppArray<::Newtonsoft::Json::Utilities::TypeInformation*>**)Il2CppClass::FromTypeDefinitionIndex(ConvertUtils_TypeDefinitionIndex)->GetStaticField(0x5F30);
		}
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey, ::System::Func_2<::System::Object*, ::System::Object*>*>** StaticGet_CastConverters()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey, ::System::Func_2<::System::Object*, ::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConvertUtils_TypeDefinitionIndex)->GetStaticField(0x5F38);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>** StaticGet_TypeCodeMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>**)Il2CppClass::FromTypeDefinitionIndex(ConvertUtils_TypeDefinitionIndex)->GetStaticField(0x5F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t)
		{
			return ((::Newtonsoft::Json::Utilities::PrimitiveTypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_OFFSET))(t);
		}

		static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode_1(::System::Type* t, ::System::Boolean& isEnum)
		{
			return ((::Newtonsoft::Json::Utilities::PrimitiveTypeCode(*)(::System::Type*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPECODE_1_OFFSET))(t, isEnum);
		}

		static ::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible* convertable)
		{
			return ((::Newtonsoft::Json::Utilities::TypeInformation*(*)(::System::IConvertible*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETTYPEINFORMATION_OFFSET))(convertable);
		}

		static ::System::Boolean IsConvertible(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISCONVERTIBLE_OFFSET))(t);
		}

		static ::System::TimeSpan ParseTimeSpan(::System::String* input)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_PARSETIMESPAN_OFFSET))(input);
		}

		static ::System::Func_2<::System::Object*, ::System::Object*>* CreateCastConverter(::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey t)
		{
			return ((::System::Func_2<::System::Object*, ::System::Object*>*(*)(::Newtonsoft::Json::Utilities::ConvertUtils_TypeConvertKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CREATECASTCONVERTER_OFFSET))(t);
		}

		static ::System::Object* Convert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERT_OFFSET))(initialValue, culture, targetType);
		}

		static ::System::Boolean TryConvert(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType, ::System::Object*& value)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERT_OFFSET))(initialValue, culture, targetType, value);
		}

		static ::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult TryConvertInternal(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType, ::System::Object*& value)
		{
			return ((::Newtonsoft::Json::Utilities::ConvertUtils_ConvertResult(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTINTERNAL_OFFSET))(initialValue, culture, targetType, value);
		}

		static ::System::Object* ConvertOrCast(::System::Object* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Globalization::CultureInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_CONVERTORCAST_OFFSET))(initialValue, culture, targetType);
		}

		static ::System::Object* EnsureTypeAssignable(::System::Object* value, ::System::Type* initialType, ::System::Type* targetType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ENSURETYPEASSIGNABLE_OFFSET))(value, initialType, targetType);
		}

		static ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* t)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_GETCONVERTER_OFFSET))(t);
		}

		static ::System::Boolean VersionTryParse(::System::String* input, ::System::Version*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Version*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_VERSIONTRYPARSE_OFFSET))(input, result);
		}

		static ::System::Boolean IsInteger(::System::Object* value)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_ISINTEGER_OFFSET))(value);
		}

		static ::Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::Il2CppArray<::System::Char>* chars, ::System::Int32 start, ::System::Int32 length, ::System::Int32& value)
		{
			return ((::Newtonsoft::Json::Utilities::ParseResult(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT32TRYPARSE_OFFSET))(chars, start, length, value);
		}

		static ::Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::Il2CppArray<::System::Char>* chars, ::System::Int32 start, ::System::Int32 length, ::System::Int64& value)
		{
			return ((::Newtonsoft::Json::Utilities::ParseResult(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_INT64TRYPARSE_OFFSET))(chars, start, length, value);
		}

		static ::System::Boolean TryConvertGuid(::System::String* s, ::System::Guid& g)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Guid&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_TRYCONVERTGUID_OFFSET))(s, g);
		}

		static ::System::Int32 HexTextToInt(::Il2CppArray<::System::Char>* text, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_HEXTEXTTOINT_OFFSET))(text, start, end);
		}

		static ::System::Int32 HexCharToInt(::System::Char ch)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_CONVERTUTILS_HEXCHARTOINT_OFFSET))(ch);
		}
	};
}
