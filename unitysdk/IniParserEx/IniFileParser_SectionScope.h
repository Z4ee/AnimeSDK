#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_Section; }

#define INIPARSEREX_INIFILEPARSER_SECTIONSCOPE_GET_SECTION_OFFSET UNITYSDK_OFFSET(0x189E9AA0)
#define INIPARSEREX_INIFILEPARSER_SECTIONSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x189E8260)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFileParser_SectionScope_TypeDefinitionIndex = 3754;

	class IniFileParser_SectionScope : public ::System::Object
	{
	public:
		::IniParserEx::IniFile_Section* _Section_k__BackingField; // 0x10

		::System::Void _ctor(::IniParserEx::IniFile_Section* section)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::IniFile_Section*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_SECTIONSCOPE__CTOR_OFFSET))(this, section);
		}

		::IniParserEx::IniFile_Section* get_Section()
		{
			return ((::IniParserEx::IniFile_Section*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_SECTIONSCOPE_GET_SECTION_OFFSET))(this);
		}
	};
}
