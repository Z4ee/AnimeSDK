#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleShowNPCLeave; }

#define CLASS_1_8B709FCA740D2C22_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xB7D3850)
#define CLASS_1_8B709FCA740D2C22_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xB7D3AF0)
#define CLASS_1_8B709FCA740D2C22__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D3810)

inline static constexpr unsigned int Class_1_8B709FCA740D2C22_TypeDefinitionIndex = 77937;

class Class_1_8B709FCA740D2C22 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraBattleShowNPCLeave* IGHAHBNLIJA; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x18
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x20

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleShowNPCLeave* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleShowNPCLeave*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_8B709FCA740D2C22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B709FCA740D2C22_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B709FCA740D2C22_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
