#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define INCONTROL_INTERNAL_CODEWRITER_APPENDFORMAT_OFFSET UNITYSDK_OFFSET(0x1B4FFE60)
#define INCONTROL_INTERNAL_CODEWRITER_APPENDLINEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B4FFF10)
#define INCONTROL_INTERNAL_CODEWRITER_APPENDLINE_1_OFFSET UNITYSDK_OFFSET(0x1B4FFE30)
#define INCONTROL_INTERNAL_CODEWRITER_APPENDLINE_OFFSET UNITYSDK_OFFSET(0x1B4FFD80)
#define INCONTROL_INTERNAL_CODEWRITER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1B4FF9D0)
#define INCONTROL_INTERNAL_CODEWRITER_APPEND_OFFSET UNITYSDK_OFFSET(0x1B4FF9C0)
#define INCONTROL_INTERNAL_CODEWRITER_DECREASEINDENT_OFFSET UNITYSDK_OFFSET(0x1B4FF9B0)
#define INCONTROL_INTERNAL_CODEWRITER_INCREASEINDENT_OFFSET UNITYSDK_OFFSET(0x1B4FF9A0)
#define INCONTROL_INTERNAL_CODEWRITER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B500050)
#define INCONTROL_INTERNAL_CODEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FF920)

namespace InControl::Internal
{
	inline static constexpr unsigned int CodeWriter_TypeDefinitionIndex = 39624;

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

		::System::Void Append(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPEND_OFFSET))(this, a1);
		}

		::System::Void Append_1(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPEND_1_OFFSET))(this, a1, a2);
		}

		::System::Void AppendLine(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPENDLINE_OFFSET))(this, a1);
		}

		::System::Void AppendLine_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPENDLINE_1_OFFSET))(this, a1);
		}

		::System::Void AppendFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPENDFORMAT_OFFSET))(this, a1, a2);
		}

		::System::Void AppendLineFormat(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_APPENDLINEFORMAT_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INTERNAL_CODEWRITER_TOSTRING_OFFSET))(this);
		}
	};
}
