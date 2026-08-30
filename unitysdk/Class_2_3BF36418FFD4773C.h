#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_460;
namespace RPG::GameCore { class AdvSetupTrainCollectionSystem; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3BF36418FFD4773C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19885A70)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x19886310)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x198865B0)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x19885E20)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_F9B4F7940A0F9555_OFFSET UNITYSDK_OFFSET(0x19886980)
#define CLASS_2_3BF36418FFD4773C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19886080)
#define CLASS_2_3BF36418FFD4773C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19885AC0)
#define CLASS_2_3BF36418FFD4773C_TICK_OFFSET UNITYSDK_OFFSET(0x198860D0)
#define CLASS_2_3BF36418FFD4773C__CTOR_OFFSET UNITYSDK_OFFSET(0x198859E0)

inline static constexpr unsigned int Class_2_3BF36418FFD4773C_TypeDefinitionIndex = 52783;

class Class_2_3BF36418FFD4773C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* FNIKPKBOCJF; // 0x20
	::Class_1_5F51D4049EA87B7B* KJNAMCMFCPF; // 0x28
	::RPG::GameCore::AdvSetupTrainCollectionSystem* IGHAHBNLIJA; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* KNOHBIGNCEL; // 0x38
	::Class_1_5F51D4049EA87B7B* FCFAFKDNHCJ; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetupTrainCollectionSystem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetupTrainCollectionSystem*))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
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

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_F9B4F7940A0F9555(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_F9B4F7940A0F9555_OFFSET))(this, a1);
	}
};
