#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowNPCDither; }

#define CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0x8D6D850)
#define CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x8D6DAF0)
#define CLASS_1_C2F6F69AEB8B3F7F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6D810)

inline static constexpr unsigned int Class_1_C2F6F69AEB8B3F7F_TypeDefinitionIndex = 63856;

class Class_1_C2F6F69AEB8B3F7F : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x10
	::RPG::GameCore::ChimeraBattleShowNPCDither* Field_1_1; // 0x18
	::RPG::Client::Promises::Promise* Field_1_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCDither* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCDither*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
