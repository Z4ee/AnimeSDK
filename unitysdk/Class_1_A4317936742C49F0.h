#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimScrollViewConfig; }

#define CLASS_1_A4317936742C49F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA907F0)

inline static constexpr unsigned int Class_1_A4317936742C49F0_TypeDefinitionIndex = 41722;

class Class_1_A4317936742C49F0 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimScrollViewConfig* EABKOHGCHFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4317936742C49F0__CTOR_OFFSET))(this);
	}
};
