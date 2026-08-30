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

#define INIPARSEREX_INIFILEPARSER_COMPILEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1ED00FE0)
#define INIPARSEREX_INIFILEPARSER_COMPILEFILESCOPE_OFFSET UNITYSDK_OFFSET(0x1ED01150)
#define INIPARSEREX_INIFILEPARSER_COMPILESECTIONITEMSCOPE_OFFSET UNITYSDK_OFFSET(0x1ED01D60)
#define INIPARSEREX_INIFILEPARSER_COMPILESECTIONSCOPE_OFFSET UNITYSDK_OFFSET(0x1ED01620)
#define INIPARSEREX_INIFILEPARSER_GET_SCOPESTACK_OFFSET UNITYSDK_OFFSET(0x1ED00E80)
#define INIPARSEREX_INIFILEPARSER_ISBEGINCOMMENT_OFFSET UNITYSDK_OFFSET(0x1ED03810)
#define INIPARSEREX_INIFILEPARSER_ISENDCOMMENT_OFFSET UNITYSDK_OFFSET(0x1ED03820)
#define INIPARSEREX_INIFILEPARSER_ISLINECOMMENT_OFFSET UNITYSDK_OFFSET(0x1ED03830)
#define INIPARSEREX_INIFILEPARSER_PARSELIST_OFFSET UNITYSDK_OFFSET(0x1ED02F70)
#define INIPARSEREX_INIFILEPARSER_PARSEMAP_OFFSET UNITYSDK_OFFSET(0x1ED027E0)
#define INIPARSEREX_INIFILEPARSER_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1ED02140)
#define INIPARSEREX_INIFILEPARSER_POSTPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x1ED00F70)
#define INIPARSEREX_INIFILEPARSER_PREPARSERPROCESS_OFFSET UNITYSDK_OFFSET(0x1ED00E90)
#define INIPARSEREX_INIFILEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFEBC0)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFileParser_TypeDefinitionIndex = 3939;

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

		::System::Void PreParserProcess(::IniParserEx::ICodeFile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_PREPARSERPROCESS_OFFSET))(this, a1);
		}

		::System::Void PostParserProcess(::IniParserEx::ICodeFile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_POSTPARSERPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean CompileDeclaration(::IniParserEx::ICodeFile* a1, ::IniParserEx::Token* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_COMPILEDECLARATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean CompileFileScope(::IniParserEx::ICodeFile* a1, ::IniParserEx::IniFileParser_FileScope* a2, ::IniParserEx::Token* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::IniFileParser_FileScope*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_COMPILEFILESCOPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CompileSectionScope(::IniParserEx::ICodeFile* a1, ::IniParserEx::IniFileParser_SectionScope* a2, ::IniParserEx::Token* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::IniFileParser_SectionScope*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_COMPILESECTIONSCOPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CompileSectionItemScope(::IniParserEx::ICodeFile* a1, ::IniParserEx::IniFileParser_SectionItemScope* a2, ::IniParserEx::Token* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::IniFileParser_SectionItemScope*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_COMPILESECTIONITEMSCOPE_OFFSET))(this, a1, a2, a3);
		}

		::IniParserEx::IniFile_SectionItem* ParseValue(::IniParserEx::ICodeFile* a1, ::IniParserEx::Token* a2)
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)(::PVOID, ::IniParserEx::ICodeFile*, ::IniParserEx::Token*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_PARSEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ParseMap(::IniParserEx::ICodeFile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_PARSEMAP_OFFSET))(this, a1);
		}

		::System::Boolean ParseList(::IniParserEx::ICodeFile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::ICodeFile*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_PARSELIST_OFFSET))(this, a1);
		}

		::System::Boolean IsBeginComment(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_ISBEGINCOMMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsEndComment(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_ISENDCOMMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsLineComment(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_ISLINECOMMENT_OFFSET))(this, a1);
		}
	};
}
