#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/BaseParser.h"

namespace IniParserEx { class ICodeFile; }
namespace IniParserEx { class Token; }
namespace System { class String; }

#define INIPARSEREX_BASEPARSERWITHFILE_COMPILEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1C4C3510)
#define INIPARSEREX_BASEPARSERWITHFILE_GETFILELOCATION_OFFSET UNITYSDK_OFFSET(0x1C4C3400)
#define INIPARSEREX_BASEPARSERWITHFILE_PARSE_OFFSET UNITYSDK_OFFSET(0x1C4C30D0)
#define INIPARSEREX_BASEPARSERWITHFILE_POSTPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x1C4C33F0)
#define INIPARSEREX_BASEPARSERWITHFILE_PREPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x1C4C33E0)
#define INIPARSEREX_BASEPARSERWITHFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C3520)

namespace IniParserEx
{
	inline static constexpr unsigned int BaseParserWithFile_TypeDefinitionIndex = 3921;

	class BaseParserWithFile : public ::IniParserEx::BaseParser
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE__CTOR_OFFSET))(this);
		}

		::System::Void Parse(::IniParserEx::ICodeFile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_PARSE_OFFSET))(this, a1);
		}

		::System::Void PreParserProcess(::IniParserEx::ICodeFile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_PREPARSERPROCESS_OFFSET))(this, a1);
		}

		::System::Void PostParserProcess(::IniParserEx::ICodeFile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_POSTPARSERPROCESS_OFFSET))(this, a1);
		}

		::System::String* GetFileLocation(::IniParserEx::ICodeFile* a1)
		{
			return ((::System::String*(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_GETFILELOCATION_OFFSET))(this, a1);
		}

		::System::Boolean CompileDeclaration(::IniParserEx::ICodeFile* a1, ::IniParserEx::Token* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_BASEPARSERWITHFILE_COMPILEDECLARATION_OFFSET))(this, a1, a2);
		}
	};
}
