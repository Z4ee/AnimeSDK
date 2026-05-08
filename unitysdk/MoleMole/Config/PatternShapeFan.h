#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/PatternShape.h"

#define MOLEMOLE_CONFIG_PATTERNSHAPEFAN__CTOR_OFFSET UNITYSDK_OFFSET(0x153D3050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PatternShapeFan_TypeDefinitionIndex = 47634;

	class PatternShapeFan : public ::MoleMole::Config::PatternShape
	{
	public:
		::System::Single height; // 0x50
		::System::Single radius; // 0x54
		::System::Int32 angle; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATTERNSHAPEFAN__CTOR_OFFSET))(this);
		}
	};
}
