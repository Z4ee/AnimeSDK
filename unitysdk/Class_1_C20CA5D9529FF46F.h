#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionPhase.h"
#include "unitysdk/RPG/GameCore/LevelGroupMissionType.h"
#include "unitysdk/System/Object.h"

class Class_3_A254F95476354784;
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class LevelGroupAtmosphereLoadCondition; }
namespace RPG::GameCore { class LevelGroupAtmosphereMainMissionCompleteCondition; }
namespace RPG::GameCore { class LevelGroupAtmosphereSavedValueCondition; }
namespace RPG::GameCore { class LevelGroupMissionCondition; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class LevelGroupMissionSavedValueCondition; }
namespace RPG::GameCore { class LevelGroupSavedValueCondition; }
namespace RPG::GameCore { class LevelGroupSavedValueConditionSet; }
namespace RPG::GameCore { class LevelGroupSubMissionCompleteCondition; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C20CA5D9529FF46F_METHOD_1_00644FEF4AC20D5F_OFFSET UNITYSDK_OFFSET(0x17C67B20)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_092353A1D05F454E_OFFSET UNITYSDK_OFFSET(0x17C68990)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_107CDD67F6FE9D77_OFFSET UNITYSDK_OFFSET(0x17C681F0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_1F17544B3E9B6AEC_OFFSET UNITYSDK_OFFSET(0x17C68CA0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_20D17B9B3A44F37A_OFFSET UNITYSDK_OFFSET(0x17C68A50)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_364081F4E7571BAA_OFFSET UNITYSDK_OFFSET(0x17C66D00)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_39723A11C6C633D4_OFFSET UNITYSDK_OFFSET(0x17C68090)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_5E80740A09CCD008_OFFSET UNITYSDK_OFFSET(0x17C68620)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_6364CBFCCA967647_OFFSET UNITYSDK_OFFSET(0x17C67710)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_64D981E61BDCF89E_OFFSET UNITYSDK_OFFSET(0x17C68E00)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_7CBE87D196249DC7_OFFSET UNITYSDK_OFFSET(0x17C672C0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_84AAF0D3230B67FC_OFFSET UNITYSDK_OFFSET(0x17C68BE0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_86765F8FA33DFB5E_OFFSET UNITYSDK_OFFSET(0x17C67FD0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_A83B777C454649C4_OFFSET UNITYSDK_OFFSET(0x17C67560)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_BADF6AD1D11E9963_OFFSET UNITYSDK_OFFSET(0x17C68030)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_C0F35A31FAC15CA9_OFFSET UNITYSDK_OFFSET(0x17C68D50)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_CD903DFF865E6CCE_OFFSET UNITYSDK_OFFSET(0x17C683E0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_E05185771F02A353_OFFSET UNITYSDK_OFFSET(0x17C67D20)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_E279F6E3C46259CF_OFFSET UNITYSDK_OFFSET(0x17C673E0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_E7F974EFFBD1640A_OFFSET UNITYSDK_OFFSET(0x17C687E0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_EDE14607FF07A38C_1_OFFSET UNITYSDK_OFFSET(0x17C67960)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_EDE14607FF07A38C_OFFSET UNITYSDK_OFFSET(0x17C677A0)
#define CLASS_1_C20CA5D9529FF46F_METHOD_1_F3E96553226A49C7_OFFSET UNITYSDK_OFFSET(0x17C67DD0)

inline static constexpr unsigned int Class_1_C20CA5D9529FF46F_TypeDefinitionIndex = 59449;

class Class_1_C20CA5D9529FF46F : public ::System::Object
{
public:
	static ::RPG::Client::Promises::IPromise* Method_1_364081F4E7571BAA(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionType a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionType))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_364081F4E7571BAA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A83B777C454649C4(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionConditionSet* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_A83B777C454649C4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6364CBFCCA967647(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionCondition*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_6364CBFCCA967647_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_00644FEF4AC20D5F(::RPG::Client::FloorSavedData* a1, ::RPG::GameCore::LevelGroupSavedValueConditionSet* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::FloorSavedData*, ::RPG::GameCore::LevelGroupSavedValueConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_00644FEF4AC20D5F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E05185771F02A353(::RPG::Client::FloorSavedData* a1, ::RPG::GameCore::LevelGroupSavedValueCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::FloorSavedData*, ::RPG::GameCore::LevelGroupSavedValueCondition*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_E05185771F02A353_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F3E96553226A49C7(::RPG::GameCore::LevelGroupMissionSavedValueCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionSavedValueCondition*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_F3E96553226A49C7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_86765F8FA33DFB5E(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_86765F8FA33DFB5E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BADF6AD1D11E9963(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_BADF6AD1D11E9963_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_39723A11C6C633D4(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_39723A11C6C633D4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_107CDD67F6FE9D77(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_107CDD67F6FE9D77_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CD903DFF865E6CCE(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_CD903DFF865E6CCE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EDE14607FF07A38C(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_EDE14607FF07A38C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_EDE14607FF07A38C_1(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_EDE14607FF07A38C_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E7F974EFFBD1640A(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::System::Predicate_1<::System::Object*>* a3, ::System::Predicate_1<::System::Object*>* a4, ::System::Predicate_1<::System::UInt32>* a5)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::System::Predicate_1<::System::Object*>*, ::System::Predicate_1<::System::Object*>*, ::System::Predicate_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_E7F974EFFBD1640A_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_5E80740A09CCD008(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3, ::Class_3_A254F95476354784* a4, ::Class_3_A254F95476354784* a5, ::System::Predicate_1<::System::UInt32>* a6)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*, ::Class_3_A254F95476354784*, ::Class_3_A254F95476354784*, ::System::Predicate_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_5E80740A09CCD008_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_7CBE87D196249DC7(::RPG::GameCore::LevelGroupMissionConditionSet* a1, ::RPG::GameCore::LevelGroupMissionType a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelGroupMissionConditionSet*, ::RPG::GameCore::LevelGroupMissionType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_7CBE87D196249DC7_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::Promises::IPromise* Method_1_E279F6E3C46259CF(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::GameCore::LevelGroupMissionType a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::LevelGroupMissionType))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_E279F6E3C46259CF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_092353A1D05F454E(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_092353A1D05F454E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_20D17B9B3A44F37A(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_20D17B9B3A44F37A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_84AAF0D3230B67FC(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_84AAF0D3230B67FC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1F17544B3E9B6AEC(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_1F17544B3E9B6AEC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C0F35A31FAC15CA9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_C0F35A31FAC15CA9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_64D981E61BDCF89E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C20CA5D9529FF46F_METHOD_1_64D981E61BDCF89E_OFFSET))(a1);
	}
};
