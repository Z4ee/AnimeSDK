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

#define INIPARSEREX_INIFILEPARSER_COMPILEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A4209E0)
#define INIPARSEREX_INIFILEPARSER_COMPILEFILESCOPE_OFFSET UNITYSDK_OFFSET(0x1A420B40)
#define INIPARSEREX_INIFILEPARSER_COMPILESECTIONITEMSCOPE_OFFSET UNITYSDK_OFFSET(0x1A4217B0)
#define INIPARSEREX_INIFILEPARSER_COMPILESECTIONSCOPE_OFFSET UNITYSDK_OFFSET(0x1A421030)
#define INIPARSEREX_INIFILEPARSER_GET_SCOPESTACK_OFFSET UNITYSDK_OFFSET(0x1A420890)
#define INIPARSEREX_INIFILEPARSER_ISBEGINCOMMENT_OFFSET UNITYSDK_OFFSET(0x1A4232F0)
#define INIPARSEREX_INIFILEPARSER_ISENDCOMMENT_OFFSET UNITYSDK_OFFSET(0x1A423300)
#define INIPARSEREX_INIFILEPARSER_ISLINECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A423310)
#define INIPARSEREX_INIFILEPARSER_PARSELIST_OFFSET UNITYSDK_OFFSET(0x1A422990)
#define INIPARSEREX_INIFILEPARSER_PARSEMAP_OFFSET UNITYSDK_OFFSET(0x1A4221D0)
#define INIPARSEREX_INIFILEPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1A421B30)
#define INIPARSEREX_INIFILEPARSER_POSTPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x1A420970)
#define INIPARSEREX_INIFILEPARSER_PREPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x1A4208A0)
#define INIPARSEREX_INIFILEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A41E7F0)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFileParser_TypeDefinitionIndex = 3753;

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
