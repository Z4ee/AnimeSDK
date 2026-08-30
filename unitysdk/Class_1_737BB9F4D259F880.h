#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelGameState.h"
#include "unitysdk/System/Object.h"

class Class_1_C563E5E77DCDB6EB;

#define CLASS_1_737BB9F4D259F880__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CBF50)

inline static constexpr unsigned int Class_1_737BB9F4D259F880_TypeDefinitionIndex = 40359;

class Class_1_737BB9F4D259F880 : public ::System::Object
{
public:
	::Class_1_C563E5E77DCDB6EB* BFLLJJBHLDF; // 0x10
	::RPG::Client::LittleGame::ChimeraDuelGameState MEPFOEEGBEA; // 0x18
	::System::Boolean PAKNNEFOEON; // 0x1C
	::System::Boolean MAEJNJNNOCI; // 0x1D
	::System::UInt32 IAKDNNCLGAN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_737BB9F4D259F880__CTOR_OFFSET))(this);
	}
};
