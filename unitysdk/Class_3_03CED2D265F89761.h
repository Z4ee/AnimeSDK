#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BE3841977FBB4ED9.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

class Class_0_16E4307DCC419505_675;
class Class_1_35B024CC96B837C1;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_03CED2D265F89761_GET__MAX_DFS_COUNT_OFFSET UNITYSDK_OFFSET(0xC509A30)
#define CLASS_3_03CED2D265F89761_METHOD_3_12A004AF0F106988_OFFSET UNITYSDK_OFFSET(0xC509ED0)
#define CLASS_3_03CED2D265F89761_METHOD_3_2A4675480BD63102_OFFSET UNITYSDK_OFFSET(0xC509C40)
#define CLASS_3_03CED2D265F89761_METHOD_3_2B117361F5191106_OFFSET UNITYSDK_OFFSET(0xC50A200)
#define CLASS_3_03CED2D265F89761_METHOD_3_99C1852B0FEA659F_OFFSET UNITYSDK_OFFSET(0xC509A40)
#define CLASS_3_03CED2D265F89761_METHOD_3_BC7B5A0AC7E2F4A4_OFFSET UNITYSDK_OFFSET(0xC509A70)
#define CLASS_3_03CED2D265F89761_METHOD_3_F206CAAE9FE59EDB_OFFSET UNITYSDK_OFFSET(0xC50A340)
#define CLASS_3_03CED2D265F89761__CTOR_OFFSET UNITYSDK_OFFSET(0xC509AF0)

inline static constexpr unsigned int Class_3_03CED2D265F89761_TypeDefinitionIndex = 61199;

class Class_3_03CED2D265F89761 : public ::Class_2_BE3841977FBB4ED9
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* Field_3_1; // 0x38
	::System::UInt32 __MAX_DFS_COUNT_k__BackingField; // 0x40

	::System::Void _ctor(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get__MAX_DFS_COUNT()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_GET__MAX_DFS_COUNT_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* Method_3_99C1852B0FEA659F()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_99C1852B0FEA659F_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_675* Method_3_BC7B5A0AC7E2F4A4(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::Class_0_16E4307DCC419505_675*(*)(::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_BC7B5A0AC7E2F4A4_OFFSET))(a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_3_2A4675480BD63102()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_2A4675480BD63102_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_3_12A004AF0F106988(::RPG::GameCore::RelicType a1, ::RPG::GameCore::RelicType a2)
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_12A004AF0F106988_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2B117361F5191106(::RPG::Client::RelicItemData* a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::RelicType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_2B117361F5191106_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_3_F206CAAE9FE59EDB()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_03CED2D265F89761_METHOD_3_F206CAAE9FE59EDB_OFFSET))(this);
	}
};
