#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BE3841977FBB4ED9.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

class Class_0_16E4307DCC419505_826;
class Class_1_A0C0ADCC8A5FDABE;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_03CED2D265F89761_GET__MAX_DFS_COUNT_OFFSET UNITYSDK_OFFSET(0x1431D610)
#define CLASS_3_03CED2D265F89761_METHOD_3_2A4675480BD63102_OFFSET UNITYSDK_OFFSET(0x1431D820)
#define CLASS_3_03CED2D265F89761_METHOD_3_2B117361F5191106_OFFSET UNITYSDK_OFFSET(0x1431DE60)
#define CLASS_3_03CED2D265F89761_METHOD_3_5E805593E53FA73E_OFFSET UNITYSDK_OFFSET(0x1431DFA0)
#define CLASS_3_03CED2D265F89761_METHOD_3_946545EA54E55C6E_OFFSET UNITYSDK_OFFSET(0x1431DAB0)
#define CLASS_3_03CED2D265F89761_METHOD_3_99C1852B0FEA659F_OFFSET UNITYSDK_OFFSET(0x1431D620)
#define CLASS_3_03CED2D265F89761_METHOD_3_BC7B5A0AC7E2F4A4_OFFSET UNITYSDK_OFFSET(0x1431D650)
#define CLASS_3_03CED2D265F89761__CTOR_OFFSET UNITYSDK_OFFSET(0x1431D6D0)

inline static constexpr unsigned int Class_3_03CED2D265F89761_TypeDefinitionIndex = 69522;

class Class_3_03CED2D265F89761 : public ::Class_2_BE3841977FBB4ED9
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* Field_3_0; // 0x38
	::System::UInt32 __MAX_DFS_COUNT_k__BackingField; // 0x40

	::System::Void _ctor(::Class_1_A0C0ADCC8A5FDABE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0C0ADCC8A5FDABE*))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get__MAX_DFS_COUNT()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_GET__MAX_DFS_COUNT_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* Method_3_99C1852B0FEA659F()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_99C1852B0FEA659F_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_826* Method_3_BC7B5A0AC7E2F4A4(::Class_1_A0C0ADCC8A5FDABE* a1)
	{
		return ((::Class_0_16E4307DCC419505_826*(*)(::Class_1_A0C0ADCC8A5FDABE*))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_BC7B5A0AC7E2F4A4_OFFSET))(a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_3_2A4675480BD63102()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_2A4675480BD63102_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_3_946545EA54E55C6E(::RPG::GameCore::RelicType a1, ::RPG::GameCore::RelicType a2)
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_946545EA54E55C6E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2B117361F5191106(::RPG::Client::RelicItemData* a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::RelicType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_2B117361F5191106_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_3_5E805593E53FA73E()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_5E805593E53FA73E_OFFSET))(this);
	}
};
