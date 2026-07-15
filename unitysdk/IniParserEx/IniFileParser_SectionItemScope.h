#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IniParserEx { class IniFile_SectionItem; }

#define INIPARSEREX_INIFILEPARSER_SECTIONITEMSCOPE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C4C85E0)
#define INIPARSEREX_INIFILEPARSER_SECTIONITEMSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C6EB0)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFileParser_SectionItemScope_TypeDefinitionIndex = 3935;

	class IniFileParser_SectionItemScope : public ::System::Object
	{
	public:
		::IniParserEx::IniFile_SectionItem* _Item_k__BackingField; // 0x10

		::System::Void _ctor(::IniParserEx::IniFile_SectionItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IniParserEx::IniFile_SectionItem*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_SECTIONITEMSCOPE__CTOR_OFFSET))(this, a1);
		}

		::IniParserEx::IniFile_SectionItem* get_Item()
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILEPARSER_SECTIONITEMSCOPE_GET_ITEM_OFFSET))(this);
		}
	};
}
