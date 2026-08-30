#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class BGCurveExtention;
namespace RPG::Client::ParkourGame { class MonoParkourRoad_ConnectionInfo; }

#define CLASS_1_C47576BEFCFAD595_CLASS_1_2E1EAE8817B0067B__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B1530)

inline static constexpr unsigned int Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B_TypeDefinitionIndex = 74122;

class Class_1_C47576BEFCFAD595_Class_1_2E1EAE8817B0067B : public ::System::Object
{
public:
	::BGCurveExtention* NLIFDJHPHLP; // 0x10
	::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo* FCIAHLPCPFJ; // 0x18
	::Il2CppArray<::System::Single>* FOCMONGCHAB; // 0x20
	::UnityEngine::Vector2Int OOFCOHBIAKL; // 0x28
	::System::Single BJOCBPFKJDP; // 0x30
	::System::Single MNIHEIFNDDK; // 0x34
	::System::Single CCNNMJEEHBG; // 0x38
	::System::Single FOCJKDOFNJO; // 0x3C
	::System::Single EEAMPCENMOD; // 0x40
	::System::Int32 GMDBHJKEAEI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47576BEFCFAD595_CLASS_1_2E1EAE8817B0067B__CTOR_OFFSET))(this);
	}
};
