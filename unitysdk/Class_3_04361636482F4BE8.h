#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorCustomValue_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class FloorCustomFloatConfig; }

#define CLASS_3_04361636482F4BE8_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0xDE3E130)
#define CLASS_3_04361636482F4BE8__CTOR_OFFSET UNITYSDK_OFFSET(0xDE3E0F0)

inline static constexpr unsigned int Class_3_04361636482F4BE8_TypeDefinitionIndex = 50419;

class Class_3_04361636482F4BE8 : public ::RPG::Client::FloorCustomValue_1<::RPG::GameCore::FixPoint>
{
public:
	::System::Void _ctor(::RPG::GameCore::FloorCustomFloatConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + CLASS_3_04361636482F4BE8__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_04361636482F4BE8_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}
};
