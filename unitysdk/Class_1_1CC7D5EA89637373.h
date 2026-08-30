#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleSwapPosition; }

#define CLASS_1_1CC7D5EA89637373_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x18E2EFE0)
#define CLASS_1_1CC7D5EA89637373_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x18E2EC80)
#define CLASS_1_1CC7D5EA89637373__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2EC20)

inline static constexpr unsigned int Class_1_1CC7D5EA89637373_TypeDefinitionIndex = 77938;

class Class_1_1CC7D5EA89637373 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
	::RPG::GameCore::ChimeraBattleSwapPosition* IGHAHBNLIJA; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
	::System::UInt32 LEKGODGIMCH; // 0x28
	::System::UInt32 AJLJMGEEKOJ; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleSwapPosition* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleSwapPosition*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CC7D5EA89637373__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC7D5EA89637373_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC7D5EA89637373_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
