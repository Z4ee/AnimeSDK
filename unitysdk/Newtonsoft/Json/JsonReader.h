#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DateParseHandling.h"
#include "unitysdk/Newtonsoft/Json/DateTimeZoneHandling.h"
#include "unitysdk/Newtonsoft/Json/FloatParseHandling.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerType.h"
#include "unitysdk/Newtonsoft/Json/JsonPosition.h"
#include "unitysdk/Newtonsoft/Json/JsonReader_State.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class JsonReaderException; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }

#define NEWTONSOFT_JSON_JSONREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BC309D0)
#define NEWTONSOFT_JSON_JSONREADER_CREATEUNEXPECTEDENDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BC30490)
#define NEWTONSOFT_JSON_JSONREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC309B0)
#define NEWTONSOFT_JSON_JSONREADER_GETCONTENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1BC2DD40)
#define NEWTONSOFT_JSON_JSONREADER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1BC2D730)
#define NEWTONSOFT_JSON_JSONREADER_GETTYPEFORCLOSETOKEN_OFFSET UNITYSDK_OFFSET(0x1BC30790)
#define NEWTONSOFT_JSON_JSONREADER_GET_CLOSEINPUT_OFFSET UNITYSDK_OFFSET(0x1BC2D2E0)
#define NEWTONSOFT_JSON_JSONREADER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1BC2D700)
#define NEWTONSOFT_JSON_JSONREADER_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1BC2D2D0)
#define NEWTONSOFT_JSON_JSONREADER_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1BC2D4C0)
#define NEWTONSOFT_JSON_JSONREADER_GET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BC2D3C0)
#define NEWTONSOFT_JSON_JSONREADER_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BC2D340)
#define NEWTONSOFT_JSON_JSONREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1BC2D5B0)
#define NEWTONSOFT_JSON_JSONREADER_GET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BC2D440)
#define NEWTONSOFT_JSON_JSONREADER_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x1BC2D4E0)
#define NEWTONSOFT_JSON_JSONREADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1BC2D5F0)
#define NEWTONSOFT_JSON_JSONREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1BC2D320)
#define NEWTONSOFT_JSON_JSONREADER_GET_SUPPORTMULTIPLECONTENT_OFFSET UNITYSDK_OFFSET(0x1BC2D300)
#define NEWTONSOFT_JSON_JSONREADER_GET_TOKENTYPE_OFFSET UNITYSDK_OFFSET(0x1BC2D570)
#define NEWTONSOFT_JSON_JSONREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BC2D590)
#define NEWTONSOFT_JSON_JSONREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC2D580)
#define NEWTONSOFT_JSON_JSONREADER_MOVETOCONTENT_OFFSET UNITYSDK_OFFSET(0x1BC30AA0)
#define NEWTONSOFT_JSON_JSONREADER_PEEK_OFFSET UNITYSDK_OFFSET(0x1BC2DAB0)
#define NEWTONSOFT_JSON_JSONREADER_POP_OFFSET UNITYSDK_OFFSET(0x1BC2DA10)
#define NEWTONSOFT_JSON_JSONREADER_PUSH_OFFSET UNITYSDK_OFFSET(0x1BC2D7B0)
#define NEWTONSOFT_JSON_JSONREADER_READANDASSERT_OFFSET UNITYSDK_OFFSET(0x1BC309F0)
#define NEWTONSOFT_JSON_JSONREADER_READANDMOVETOCONTENT_OFFSET UNITYSDK_OFFSET(0x1BC30A50)
#define NEWTONSOFT_JSON_JSONREADER_READARRAYINTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1BC2EAE0)
#define NEWTONSOFT_JSON_JSONREADER_READASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1BC2F170)
#define NEWTONSOFT_JSON_JSONREADER_READASBYTES_OFFSET UNITYSDK_OFFSET(0x1BC2E400)
#define NEWTONSOFT_JSON_JSONREADER_READASDATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1BC2FF60)
#define NEWTONSOFT_JSON_JSONREADER_READASDATETIME_OFFSET UNITYSDK_OFFSET(0x1BC2FA40)
#define NEWTONSOFT_JSON_JSONREADER_READASDECIMAL_OFFSET UNITYSDK_OFFSET(0x1BC2F570)
#define NEWTONSOFT_JSON_JSONREADER_READASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1BC2ED00)
#define NEWTONSOFT_JSON_JSONREADER_READASINT32_OFFSET UNITYSDK_OFFSET(0x1BC2DAC0)
#define NEWTONSOFT_JSON_JSONREADER_READASSTRING_OFFSET UNITYSDK_OFFSET(0x1BC2E090)
#define NEWTONSOFT_JSON_JSONREADER_READBOOLEANSTRING_OFFSET UNITYSDK_OFFSET(0x1BC2F400)
#define NEWTONSOFT_JSON_JSONREADER_READDATETIMEOFFSETSTRING_OFFSET UNITYSDK_OFFSET(0x1BC30280)
#define NEWTONSOFT_JSON_JSONREADER_READDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x1BC2FD60)
#define NEWTONSOFT_JSON_JSONREADER_READDECIMALSTRING_OFFSET UNITYSDK_OFFSET(0x1BC2F840)
#define NEWTONSOFT_JSON_JSONREADER_READDOUBLESTRING_OFFSET UNITYSDK_OFFSET(0x1BC2EFB0)
#define NEWTONSOFT_JSON_JSONREADER_READERREADANDASSERT_OFFSET UNITYSDK_OFFSET(0x1BC2EA80)
#define NEWTONSOFT_JSON_JSONREADER_READINT32STRING_OFFSET UNITYSDK_OFFSET(0x1BC2DEF0)
#define NEWTONSOFT_JSON_JSONREADER_READINTOWRAPPEDTYPEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC2E7A0)
#define NEWTONSOFT_JSON_JSONREADER_SETFINISHED_OFFSET UNITYSDK_OFFSET(0x1BC30770)
#define NEWTONSOFT_JSON_JSONREADER_SETPOSTVALUESTATE_OFFSET UNITYSDK_OFFSET(0x1BC30730)
#define NEWTONSOFT_JSON_JSONREADER_SETSTATEBASEDONCURRENT_OFFSET UNITYSDK_OFFSET(0x1BC30830)
#define NEWTONSOFT_JSON_JSONREADER_SETTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1BC305C0)
#define NEWTONSOFT_JSON_JSONREADER_SETTOKEN_2_OFFSET UNITYSDK_OFFSET(0x1BC2DDA0)
#define NEWTONSOFT_JSON_JSONREADER_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x1BC305B0)
#define NEWTONSOFT_JSON_JSONREADER_SET_CLOSEINPUT_OFFSET UNITYSDK_OFFSET(0x1BC2D2F0)
#define NEWTONSOFT_JSON_JSONREADER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1BC2D720)
#define NEWTONSOFT_JSON_JSONREADER_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1BC2D4D0)
#define NEWTONSOFT_JSON_JSONREADER_SET_DATEPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BC2D3D0)
#define NEWTONSOFT_JSON_JSONREADER_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BC2D350)
#define NEWTONSOFT_JSON_JSONREADER_SET_FLOATPARSEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BC2D450)
#define NEWTONSOFT_JSON_JSONREADER_SET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0x1BC2D4F0)
#define NEWTONSOFT_JSON_JSONREADER_SET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1BC2D330)
#define NEWTONSOFT_JSON_JSONREADER_SET_SUPPORTMULTIPLECONTENT_OFFSET UNITYSDK_OFFSET(0x1BC2D310)
#define NEWTONSOFT_JSON_JSONREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1BC30530)
#define NEWTONSOFT_JSON_JSONREADER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC30900)
#define NEWTONSOFT_JSON_JSONREADER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET UNITYSDK_OFFSET(0x1BC2DA00)
#define NEWTONSOFT_JSON_JSONREADER_VALIDATEEND_OFFSET UNITYSDK_OFFSET(0x1BC305D0)
#define NEWTONSOFT_JSON_JSONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2D780)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonReader_TypeDefinitionIndex = 6872;

	class JsonReader : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* _stack; // 0x10
		::System::String* _dateFormatString; // 0x18
		::System::Object* _value; // 0x20
		::Newtonsoft::Json::JsonPosition _currentPosition; // 0x28
		::System::Globalization::CultureInfo* _culture; // 0x40
		::Newtonsoft::Json::DateParseHandling _dateParseHandling; // 0x48
		::Newtonsoft::Json::JsonToken _tokenType; // 0x4C
		::System::Char _quoteChar; // 0x50
		::System::Boolean _CloseInput_k__BackingField; // 0x52
		::Newtonsoft::Json::FloatParseHandling _floatParseHandling; // 0x54
		::Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling; // 0x58
		::Newtonsoft::Json::JsonReader_State _currentState; // 0x5C
		::System::Nullable_1<::System::Int32> _maxDepth; // 0x60
		::System::Boolean _hasExceededMaxDepth; // 0x68
		::System::Boolean _SupportMultipleContent_k__BackingField; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonReader_State get_CurrentState()
		{
			return ((::Newtonsoft::Json::JsonReader_State(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Boolean get_CloseInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_CLOSEINPUT_OFFSET))(this);
		}

		::System::Void set_CloseInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_CLOSEINPUT_OFFSET))(this, value);
		}

		::System::Boolean get_SupportMultipleContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_SUPPORTMULTIPLECONTENT_OFFSET))(this);
		}

		::System::Void set_SupportMultipleContent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_SUPPORTMULTIPLECONTENT_OFFSET))(this, value);
		}

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Void set_QuoteChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_QUOTECHAR_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling()
		{
			return ((::Newtonsoft::Json::DateTimeZoneHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_DATETIMEZONEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_DATETIMEZONEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateParseHandling get_DateParseHandling()
		{
			return ((::Newtonsoft::Json::DateParseHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_DATEPARSEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateParseHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_DATEPARSEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling()
		{
			return ((::Newtonsoft::Json::FloatParseHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_FLOATPARSEHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatParseHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_FLOATPARSEHANDLING_OFFSET))(this, value);
		}

		::System::String* get_DateFormatString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_DATEFORMATSTRING_OFFSET))(this);
		}

		::System::Void set_DateFormatString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_DATEFORMATSTRING_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Int32> get_MaxDepth()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_MAXDEPTH_OFFSET))(this);
		}

		::System::Void set_MaxDepth(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_MAXDEPTH_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonToken get_TokenType()
		{
			return ((::Newtonsoft::Json::JsonToken(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_TOKENTYPE_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_PATH_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GET_CULTURE_OFFSET))(this);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SET_CULTURE_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonPosition GetPosition(::System::Int32 depth)
		{
			return ((::Newtonsoft::Json::JsonPosition(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GETPOSITION_OFFSET))(this, depth);
		}

		::System::Void Push(::Newtonsoft::Json::JsonContainerType value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_PUSH_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonContainerType Pop()
		{
			return ((::Newtonsoft::Json::JsonContainerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_POP_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonContainerType Peek()
		{
			return ((::Newtonsoft::Json::JsonContainerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_PEEK_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> ReadAsInt32()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASINT32_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> ReadInt32String(::System::String* s)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READINT32STRING_OFFSET))(this, s);
		}

		::System::String* ReadAsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadAsBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASBYTES_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadArrayIntoByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READARRAYINTOBYTEARRAY_OFFSET))(this);
		}

		::System::Nullable_1<::System::Double> ReadAsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDOUBLE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Double> ReadDoubleString(::System::String* s)
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READDOUBLESTRING_OFFSET))(this, s);
		}

		::System::Nullable_1<::System::Boolean> ReadAsBoolean()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASBOOLEAN_OFFSET))(this);
		}

		::System::Nullable_1<::System::Boolean> ReadBooleanString(::System::String* s)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READBOOLEANSTRING_OFFSET))(this, s);
		}

		::System::Nullable_1<::System::Decimal> ReadAsDecimal()
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDECIMAL_OFFSET))(this);
		}

		::System::Nullable_1<::System::Decimal> ReadDecimalString(::System::String* s)
		{
			return ((::System::Nullable_1<::System::Decimal>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READDECIMALSTRING_OFFSET))(this, s);
		}

		::System::Nullable_1<::System::DateTime> ReadAsDateTime()
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDATETIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::DateTime> ReadDateTimeString(::System::String* s)
		{
			return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READDATETIMESTRING_OFFSET))(this, s);
		}

		::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset()
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READASDATETIMEOFFSET_OFFSET))(this);
		}

		::System::Nullable_1<::System::DateTimeOffset> ReadDateTimeOffsetString(::System::String* s)
		{
			return ((::System::Nullable_1<::System::DateTimeOffset>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READDATETIMEOFFSETSTRING_OFFSET))(this, s);
		}

		::System::Void ReaderReadAndAssert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READERREADANDASSERT_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonReaderException* CreateUnexpectedEndException()
		{
			return ((::Newtonsoft::Json::JsonReaderException*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_CREATEUNEXPECTEDENDEXCEPTION_OFFSET))(this);
		}

		::System::Void ReadIntoWrappedTypeObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READINTOWRAPPEDTYPEOBJECT_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SKIP_OFFSET))(this);
		}

		::System::Void SetToken(::Newtonsoft::Json::JsonToken newToken)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETTOKEN_OFFSET))(this, newToken);
		}

		::System::Void SetToken_1(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETTOKEN_1_OFFSET))(this, newToken, value);
		}

		::System::Void SetToken_2(::Newtonsoft::Json::JsonToken newToken, ::System::Object* value, ::System::Boolean updateIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETTOKEN_2_OFFSET))(this, newToken, value, updateIndex);
		}

		::System::Void SetPostValueState(::System::Boolean updateIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETPOSTVALUESTATE_OFFSET))(this, updateIndex);
		}

		::System::Void UpdateScopeWithFinishedValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET))(this);
		}

		::System::Void ValidateEnd(::Newtonsoft::Json::JsonToken endToken)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_VALIDATEEND_OFFSET))(this, endToken);
		}

		::System::Void SetStateBasedOnCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETSTATEBASEDONCURRENT_OFFSET))(this);
		}

		::System::Void SetFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SETFINISHED_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonContainerType GetTypeForCloseToken(::Newtonsoft::Json::JsonToken token)
		{
			return ((::Newtonsoft::Json::JsonContainerType(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GETTYPEFORCLOSETOKEN_OFFSET))(this, token);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_CLOSE_OFFSET))(this);
		}

		::System::Void ReadAndAssert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READANDASSERT_OFFSET))(this);
		}

		::System::Boolean ReadAndMoveToContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_READANDMOVETOCONTENT_OFFSET))(this);
		}

		::System::Boolean MoveToContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_MOVETOCONTENT_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonToken GetContentToken()
		{
			return ((::Newtonsoft::Json::JsonToken(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREADER_GETCONTENTTOKEN_OFFSET))(this);
		}
	};
}
