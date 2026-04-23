#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFAction.h"
#include "unitysdk/RPG/Client/LittleGame/TRFOperate.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_803155C069ACF29F__CTOR_OFFSET UNITYSDK_OFFSET(0x18082C30)

inline static constexpr unsigned int Class_1_803155C069ACF29F_TypeDefinitionIndex = 38690;

class Class_1_803155C069ACF29F : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TRFAction Field_1_1; // 0x10
	::System::Boolean Field_1_6; // 0x14
	::UnityEngine::Vector3 Field_1_4; // 0x18
	::RPG::Client::LittleGame::TRFOperate Field_1_0; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::UInt32 Field_1_3; // 0x2C
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_803155C069ACF29F__CTOR_OFFSET))(this);
	}
};
