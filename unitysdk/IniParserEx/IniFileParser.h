#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/BaseParserWithFile.h"

namespace IniParserEx { class ICodeFile; }
namespace IniParserEx { class IniFileParser_FileScope; }
namespace IniParserEx { class IniFileParser_IIniScope; }
namespace IniParserEx { class IniFileParser_SectionItemScope; }
namespace IniParserEx { class IniFileParser_SectionScope; }
namespace IniParserEx { class IniFile_SectionItem; }
namespace IniParserEx { class Token; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define INIPARSEREX_INIFILEPARSER_COMPILEDECLARATION_OFFSET UNITYSDK_OFFSET(0x189E7130)
#define INIPARSEREX_INIFILEPARSER_COMPILEFILESCOPE_OFFSET UNITYSDK_OFFSET(0x189E7290)
#define INIPARSEREX_INIFILEPARSER_COMPILESECTIONITEMSCOPE_OFFSET UNITYSDK_OFFSET(0x189E7F00)
#define INIPARSEREX_INIFILEPARSER_COMPILESECTIONSCOPE_OFFSET UNITYSDK_OFFSET(0x189E7780)
#define INIPARSEREX_INIFILEPARSER_GET_SCOPESTACK_OFFSET UNITYSDK_OFFSET(0x189E6FE0)
#define INIPARSEREX_INIFILEPARSER_ISBEGINCOMMENT_OFFSET UNITYSDK_OFFSET(0x189E9A40)
#define INIPARSEREX_INIFILEPARSER_ISENDCOMMENT_OFFSET UNITYSDK_OFFSET(0x189E9A50)
#define INIPARSEREX_INIFILEPARSER_ISLINECOMMENT_OFFSET UNITYSDK_OFFSET(0x189E9A60)
#define INIPARSEREX_INIFILEPARSER_PARSELIST_OFFSET UNITYSDK_OFFSET(0x189E90E0)
#define INIPARSEREX_INIFILEPARSER_PARSEMAP_OFFSET UNITYSDK_OFFSET(0x189E8920)
#define INIPARSEREX_INIFILEPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x189E8280)
#define INIPARSEREX_INIFILEPARSER_POSTPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x189E70C0)
#define INIPARSEREX_INIFILEPARSER_PREPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x189E6FF0)
#define INIPARSEREX_INIFILEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x189E4F40)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFileParser_TypeDefinitionIndex = 3751;

	class IniFileParser : public ::IniParserEx::BaseParserWithFile
	{
	public:
		::System::Collections::Generic::Stack_1<::IniParserEx::IniFileParser_IIniScope*>* _ScopeStack_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Stack_1<::IniParserEx::IniFileParser_IIniScope*>* get_ScopeStack()
		{
			return ((::System::Collections::Generic::Stack_1<::IniParserEx::IniFileParser_IIniScope*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_GET_SCOPESTACK_OFFSET))(this);
		}

		::System::Void PreParserProcess(::IniParserEx::ICodeFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_PREPARSERPROCESS_OFFSET))(this, file);
		}

		::System::Void PostParserProcess(::IniParserEx::ICodeFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_POSTPARSERPROCESS_OFFSET))(this, file);
		}

		::System::Boolean CompileDeclaration(::IniParserEx::ICodeFile* file, ::IniParserEx::Token* token)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_COMPILEDECLARATION_OFFSET))(this, file, token);
		}

		::System::Boolean CompileFileScope(::IniParserEx::ICodeFile* file, ::IniParserEx::IniFileParser_FileScope* fileScope, ::IniParserEx::Token* token)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::IniFileParser_FileScope*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_COMPILEFILESCOPE_OFFSET))(this, file, fileScope, token);
		}

		::System::Boolean CompileSectionScope(::IniParserEx::ICodeFile* file, ::IniParserEx::IniFileParser_SectionScope* sectionScope, ::IniParserEx::Token* token)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::IniFileParser_SectionScope*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_COMPILESECTIONSCOPE_OFFSET))(this, file, sectionScope, token);
		}

		::System::Boolean CompileSectionItemScope(::IniParserEx::ICodeFile* file, ::IniParserEx::IniFileParser_SectionItemScope* sectionItemScope, ::IniParserEx::Token* token)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::IniFileParser_SectionItemScope*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_COMPILESECTIONITEMSCOPE_OFFSET))(this, file, sectionItemScope, token);
		}

		::IniParserEx::IniFile_SectionItem* ParseValue(::IniParserEx::ICodeFile* file, ::IniParserEx::Token* token)
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_PARSEVALUE_OFFSET))(this, file, token);
		}

		::System::Boolean ParseMap(::IniParserEx::ICodeFile* file)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_PARSEMAP_OFFSET))(this, file);
		}

		::System::Boolean ParseList(::IniParserEx::ICodeFile* file)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_PARSELIST_OFFSET))(this, file);
		}

		::System::Boolean IsBeginComment(::System::Char currentChar)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_ISBEGINCOMMENT_OFFSET))(this, currentChar);
		}

		::System::Boolean IsEndComment(::System::Char currentChar)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_ISENDCOMMENT_OFFSET))(this, currentChar);
		}

		::System::Boolean IsLineComment(::System::Char currentChar)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_ISLINECOMMENT_OFFSET))(this, currentChar);
		}
	};
}
