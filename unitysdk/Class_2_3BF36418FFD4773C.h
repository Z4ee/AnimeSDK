#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class AdvSetupTrainCollectionSystem; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3BF36418FFD4773C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EDC180)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x9EDC920)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_239041C3652AD136_OFFSET UNITYSDK_OFFSET(0x9EDCC80)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x9EDC710)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_8618CA7CE20C80DB_OFFSET UNITYSDK_OFFSET(0x9EDC360)
#define CLASS_2_3BF36418FFD4773C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9EDC560)
#define CLASS_2_3BF36418FFD4773C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9EDC1D0)
#define CLASS_2_3BF36418FFD4773C_TICK_OFFSET UNITYSDK_OFFSET(0x9EDC5B0)
#define CLASS_2_3BF36418FFD4773C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EDC0F0)

inline static constexpr unsigned int Class_2_3BF36418FFD4773C_TypeDefinitionIndex = 42521;

class Class_2_3BF36418FFD4773C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* Field_2_5; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* Field_2_4; // 0x30
	::RPG::GameCore::AdvSetupTrainCollectionSystem* Field_2_1; // 0x38
	::RPG::GameCore::TaskContext* Field_2_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8618CA7CE20C80DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_8618CA7CE20C80DB_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_239041C3652AD136(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_239041C3652AD136_OFFSET))(this, a1);
	}
};
