#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class PlayChimeraAnimation; }

#define CLASS_1_68C38F6A1EA376C7_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x170AB190)
#define CLASS_1_68C38F6A1EA376C7_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x170AB1D0)
#define CLASS_1_68C38F6A1EA376C7__CTOR_OFFSET UNITYSDK_OFFSET(0x170AB140)

inline static constexpr unsigned int Class_1_68C38F6A1EA376C7_TypeDefinitionIndex = 77942;

class Class_1_68C38F6A1EA376C7 : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x10
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
	::RPG::GameCore::PlayChimeraAnimation* IGHAHBNLIJA; // 0x20
	::System::UInt32 AJLJMGEEKOJ; // 0x28
	::System::UInt32 NCBAPGKFFJA; // 0x2C

	::System::Void _ctor(::RPG::GameCore::PlayChimeraAnimation* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayChimeraAnimation*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_68C38F6A1EA376C7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C38F6A1EA376C7_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68C38F6A1EA376C7_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}
};
