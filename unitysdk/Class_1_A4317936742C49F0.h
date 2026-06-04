#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimScrollViewConfig; }

#define CLASS_1_A4317936742C49F0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8D3E0)

inline static constexpr unsigned int Class_1_A4317936742C49F0_TypeDefinitionIndex = 39955;

class Class_1_A4317936742C49F0 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimScrollViewConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4317936742C49F0__CTOR_OFFSET))(this);
	}
};
