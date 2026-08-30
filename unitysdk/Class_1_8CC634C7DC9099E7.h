#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_8CC634C7DC9099E7_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x1571E770)
#define CLASS_1_8CC634C7DC9099E7_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0x1571EF90)
#define CLASS_1_8CC634C7DC9099E7_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x1571EE60)
#define CLASS_1_8CC634C7DC9099E7__CTOR_OFFSET UNITYSDK_OFFSET(0x1571E6F0)

inline static constexpr unsigned int Class_1_8CC634C7DC9099E7_TypeDefinitionIndex = 77932;

class Class_1_8CC634C7DC9099E7 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* ECJADDMLLPJ; // 0x20
	::RPG::GameCore::ChimeraBattleRunOut* IGHAHBNLIJA; // 0x28
	::System::UInt32 MEFAHAJDKKJ; // 0x30
	::System::UInt32 AJLJMGEEKOJ; // 0x34
	::System::UInt32 LEKGODGIMCH; // 0x38
	::System::UInt32 IDCDJCNHDHC; // 0x3C

	::System::Void _ctor(::RPG::GameCore::ChimeraBattleRunOut* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleRunOut*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CC634C7DC9099E7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC634C7DC9099E7_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC634C7DC9099E7_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CC634C7DC9099E7_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}
};
