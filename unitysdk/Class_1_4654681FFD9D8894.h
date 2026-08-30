#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraWorkFireBullet; }

#define CLASS_1_4654681FFD9D8894_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x16CA5EE0)
#define CLASS_1_4654681FFD9D8894_METHOD_1_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x16CA5F20)
#define CLASS_1_4654681FFD9D8894__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA5E90)
#define CLASS_1_4654681FFD9D8894__START_B__2_0_OFFSET UNITYSDK_OFFSET(0x16CA6140)

inline static constexpr unsigned int Class_1_4654681FFD9D8894_TypeDefinitionIndex = 77940;

class Class_1_4654681FFD9D8894 : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x10
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x18
	::RPG::GameCore::ChimeraWorkFireBullet* IGHAHBNLIJA; // 0x20
	::System::UInt32 NCBAPGKFFJA; // 0x28
	::System::UInt32 AJLJMGEEKOJ; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraWorkFireBullet* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraWorkFireBullet*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_4654681FFD9D8894__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4654681FFD9D8894_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_CD28994AFE636FFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4654681FFD9D8894_METHOD_1_CD28994AFE636FFF_OFFSET))(this);
	}

	::System::Void _Start_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4654681FFD9D8894__START_B__2_0_OFFSET))(this);
	}
};
