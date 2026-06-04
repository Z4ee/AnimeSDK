#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

namespace Newtonsoft::Json { template <typename T> class IArrayPool_1; }
namespace Newtonsoft::Json::Utilities { class Base64Encoder; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class TextWriter; }

#define NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18829BC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x1882ABC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_BASE64ENCODER_OFFSET UNITYSDK_OFFSET(0x18829A50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x18829B00)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x1882A4F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_UPDATECHARESCAPEFLAGS_OFFSET UNITYSDK_OFFSET(0x18829B30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1882CA10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x18829F10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRING_OFFSET UNITYSDK_OFFSET(0x1882A180)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACE_OFFSET UNITYSDK_OFFSET(0x1882A700)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x1882A580)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_1_OFFSET UNITYSDK_OFFSET(0x1882AF00)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET UNITYSDK_OFFSET(0x1882AD30)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1882A8A0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1882A2C0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x18829FE0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1882A9B0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x18829DE0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18829E40)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x18829D50)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x1882A930)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITER_OFFSET UNITYSDK_OFFSET(0x1882A6D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1882A730)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x1882B8F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x1882B980)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x1882BA20)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x1882BA90)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x1882BB00)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x1882BB70)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x1882BC10)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x1882BC90)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x1882BFA0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x1882C270)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1882A9F0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x1882C5D0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_21_OFFSET UNITYSDK_OFFSET(0x1882C690)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_22_OFFSET UNITYSDK_OFFSET(0x1882C750)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x1882AC90)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x1882ADB0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x1882AE20)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x1882AEC0)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x1882B210)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x1882B400)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x1882B580)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x1882B770)
#define NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1882A760)
#define NEWTONSOFT_JSON_JSONTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1881A670)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonTextWriter_TypeDefinitionIndex = 9262;

	class JsonTextWriter : public ::Newtonsoft::Json::JsonWriter
	{
	public:
		::Newtonsoft::Json::Utilities::Base64Encoder* _base64Encoder; // 0x60
		::Il2CppArray<::System::Char>* _indentChars; // 0x68
		::Il2CppArray<::System::Char>* _writeBuffer; // 0x70
		::Il2CppArray<::System::Boolean>* _charEscapeFlags; // 0x78
		::System::IO::TextWriter* _writer; // 0x80
		::Newtonsoft::Json::IArrayPool_1<::System::Char>* _arrayPool; // 0x88
		::System::Boolean _quoteName; // 0x90
		::System::Int32 _indentation; // 0x94
		::System::Char _quoteChar; // 0x98
		::System::Char _indentChar; // 0x9A

		::System::Void _ctor(::System::IO::TextWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER__CTOR_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Utilities::Base64Encoder* get_Base64Encoder()
		{
			return ((::Newtonsoft::Json::Utilities::Base64Encoder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_BASE64ENCODER_OFFSET))(this);
		}

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteStartObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTOBJECT_OFFSET))(this);
		}

		::System::Void WriteStartArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTARRAY_OFFSET))(this);
		}

		::System::Void WriteStartConstructor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Void WriteEnd(::Newtonsoft::Json::JsonToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEEND_OFFSET))(this, a1);
		}

		::System::Void WritePropertyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::Void WritePropertyName_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEPROPERTYNAME_1_OFFSET))(this, a1, a2);
		}

		::System::Void OnStringEscapeHandlingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET))(this);
		}

		::System::Void UpdateCharEscapeFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_UPDATECHARESCAPEFLAGS_OFFSET))(this);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENT_OFFSET))(this);
		}

		::System::Void WriteValueDelimiter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEDELIMITER_OFFSET))(this);
		}

		::System::Void WriteIndentSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINDENTSPACE_OFFSET))(this);
		}

		::System::Void WriteValueInternal(::System::String* a1, ::Newtonsoft::Json::JsonToken a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUEINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void WriteValue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEUNDEFINED_OFFSET))(this);
		}

		::System::Void WriteRaw(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITERAW_OFFSET))(this, a1);
		}

		::System::Void WriteValue_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_1_OFFSET))(this, a1);
		}

		::System::Void WriteEscapedString(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEESCAPEDSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void WriteValue_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_2_OFFSET))(this, a1);
		}

		::System::Void WriteValue_3(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_3_OFFSET))(this, a1);
		}

		::System::Void WriteValue_4(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_4_OFFSET))(this, a1);
		}

		::System::Void WriteValue_5(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_5_OFFSET))(this, a1);
		}

		::System::Void WriteValue_6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_6_OFFSET))(this, a1);
		}

		::System::Void WriteValue_7(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_7_OFFSET))(this, a1);
		}

		::System::Void WriteValue_8(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_8_OFFSET))(this, a1);
		}

		::System::Void WriteValue_9(::System::Nullable_1<::System::Double> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_9_OFFSET))(this, a1);
		}

		::System::Void WriteValue_10(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_10_OFFSET))(this, a1);
		}

		::System::Void WriteValue_11(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_11_OFFSET))(this, a1);
		}

		::System::Void WriteValue_12(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_12_OFFSET))(this, a1);
		}

		::System::Void WriteValue_13(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_13_OFFSET))(this, a1);
		}

		::System::Void WriteValue_14(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_14_OFFSET))(this, a1);
		}

		::System::Void WriteValue_15(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_15_OFFSET))(this, a1);
		}

		::System::Void WriteValue_16(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_16_OFFSET))(this, a1);
		}

		::System::Void WriteValue_17(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_17_OFFSET))(this, a1);
		}

		::System::Void WriteValue_18(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_18_OFFSET))(this, a1);
		}

		::System::Void WriteValue_19(::System::DateTimeOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_19_OFFSET))(this, a1);
		}

		::System::Void WriteValue_20(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_20_OFFSET))(this, a1);
		}

		::System::Void WriteValue_21(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_21_OFFSET))(this, a1);
		}

		::System::Void WriteValue_22(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEVALUE_22_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void EnsureWriteBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_ENSUREWRITEBUFFER_OFFSET))(this);
		}

		::System::Void WriteIntegerValue(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_OFFSET))(this, a1);
		}

		::System::Void WriteIntegerValue_1(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONTEXTWRITER_WRITEINTEGERVALUE_1_OFFSET))(this, a1);
		}
	};
}
