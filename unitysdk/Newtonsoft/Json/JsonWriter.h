#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DateFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/DateTimeZoneHandling.h"
#include "unitysdk/Newtonsoft/Json/FloatFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerType.h"
#include "unitysdk/Newtonsoft/Json/JsonPosition.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter_State.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/Newtonsoft/Json/Utilities/PrimitiveTypeCode.h"
#include "unitysdk/Newtonsoft/Json/WriteState.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriterException; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }

#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1BB9FDB0)
#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETECLOSE_OFFSET UNITYSDK_OFFSET(0x1BBA0ED0)
#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BBA1190)
#define NEWTONSOFT_JSON_JSONWRITER_BUILDSTATEARRAY_OFFSET UNITYSDK_OFFSET(0x1BB9E2A0)
#define NEWTONSOFT_JSON_JSONWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BB9FD50)
#define NEWTONSOFT_JSON_JSONWRITER_CREATEUNSUPPORTEDTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BBA32D0)
#define NEWTONSOFT_JSON_JSONWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BBA32B0)
#define NEWTONSOFT_JSON_JSONWRITER_GETCLOSETOKENFORTYPE_OFFSET UNITYSDK_OFFSET(0x1BBA0E40)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CLOSEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1BB9F640)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CONTAINERPATH_OFFSET UNITYSDK_OFFSET(0x1BB9F720)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1BB9FB70)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB9F930)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1BB9FB50)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB9F9B0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB9FAD0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1BB9F8B0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1BB9F7A0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB9FA30)
#define NEWTONSOFT_JSON_JSONWRITER_GET_TOP_OFFSET UNITYSDK_OFFSET(0x1BB9F660)
#define NEWTONSOFT_JSON_JSONWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1BB9F690)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1BBA3110)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEEND_OFFSET UNITYSDK_OFFSET(0x1BB9FE80)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BB9FF20)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITERAW_OFFSET UNITYSDK_OFFSET(0x1BBA1400)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITESTART_OFFSET UNITYSDK_OFFSET(0x1BB9FE40)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1BBA13C0)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1BBA3190)
#define NEWTONSOFT_JSON_JSONWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1BB9FAC0)
#define NEWTONSOFT_JSON_JSONWRITER_PEEK_OFFSET UNITYSDK_OFFSET(0x1BB9F680)
#define NEWTONSOFT_JSON_JSONWRITER_POP_OFFSET UNITYSDK_OFFSET(0x1BB9FCF0)
#define NEWTONSOFT_JSON_JSONWRITER_PUSH_OFFSET UNITYSDK_OFFSET(0x1BB9FBD0)
#define NEWTONSOFT_JSON_JSONWRITER_SETWRITESTATE_OFFSET UNITYSDK_OFFSET(0x1BBA3350)
#define NEWTONSOFT_JSON_JSONWRITER_SET_CLOSEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1BB9F650)
#define NEWTONSOFT_JSON_JSONWRITER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1BB9FB90)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB9F940)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x1BB9FB60)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB9F9C0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB9FAE0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1BB9F8C0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x1BB9FA40)
#define NEWTONSOFT_JSON_JSONWRITER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BBA3200)
#define NEWTONSOFT_JSON_JSONWRITER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET UNITYSDK_OFFSET(0x1BB9FBC0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1BBA3100)
#define NEWTONSOFT_JSON_JSONWRITER_WRITECONSTRUCTORDATE_OFFSET UNITYSDK_OFFSET(0x1BBA0C00)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDARRAY_OFFSET UNITYSDK_OFFSET(0x1BB9FEC0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BB9FF00)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BB9FE70)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_1_OFFSET UNITYSDK_OFFSET(0x1BB9FF50)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_2_OFFSET UNITYSDK_OFFSET(0x1BBA1150)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x1BB9FF40)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTSPACE_OFFSET UNITYSDK_OFFSET(0x1BBA1180)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1BBA1160)
#define NEWTONSOFT_JSON_JSONWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1BBA13A0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1BB9FF30)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BB9FF10)
#define NEWTONSOFT_JSON_JSONWRITER_WRITERAWVALUE_OFFSET UNITYSDK_OFFSET(0x1BBA1410)
#define NEWTONSOFT_JSON_JSONWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1BBA13F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x1BB9FE90)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BB9FED0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x1BB9FE10)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_1_OFFSET UNITYSDK_OFFSET(0x1BBA00C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_2_OFFSET UNITYSDK_OFFSET(0x1BBA0180)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_3_OFFSET UNITYSDK_OFFSET(0x1BBA0890)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_4_OFFSET UNITYSDK_OFFSET(0x1BBA08A0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x1BBA0000)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1BBA13D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEDELIMITER_OFFSET UNITYSDK_OFFSET(0x1BBA1170)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x1BBA1590)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x1BBA15B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x1BBA15D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x1BBA15F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x1BBA1610)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x1BBA1630)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x1BBA1650)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x1BBA1670)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x1BBA1690)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x1BBA16C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1BBA1470)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x1BBA16F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_21_OFFSET UNITYSDK_OFFSET(0x1BBA1720)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_22_OFFSET UNITYSDK_OFFSET(0x1BBA1750)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_23_OFFSET UNITYSDK_OFFSET(0x1BBA1780)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_24_OFFSET UNITYSDK_OFFSET(0x1BBA17B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_25_OFFSET UNITYSDK_OFFSET(0x1BBA17E0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_26_OFFSET UNITYSDK_OFFSET(0x1BBA1810)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_27_OFFSET UNITYSDK_OFFSET(0x1BBA1840)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_28_OFFSET UNITYSDK_OFFSET(0x1BBA1870)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_29_OFFSET UNITYSDK_OFFSET(0x1BBA18A0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1BBA1490)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_30_OFFSET UNITYSDK_OFFSET(0x1BBA18D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_31_OFFSET UNITYSDK_OFFSET(0x1BBA1910)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_32_OFFSET UNITYSDK_OFFSET(0x1BBA1940)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_33_OFFSET UNITYSDK_OFFSET(0x1BBA1980)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_34_OFFSET UNITYSDK_OFFSET(0x1BBA19C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_35_OFFSET UNITYSDK_OFFSET(0x1BBA19F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_36_OFFSET UNITYSDK_OFFSET(0x1BBA1A20)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_37_OFFSET UNITYSDK_OFFSET(0x1BBA1AB0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_38_OFFSET UNITYSDK_OFFSET(0x1BBA1BD0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1BBA14B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x1BBA14D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x1BBA14F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x1BBA1510)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x1BBA1530)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x1BBA1550)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x1BBA1570)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1BBA1450)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1BBA3120)
#define NEWTONSOFT_JSON_JSONWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB9E7E0)
#define NEWTONSOFT_JSON_JSONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB9FBA0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonWriter_TypeDefinitionIndex = 6884;

	class JsonWriter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::JsonWriter_State>*>** StaticGet_StateArrayTempate()
		{
			return (::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::JsonWriter_State>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonWriter_TypeDefinitionIndex)->GetStaticField(0x5EC0);
		}
		static ::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::JsonWriter_State>*>** StaticGet_StateArray()
		{
			return (::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::JsonWriter_State>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonWriter_TypeDefinitionIndex)->GetStaticField(0x5EC8);
		}
		::System::String* _dateFormatString; // 0x10
		::System::Globalization::CultureInfo* _culture; // 0x18
		::Newtonsoft::Json::JsonPosition _currentPosition; // 0x20
		::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* _stack; // 0x38
		::Newtonsoft::Json::Formatting _formatting; // 0x40
		::Newtonsoft::Json::StringEscapeHandling _stringEscapeHandling; // 0x44
		::Newtonsoft::Json::FloatFormatHandling _floatFormatHandling; // 0x48
		::Newtonsoft::Json::DateFormatHandling _dateFormatHandling; // 0x4C
		::System::Boolean _CloseOutput_k__BackingField; // 0x50
		::Newtonsoft::Json::JsonWriter_State _currentState; // 0x54
		::Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling; // 0x58

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::JsonWriter_State>*>* BuildStateArray()
		{
			return ((::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::JsonWriter_State>*>*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_BUILDSTATEARRAY_OFFSET))();
		}

		::System::Boolean get_CloseOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CLOSEOUTPUT_OFFSET))(this);
		}

		::System::Void set_CloseOutput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_CLOSEOUTPUT_OFFSET))(this, value);
		}

		::System::Int32 get_Top()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_TOP_OFFSET))(this);
		}

		::Newtonsoft::Json::WriteState get_WriteState()
		{
			return ((::Newtonsoft::Json::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::String* get_ContainerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CONTAINERPATH_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_PATH_OFFSET))(this);
		}

		::Newtonsoft::Json::Formatting get_Formatting()
		{
			return ((::Newtonsoft::Json::Formatting(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_FORMATTING_OFFSET))(this);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_FORMATTING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling()
		{
			return ((::Newtonsoft::Json::DateFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling()
		{
			return ((::Newtonsoft::Json::DateTimeZoneHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATETIMEZONEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATETIMEZONEHANDLING_OFFSET))(this, value);
		}

		::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling()
		{
			return ((::Newtonsoft::Json::StringEscapeHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_STRINGESCAPEHANDLING_OFFSET))(this);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_STRINGESCAPEHANDLING_OFFSET))(this, value);
		}

		::System::Void OnStringEscapeHandlingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET))(this);
		}

		::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling()
		{
			return ((::Newtonsoft::Json::FloatFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_FLOATFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_FLOATFORMATHANDLING_OFFSET))(this, value);
		}

		::System::String* get_DateFormatString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATSTRING_OFFSET))(this);
		}

		::System::Void set_DateFormatString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATSTRING_OFFSET))(this, value);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CULTURE_OFFSET))(this);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_CULTURE_OFFSET))(this, value);
		}

		::System::Void UpdateScopeWithFinishedValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET))(this);
		}

		::System::Void Push(::Newtonsoft::Json::JsonContainerType value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_PUSH_OFFSET))(this, value);
		}

		::Newtonsoft::Json::JsonContainerType Pop()
		{
			return ((::Newtonsoft::Json::JsonContainerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_POP_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonContainerType Peek()
		{
			return ((::Newtonsoft::Json::JsonContainerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_PEEK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteStartObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTOBJECT_OFFSET))(this);
		}

		::System::Void WriteEndObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDOBJECT_OFFSET))(this);
		}

		::System::Void WriteStartArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTARRAY_OFFSET))(this);
		}

		::System::Void WriteEndArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDARRAY_OFFSET))(this);
		}

		::System::Void WriteStartConstructor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(this, name);
		}

		::System::Void WriteEndConstructor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDCONSTRUCTOR_OFFSET))(this);
		}

		::System::Void WritePropertyName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET))(this, name);
		}

		::System::Void WritePropertyName_1(::System::String* name, ::System::Boolean escape)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_1_OFFSET))(this, name, escape);
		}

		::System::Void WriteEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET))(this);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET))(this, reader);
		}

		::System::Void WriteToken_1(::Newtonsoft::Json::JsonReader* reader, ::System::Boolean writeChildren)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_1_OFFSET))(this, reader, writeChildren);
		}

		::System::Void WriteToken_2(::Newtonsoft::Json::JsonToken token, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_2_OFFSET))(this, token, value);
		}

		::System::Void WriteToken_3(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_3_OFFSET))(this, token);
		}

		::System::Void WriteToken_4(::Newtonsoft::Json::JsonReader* reader, ::System::Boolean writeChildren, ::System::Boolean writeDateConstructorAsDate, ::System::Boolean writeComments)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_4_OFFSET))(this, reader, writeChildren, writeDateConstructorAsDate, writeComments);
		}

		::System::Void WriteConstructorDate(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITECONSTRUCTORDATE_OFFSET))(this, reader);
		}

		::System::Void WriteEnd_1(::Newtonsoft::Json::JsonContainerType type)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_1_OFFSET))(this, type);
		}

		::System::Void AutoCompleteAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEALL_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonToken GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType type)
		{
			return ((::Newtonsoft::Json::JsonToken(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GETCLOSETOKENFORTYPE_OFFSET))(this, type);
		}

		::System::Void AutoCompleteClose(::Newtonsoft::Json::JsonContainerType type)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETECLOSE_OFFSET))(this, type);
		}

		::System::Void WriteEnd_2(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_2_OFFSET))(this, token);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEINDENT_OFFSET))(this);
		}

		::System::Void WriteValueDelimiter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEDELIMITER_OFFSET))(this);
		}

		::System::Void WriteIndentSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTSPACE_OFFSET))(this);
		}

		::System::Void AutoComplete(::Newtonsoft::Json::JsonToken tokenBeingWritten)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETE_OFFSET))(this, tokenBeingWritten);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEUNDEFINED_OFFSET))(this);
		}

		::System::Void WriteRaw(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITERAW_OFFSET))(this, json);
		}

		::System::Void WriteRawValue(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITERAWVALUE_OFFSET))(this, json);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void WriteValue_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_1_OFFSET))(this, value);
		}

		::System::Void WriteValue_2(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_2_OFFSET))(this, value);
		}

		::System::Void WriteValue_3(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_3_OFFSET))(this, value);
		}

		::System::Void WriteValue_4(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_4_OFFSET))(this, value);
		}

		::System::Void WriteValue_5(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_5_OFFSET))(this, value);
		}

		::System::Void WriteValue_6(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_6_OFFSET))(this, value);
		}

		::System::Void WriteValue_7(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_7_OFFSET))(this, value);
		}

		::System::Void WriteValue_8(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_8_OFFSET))(this, value);
		}

		::System::Void WriteValue_9(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_9_OFFSET))(this, value);
		}

		::System::Void WriteValue_10(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_10_OFFSET))(this, value);
		}

		::System::Void WriteValue_11(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_11_OFFSET))(this, value);
		}

		::System::Void WriteValue_12(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_12_OFFSET))(this, value);
		}

		::System::Void WriteValue_13(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_13_OFFSET))(this, value);
		}

		::System::Void WriteValue_14(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_14_OFFSET))(this, value);
		}

		::System::Void WriteValue_15(::System::DateTimeOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_15_OFFSET))(this, value);
		}

		::System::Void WriteValue_16(::System::Guid value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_16_OFFSET))(this, value);
		}

		::System::Void WriteValue_17(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_17_OFFSET))(this, value);
		}

		::System::Void WriteValue_18(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_18_OFFSET))(this, value);
		}

		::System::Void WriteValue_19(::System::Nullable_1<::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_19_OFFSET))(this, value);
		}

		::System::Void WriteValue_20(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_20_OFFSET))(this, value);
		}

		::System::Void WriteValue_21(::System::Nullable_1<::System::UInt64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt64>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_21_OFFSET))(this, value);
		}

		::System::Void WriteValue_22(::System::Nullable_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_22_OFFSET))(this, value);
		}

		::System::Void WriteValue_23(::System::Nullable_1<::System::Double> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_23_OFFSET))(this, value);
		}

		::System::Void WriteValue_24(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_24_OFFSET))(this, value);
		}

		::System::Void WriteValue_25(::System::Nullable_1<::System::Int16> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int16>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_25_OFFSET))(this, value);
		}

		::System::Void WriteValue_26(::System::Nullable_1<::System::UInt16> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt16>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_26_OFFSET))(this, value);
		}

		::System::Void WriteValue_27(::System::Nullable_1<::System::Char> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Char>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_27_OFFSET))(this, value);
		}

		::System::Void WriteValue_28(::System::Nullable_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_28_OFFSET))(this, value);
		}

		::System::Void WriteValue_29(::System::Nullable_1<::System::SByte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::SByte>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_29_OFFSET))(this, value);
		}

		::System::Void WriteValue_30(::System::Nullable_1<::System::Decimal> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Decimal>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_30_OFFSET))(this, value);
		}

		::System::Void WriteValue_31(::System::Nullable_1<::System::DateTime> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_31_OFFSET))(this, value);
		}

		::System::Void WriteValue_32(::System::Nullable_1<::System::DateTimeOffset> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_32_OFFSET))(this, value);
		}

		::System::Void WriteValue_33(::System::Nullable_1<::System::Guid> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Guid>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_33_OFFSET))(this, value);
		}

		::System::Void WriteValue_34(::System::Nullable_1<::System::TimeSpan> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_34_OFFSET))(this, value);
		}

		::System::Void WriteValue_35(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_35_OFFSET))(this, value);
		}

		::System::Void WriteValue_36(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_36_OFFSET))(this, value);
		}

		::System::Void WriteValue_37(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_37_OFFSET))(this, value);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::Void WriteValue_38(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode typeCode, ::System::Object* value)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_38_OFFSET))(writer, typeCode, value);
		}

		static ::Newtonsoft::Json::JsonWriterException* CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value)
		{
			return ((::Newtonsoft::Json::JsonWriterException*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CREATEUNSUPPORTEDTYPEEXCEPTION_OFFSET))(writer, value);
		}

		::System::Void SetWriteState(::Newtonsoft::Json::JsonToken token, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SETWRITESTATE_OFFSET))(this, token, value);
		}

		::System::Void InternalWriteEnd(::Newtonsoft::Json::JsonContainerType container)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEEND_OFFSET))(this, container);
		}

		::System::Void InternalWritePropertyName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEPROPERTYNAME_OFFSET))(this, name);
		}

		::System::Void InternalWriteRaw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITERAW_OFFSET))(this);
		}

		::System::Void InternalWriteStart(::Newtonsoft::Json::JsonToken token, ::Newtonsoft::Json::JsonContainerType container)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITESTART_OFFSET))(this, token, container);
		}

		::System::Void InternalWriteValue(::Newtonsoft::Json::JsonToken token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEVALUE_OFFSET))(this, token);
		}

		::System::Void InternalWriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void InternalWriteComment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITECOMMENT_OFFSET))(this);
		}
	};
}
