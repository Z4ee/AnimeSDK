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

#define CLASS_1_B1D785E38B7ECC99_METHOD_1_00644FEF4AC20D5F_OFFSET UNITYSDK_OFFSET(0x9103A90)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_071E365C530A76A1_OFFSET UNITYSDK_OFFSET(0x9103CC0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_1BB21423721A254F_OFFSET UNITYSDK_OFFSET(0x9104520)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_1F17544B3E9B6AEC_OFFSET UNITYSDK_OFFSET(0x9104C20)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_2BF843AFFE4E3C84_OFFSET UNITYSDK_OFFSET(0x9104CD0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_2D90A619D574246D_OFFSET UNITYSDK_OFFSET(0x91046D0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_39723A11C6C633D4_OFFSET UNITYSDK_OFFSET(0x9104030)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_590B594E3545767D_OFFSET UNITYSDK_OFFSET(0x91033D0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_6364CBFCCA967647_OFFSET UNITYSDK_OFFSET(0x9103720)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_7CBE87D196249DC7_OFFSET UNITYSDK_OFFSET(0x91032B0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_86765F8FA33DFB5E_OFFSET UNITYSDK_OFFSET(0x9103F70)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_8A75635602BEC3D3_OFFSET UNITYSDK_OFFSET(0x9104190)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_91DB1091B5978D09_OFFSET UNITYSDK_OFFSET(0x9102EE0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_A83B777C454649C4_OFFSET UNITYSDK_OFFSET(0x9103550)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_BADF6AD1D11E9963_OFFSET UNITYSDK_OFFSET(0x9103FD0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_C0F35A31FAC15CA9_OFFSET UNITYSDK_OFFSET(0x9104DC0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_C6E51197B1B25430_OFFSET UNITYSDK_OFFSET(0x9104980)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_CED2EE5A5069A257_OFFSET UNITYSDK_OFFSET(0x9104330)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_D8A44EE15B53E912_OFFSET UNITYSDK_OFFSET(0x9104870)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_E957C97D34D58EF2_OFFSET UNITYSDK_OFFSET(0x9104B10)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_EDE14607FF07A38C_1_OFFSET UNITYSDK_OFFSET(0x9103920)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_EDE14607FF07A38C_OFFSET UNITYSDK_OFFSET(0x91037B0)
#define CLASS_1_B1D785E38B7ECC99_METHOD_1_F3E96553226A49C7_OFFSET UNITYSDK_OFFSET(0x9103D70)

inline static constexpr unsigned int Class_1_B1D785E38B7ECC99_TypeDefinitionIndex = 57375;

class Class_1_B1D785E38B7ECC99 : public ::System::Object
{
public:
	static ::RPG::Client::Promises::IPromise* Method_1_91DB1091B5978D09(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionType a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionType))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_91DB1091B5978D09_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A83B777C454649C4(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionConditionSet* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_A83B777C454649C4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6364CBFCCA967647(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupMissionCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupMissionCondition*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_6364CBFCCA967647_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_00644FEF4AC20D5F(::RPG::Client::FloorSavedData* a1, ::RPG::GameCore::LevelGroupSavedValueConditionSet* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::FloorSavedData*, ::RPG::GameCore::LevelGroupSavedValueConditionSet*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_00644FEF4AC20D5F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_071E365C530A76A1(::RPG::Client::FloorSavedData* a1, ::RPG::GameCore::LevelGroupSavedValueCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::FloorSavedData*, ::RPG::GameCore::LevelGroupSavedValueCondition*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_071E365C530A76A1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F3E96553226A49C7(::RPG::GameCore::LevelGroupMissionSavedValueCondition* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionSavedValueCondition*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_F3E96553226A49C7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_86765F8FA33DFB5E(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereMainMissionCompleteCondition*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_86765F8FA33DFB5E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BADF6AD1D11E9963(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupSubMissionCompleteCondition*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_BADF6AD1D11E9963_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_39723A11C6C633D4(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_39723A11C6C633D4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8A75635602BEC3D3(::RPG::Client::MapDef* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_8A75635602BEC3D3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CED2EE5A5069A257(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_CED2EE5A5069A257_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EDE14607FF07A38C(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_EDE14607FF07A38C_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_EDE14607FF07A38C_1(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_EDE14607FF07A38C_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2D90A619D574246D(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::System::Predicate_1<::System::Object*>* a3, ::System::Predicate_1<::System::Object*>* a4, ::System::Predicate_1<::System::UInt32>* a5)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::System::Predicate_1<::System::Object*>*, ::System::Predicate_1<::System::Object*>*, ::System::Predicate_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_2D90A619D574246D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_1BB21423721A254F(::RPG::GameCore::LevelGroupMissionPhase a1, ::System::UInt32 a2, ::RPG::Client::MapDef* a3, ::Class_3_A254F95476354784* a4, ::Class_3_A254F95476354784* a5, ::System::Predicate_1<::System::UInt32>* a6)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupMissionPhase, ::System::UInt32, ::RPG::Client::MapDef*, ::Class_3_A254F95476354784*, ::Class_3_A254F95476354784*, ::System::Predicate_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_1BB21423721A254F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_7CBE87D196249DC7(::RPG::GameCore::LevelGroupMissionConditionSet* a1, ::RPG::GameCore::LevelGroupMissionType a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::LevelGroupMissionConditionSet*, ::RPG::GameCore::LevelGroupMissionType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_7CBE87D196249DC7_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::Promises::IPromise* Method_1_590B594E3545767D(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::GameCore::LevelGroupMissionType a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::LevelGroupMissionType))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_590B594E3545767D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D8A44EE15B53E912(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_D8A44EE15B53E912_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C6E51197B1B25430(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_C6E51197B1B25430_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E957C97D34D58EF2(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_E957C97D34D58EF2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1F17544B3E9B6AEC(::System::Object* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_1F17544B3E9B6AEC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2BF843AFFE4E3C84(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_2BF843AFFE4E3C84_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C0F35A31FAC15CA9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1D785E38B7ECC99_METHOD_1_C0F35A31FAC15CA9_OFFSET))(a1);
	}
};
