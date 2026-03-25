#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INCONTROL_INTERNAL_CODEWRITER_APPENDFORMAT_OFFSET UNITYSDK_OFFSET(0x15B7DF90)
#define INCONTROL_INTERNAL_CODEWRITER_APPENDLINEFORMAT_OFFSET UNITYSDK_OFFSET(0x15B7E040)
#define INCONTROL_INTERNAL_CODEWRITER_APPENDLINE_1_OFFSET UNITYSDK_OFFSET(0x15B7DF60)
#define INCONTROL_INTERNAL_CODEWRITER_APPENDLINE_OFFSET UNITYSDK_OFFSET(0x15B7DF30)
#define INCONTROL_INTERNAL_CODEWRITER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x15B7DD20)
#define INCONTROL_INTERNAL_CODEWRITER_APPEND_OFFSET UNITYSDK_OFFSET(0x15B7DD10)
#define INCONTROL_INTERNAL_CODEWRITER_DECREASEINDENT_OFFSET UNITYSDK_OFFSET(0x15B7DD00)
#define INCONTROL_INTERNAL_CODEWRITER_INCREASEINDENT_OFFSET UNITYSDK_OFFSET(0x15B7DCF0)
#define INCONTROL_INTERNAL_CODEWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B7E100)
#define INCONTROL_INTERNAL_CODEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7DC70)

namespace InControl::Internal
{
	inline static constexpr unsigned int CodeWriter_TypeDefinitionIndex = 31505;

	class CodeWriter : public ::System::Object
	{
	public:
		// static const ::System::Char newLine; // 0x0
		::System::Text::StringBuilder* stringBuilder; // 0x10
		::System::Int32 indent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER__CTOR_OFFSET))(this);
		}

		::System::Void IncreaseIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_INCREASEINDENT_OFFSET))(this);
		}

		::System::Void DecreaseIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_DECREASEINDENT_OFFSET))(this);
		}

		::System::Void Append(::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPEND_OFFSET))(this, code);
		}

		::System::Void Append_1(::System::Boolean trim, ::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPEND_1_OFFSET))(this, trim, code);
		}

		::System::Void AppendLine(::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPENDLINE_OFFSET))(this, code);
		}

		::System::Void AppendLine_1(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPENDLINE_1_OFFSET))(this, count);
		}

		::System::Void AppendFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPENDFORMAT_OFFSET))(this, format, args);
		}

		::System::Void AppendLineFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPENDLINEFORMAT_OFFSET))(this, format, args);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_TOSTRING_OFFSET))(this);
		}
	};
}
