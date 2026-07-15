#pragma once
#include "unitysdk/unitysdk.h"

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_SectionItem_SectionItemType_TypeDefinitionIndex = 3926;

	enum class IniFile_SectionItem_SectionItemType : ::System::Int32
	{
		None = 0,
		String = 1,
		Single = 2,
		List = 3,
		Map = 4,
	};
}
