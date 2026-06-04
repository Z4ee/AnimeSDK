#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimLadderConfig; }

#define CLASS_1_9413F01298D60E98__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3A500)

inline static constexpr unsigned int Class_1_9413F01298D60E98_TypeDefinitionIndex = 40036;

class Class_1_9413F01298D60E98 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimLadderConfig* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9413F01298D60E98__CTOR_OFFSET))(this);
	}
};
