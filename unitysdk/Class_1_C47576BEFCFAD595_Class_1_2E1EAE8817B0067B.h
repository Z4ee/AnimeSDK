#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class BGCurveExtention;
namespace RPG::Client::ParkourGame { class MonoParkourRoad_ConnectionInfo; }

#define CLASS_1_C47576BEFCFAD595_CLASS_1_2E1EAE8817B0067B__CTOR_OFFSET UNITYSDK_OFFSET(0x887E8B0)

inline static constexpr unsigned int Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B_TypeDefinitionIndex = 60879;

class Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B : public ::System::Object
{
public:
	::BGCurveExtention* Field_1_1; // 0x10
	::Il2CppArray<::System::Single>* Field_1_2; // 0x18
	::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo* Field_1_9; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_5; // 0x30
	::System::Single Field_1_6; // 0x34
	::System::Single Field_1_8; // 0x38
	::UnityEngine::Vector2Int Field_1_3; // 0x3C
	::System::Single Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_CLASS_1_2E1EAE8817B0067B__CTOR_OFFSET))(this);
	}
};
