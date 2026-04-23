#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleSwapPosition; }

#define CLASS_1_1CC7D5EA89637373_METHOD_1_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x9516880)
#define CLASS_1_1CC7D5EA89637373_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x9516B90)
#define CLASS_1_1CC7D5EA89637373__CTOR_OFFSET UNITYSDK_OFFSET(0x9516820)

inline static constexpr unsigned int Class_1_1CC7D5EA89637373_TypeDefinitionIndex = 71906;

class Class_1_1CC7D5EA89637373 : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x10
	::RPG::Client::Promises::Promise* Field_1_0; // 0x18
	::RPG::GameCore::ChimeraBattleSwapPosition* Field_1_1; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleSwapPosition* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleSwapPosition*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CC7D5EA89637373__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC7D5EA89637373_METHOD_1_11A5396029C33A57_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CC7D5EA89637373_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
