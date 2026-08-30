#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraFireEffect; }

#define CLASS_1_B5F2DFBA821E6828_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x1629F970)
#define CLASS_1_B5F2DFBA821E6828_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x1629F930)
#define CLASS_1_B5F2DFBA821E6828__CTOR_OFFSET UNITYSDK_OFFSET(0x1629F8E0)

inline static constexpr unsigned int Class_1_B5F2DFBA821E6828_TypeDefinitionIndex = 77941;

class Class_1_B5F2DFBA821E6828 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
	::RPG::GameCore::ChimeraFireEffect* IGHAHBNLIJA; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
	::System::UInt32 NCBAPGKFFJA; // 0x28
	::System::UInt32 AJLJMGEEKOJ; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraFireEffect* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraFireEffect*, ::System::UInt32, ::System::UInt32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_B5F2DFBA821E6828__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F2DFBA821E6828_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F2DFBA821E6828_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}
};
