#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6BDC2CD0CBC9EEFF_METHOD_1_C0000CC59DD9492B_OFFSET UNITYSDK_OFFSET(0x96F1EF0)

inline static constexpr unsigned int Class_1_6BDC2CD0CBC9EEFF_TypeDefinitionIndex = 57809;

class Class_1_6BDC2CD0CBC9EEFF : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_C0000CC59DD9492B(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6BDC2CD0CBC9EEFF_METHOD_1_C0000CC59DD9492B_OFFSET))(a1, a2, a3, a4);
	}
};
