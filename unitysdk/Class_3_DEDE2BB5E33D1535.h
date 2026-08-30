#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorCustomValue_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class FloorCustomFloatConfig; }

#define CLASS_3_DEDE2BB5E33D1535_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x1524F0D0)
#define CLASS_3_DEDE2BB5E33D1535__CTOR_OFFSET UNITYSDK_OFFSET(0x1524EFE0)

inline static constexpr unsigned int Class_3_DEDE2BB5E33D1535_TypeDefinitionIndex = 62169;

class Class_3_DEDE2BB5E33D1535 : public ::RPG::Client::FloorCustomValue_1<::RPG::GameCore::FixPoint>
{
public:
	::System::Void _ctor(::RPG::GameCore::FloorCustomFloatConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + CLASS_3_DEDE2BB5E33D1535__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_DEDE2BB5E33D1535_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}
};
