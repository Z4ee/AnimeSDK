#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftExamItemState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1499;
class Class_0_16E4307DCC419505_155;
class Class_0_16E4307DCC419505_169;
class Class_1_16C4955EF2FA3814;
class Class_1_A075C859E16CAB2F;
class Class_1_B6BE44583A9235C2;
class Class_1_B6BE44583A9235C2_Class_1_2BBBA71D5B5A8701;
class Class_1_ECF740E1BEC9395A;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_233D6DFBA5EFA41F_METHOD_1_15E19DC88EB9F1BB_OFFSET UNITYSDK_OFFSET(0xDFB2630)
#define CLASS_1_233D6DFBA5EFA41F_METHOD_1_196BD2D55A0ED760_OFFSET UNITYSDK_OFFSET(0xDFB27C0)
#define CLASS_1_233D6DFBA5EFA41F_METHOD_1_8F373CEC11952250_OFFSET UNITYSDK_OFFSET(0xDFB22E0)
#define CLASS_1_233D6DFBA5EFA41F__CTOR_OFFSET UNITYSDK_OFFSET(0xDFB22B0)

inline static constexpr unsigned int Class_1_233D6DFBA5EFA41F_TypeDefinitionIndex = 79645;

class Class_1_233D6DFBA5EFA41F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_155* DGAFKAIOAFO; // 0x10
	::Class_0_16E4307DCC419505_169* AFBDJPILCFH; // 0x18
	::Class_1_A075C859E16CAB2F* MOOEPGBJJAF; // 0x20
	::Class_0_16E4307DCC419505_1499* JGJPOOFDENC; // 0x28
	::Class_1_B6BE44583A9235C2_Class_1_2BBBA71D5B5A8701* EGIKGLEBHDL; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_169* a1, ::Class_0_16E4307DCC419505_155* a2, ::Class_1_16C4955EF2FA3814* a3, ::Class_1_A075C859E16CAB2F* a4, ::Class_1_B6BE44583A9235C2_Class_1_2BBBA71D5B5A8701* a5, ::Class_0_16E4307DCC419505_1499* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_169*, ::Class_0_16E4307DCC419505_155*, ::Class_1_16C4955EF2FA3814*, ::Class_1_A075C859E16CAB2F*, ::Class_1_B6BE44583A9235C2_Class_1_2BBBA71D5B5A8701*, ::Class_0_16E4307DCC419505_1499*))((::PBYTE)hIl2Cpp + CLASS_1_233D6DFBA5EFA41F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_ECF740E1BEC9395A* Method_1_8F373CEC11952250(::System::UInt32 a1)
	{
		return ((::Class_1_ECF740E1BEC9395A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_233D6DFBA5EFA41F_METHOD_1_8F373CEC11952250_OFFSET))(this, a1);
	}

	::Class_1_B6BE44583A9235C2* Method_1_15E19DC88EB9F1BB(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
	{
		return ((::Class_1_B6BE44583A9235C2*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_233D6DFBA5EFA41F_METHOD_1_15E19DC88EB9F1BB_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState Method_1_196BD2D55A0ED760(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_233D6DFBA5EFA41F_METHOD_1_196BD2D55A0ED760_OFFSET))(this, a1, a2, a3);
	}
};
