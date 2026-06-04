#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class BGCurveExtention;
namespace RPG::Client::ParkourGame { class MonoParkourRoad_ConnectionInfo; }

#define CLASS_1_C47576BEFCFAD595_CLASS_1_2E1EAE8817B0067B__CTOR_OFFSET UNITYSDK_OFFSET(0xFF337C0)

inline static constexpr unsigned int Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B_TypeDefinitionIndex = 69302;

class Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B : public ::System::Object
{
public:
	::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo* Field_1_0; // 0x10
	::BGCurveExtention* Field_1_1; // 0x18
	::Il2CppArray<::System::Single>* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::UnityEngine::Vector2Int Field_1_4; // 0x2C
	::System::Single Field_1_5; // 0x34
	::System::Single Field_1_6; // 0x38
	::System::Single Field_1_7; // 0x3C
	::System::Int32 Field_1_8; // 0x40
	::System::Single Field_1_9; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_CLASS_1_2E1EAE8817B0067B__CTOR_OFFSET))(this);
	}
};
