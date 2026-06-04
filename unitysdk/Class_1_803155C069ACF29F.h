#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFAction.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOperate.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_803155C069ACF29F__CTOR_OFFSET UNITYSDK_OFFSET(0x18D30250)

inline static constexpr unsigned int Class_1_803155C069ACF29F_TypeDefinitionIndex = 39458;

class Class_1_803155C069ACF29F : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::RPG::Client::LittleGame::TRFOperate Field_1_4; // 0x20
	::UnityEngine::Vector3 Field_1_5; // 0x24
	::RPG::Client::LittleGame::TRFAction Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_803155C069ACF29F__CTOR_OFFSET))(this);
	}
};
