#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowNPCDither; }

#define CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xB81FC10)
#define CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xB81FEB0)
#define CLASS_1_C2F6F69AEB8B3F7F__CTOR_OFFSET UNITYSDK_OFFSET(0xB81FBD0)

inline static constexpr unsigned int Class_1_C2F6F69AEB8B3F7F_TypeDefinitionIndex = 77936;

class Class_1_C2F6F69AEB8B3F7F : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraBattleShowNPCDither* IGHAHBNLIJA; // 0x10
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCDither* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCDither*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2F6F69AEB8B3F7F_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
