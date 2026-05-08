#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_BLANKLINESBETWEENMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A7D4260)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_BRACINGSTYLE_OFFSET UNITYSDK_OFFSET(0x1A7D42E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_ELSEONCLOSING_OFFSET UNITYSDK_OFFSET(0x1A7D4360)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_INDENTSTRING_OFFSET UNITYSDK_OFFSET(0x1A7D43E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A7D4460)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_VERBATIMORDER_OFFSET UNITYSDK_OFFSET(0x1A7D44E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_BLANKLINESBETWEENMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A7D42A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_BRACINGSTYLE_OFFSET UNITYSDK_OFFSET(0x1A7D4320)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_ELSEONCLOSING_OFFSET UNITYSDK_OFFSET(0x1A7D43A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_INDENTSTRING_OFFSET UNITYSDK_OFFSET(0x1A7D4420)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A7D44A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_VERBATIMORDER_OFFSET UNITYSDK_OFFSET(0x1A7D4520)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D4220)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CodeGeneratorOptions_TypeDefinitionIndex = 4033;

	class CodeGeneratorOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_BlankLinesBetweenMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_BLANKLINESBETWEENMEMBERS_OFFSET))(this);
		}

		::System::Void set_BlankLinesBetweenMembers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_BLANKLINESBETWEENMEMBERS_OFFSET))(this, value);
		}

		::System::String* get_BracingStyle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_BRACINGSTYLE_OFFSET))(this);
		}

		::System::Void set_BracingStyle(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_BRACINGSTYLE_OFFSET))(this, value);
		}

		::System::Boolean get_ElseOnClosing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_ELSEONCLOSING_OFFSET))(this);
		}

		::System::Void set_ElseOnClosing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_ELSEONCLOSING_OFFSET))(this, value);
		}

		::System::String* get_IndentString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_INDENTSTRING_OFFSET))(this);
		}

		::System::Void set_IndentString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_INDENTSTRING_OFFSET))(this, value);
		}

		::System::Object* get_Item(::System::String* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::String* index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Boolean get_VerbatimOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_VERBATIMORDER_OFFSET))(this);
		}

		::System::Void set_VerbatimOrder(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_VERBATIMORDER_OFFSET))(this, value);
		}
	};
}
