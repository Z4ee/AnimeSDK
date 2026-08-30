#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_141;
class Class_0_16E4307DCC419505_142;

#define CLASS_1_99AD5A50DEB7DCC1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0E610)

inline static constexpr unsigned int Class_1_99AD5A50DEB7DCC1_TypeDefinitionIndex = 42136;

class Class_1_99AD5A50DEB7DCC1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_141* EJJOKPFJBDE; // 0x10
	::Class_0_16E4307DCC419505_142* FKIBGPJNCIJ; // 0x18
	::RPG::GameCore::CakeRaceMoveState NPDNEEPHEKN; // 0x20
	::RPG::GameCore::CakeRaceMoveState LMEFGJFMCIF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99AD5A50DEB7DCC1__CTOR_OFFSET))(this);
	}
};
