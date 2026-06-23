#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/PatternShape.h"

#define MOLEMOLE_CONFIG_PATTERNSHAPEFAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1619FD00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PatternShapeFan_TypeDefinitionIndex = 48831;

	class PatternShapeFan : public ::MoleMole::Config::PatternShape
	{
	public:
		::System::Single radius; // 0x50
		::System::Int32 angle; // 0x54
		::System::Single height; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATTERNSHAPEFAN__CTOR_OFFSET))(this);
		}
	};
}
