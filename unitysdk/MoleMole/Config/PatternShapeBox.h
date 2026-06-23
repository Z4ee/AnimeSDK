#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/PatternShape.h"

#define MOLEMOLE_CONFIG_PATTERNSHAPEBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6C3D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PatternShapeBox_TypeDefinitionIndex = 65567;

	class PatternShapeBox : public ::MoleMole::Config::PatternShape
	{
	public:
		::System::Single width; // 0x50
		::System::Single distance; // 0x54
		::System::Single height; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PATTERNSHAPEBOX__CTOR_OFFSET))(this);
		}
	};
}
