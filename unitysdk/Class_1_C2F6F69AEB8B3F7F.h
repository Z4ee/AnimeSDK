#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowNPCDither; }

#define CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xD9FC170)
#define CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xD9FBED0)
#define CLASS_1_C2F6F69AEB8B3F7F__CTOR_OFFSET UNITYSDK_OFFSET(0xD9FBE90)

inline static constexpr unsigned int Class_1_C2F6F69AEB8B3F7F_TypeDefinitionIndex = 71903;

class Class_1_C2F6F69AEB8B3F7F : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraBattleShowNPCDither* Field_1_1; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x18
	::RPG::Client::Promises::Promise* Field_1_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCDither* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCDither*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
