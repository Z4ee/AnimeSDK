#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_COLUMN_OFFSET UNITYSDK_OFFSET(0x1C487060)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_ERRORNUMBER_OFFSET UNITYSDK_OFFSET(0x1C4870E0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_ERRORTEXT_OFFSET UNITYSDK_OFFSET(0x1C487160)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1C4871E0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_ISWARNING_OFFSET UNITYSDK_OFFSET(0x1C487260)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_LINE_OFFSET UNITYSDK_OFFSET(0x1C4872E0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_COLUMN_OFFSET UNITYSDK_OFFSET(0x1C4870A0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_ERRORNUMBER_OFFSET UNITYSDK_OFFSET(0x1C487120)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_ERRORTEXT_OFFSET UNITYSDK_OFFSET(0x1C4871A0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1C487220)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_ISWARNING_OFFSET UNITYSDK_OFFSET(0x1C4872A0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_LINE_OFFSET UNITYSDK_OFFSET(0x1C487320)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C487020)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C486FE0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CompilerError_TypeDefinitionIndex = 4025;

	class CompilerError : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* fileName, ::System::Int32 line, ::System::Int32 column, ::System::String* errorNumber, ::System::String* errorText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR__CTOR_1_OFFSET))(this, fileName, line, column, errorNumber, errorText);
		}

		::System::Int32 get_Column()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_COLUMN_OFFSET))(this);
		}

		::System::Void set_Column(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_COLUMN_OFFSET))(this, value);
		}

		::System::String* get_ErrorNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_ERRORNUMBER_OFFSET))(this);
		}

		::System::Void set_ErrorNumber(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_ERRORNUMBER_OFFSET))(this, value);
		}

		::System::String* get_ErrorText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_ERRORTEXT_OFFSET))(this);
		}

		::System::Void set_ErrorText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_ERRORTEXT_OFFSET))(this, value);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_FileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_FILENAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsWarning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_ISWARNING_OFFSET))(this);
		}

		::System::Void set_IsWarning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_ISWARNING_OFFSET))(this, value);
		}

		::System::Int32 get_Line()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_GET_LINE_OFFSET))(this);
		}

		::System::Void set_Line(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERROR_SET_LINE_OFFSET))(this, value);
		}
	};
}
