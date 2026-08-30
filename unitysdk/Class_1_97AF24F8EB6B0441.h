#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SmartObjectState.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectSlotGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_97AF24F8EB6B0441__CTOR_OFFSET UNITYSDK_OFFSET(0x1C598200)

inline static constexpr unsigned int Class_1_97AF24F8EB6B0441_TypeDefinitionIndex = 40487;

class Class_1_97AF24F8EB6B0441 : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameEntityType FJMDDKCCPMM; // 0x10
	::RPG::GameCore::LittleGameSmartObjectSlotGroup DBALOLNOLGL; // 0x14
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
	::RPG::Client::LittleGame::SmartObjectState MEPFOEEGBEA; // 0x24
	::UnityEngine::Vector3 NMELCPIOKNO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97AF24F8EB6B0441__CTOR_OFFSET))(this);
	}
};
