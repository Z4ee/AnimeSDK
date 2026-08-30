#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraTriggerWorkPerformance; }

#define CLASS_1_C5B388983D61CA4A_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xBE66590)
#define CLASS_1_C5B388983D61CA4A_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0xBE665D0)
#define CLASS_1_C5B388983D61CA4A__CTOR_OFFSET UNITYSDK_OFFSET(0xBE66540)
#define CLASS_1_C5B388983D61CA4A__START_B__2_0_OFFSET UNITYSDK_OFFSET(0xBE667A0)

inline static constexpr unsigned int Class_1_C5B388983D61CA4A_TypeDefinitionIndex = 77950;

class Class_1_C5B388983D61CA4A : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x10
	::RPG::GameCore::ChimeraTriggerWorkPerformance* IGHAHBNLIJA; // 0x18
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x20
	::System::UInt32 LEKGODGIMCH; // 0x28
	::System::UInt32 AJLJMGEEKOJ; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraTriggerWorkPerformance* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraTriggerWorkPerformance*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C5B388983D61CA4A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5B388983D61CA4A_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5B388983D61CA4A_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void _Start_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5B388983D61CA4A__START_B__2_0_OFFSET))(this);
	}
};
