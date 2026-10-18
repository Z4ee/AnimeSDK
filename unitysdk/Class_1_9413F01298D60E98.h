#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimLadderConfig; }

#define CLASS_1_9413F01298D60E98__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5C6D0)

inline static constexpr unsigned int Class_1_9413F01298D60E98_TypeDefinitionIndex = 43448;

class Class_1_9413F01298D60E98 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimLadderConfig* EABKOHGCHFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9413F01298D60E98__CTOR_OFFSET))(this);
	}
};
