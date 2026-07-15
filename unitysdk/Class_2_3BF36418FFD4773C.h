#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_425;
namespace RPG::GameCore { class AdvSetupTrainCollectionSystem; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3BF36418FFD4773C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18399900)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x1839A190)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1839A430)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x18399CA0)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_F9B4F7940A0F9555_OFFSET UNITYSDK_OFFSET(0x1839A7F0)
#define CLASS_2_3BF36418FFD4773C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18399F00)
#define CLASS_2_3BF36418FFD4773C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18399950)
#define CLASS_2_3BF36418FFD4773C_TICK_OFFSET UNITYSDK_OFFSET(0x18399F50)
#define CLASS_2_3BF36418FFD4773C__CTOR_OFFSET UNITYSDK_OFFSET(0x18399870)

inline static constexpr unsigned int Class_2_3BF36418FFD4773C_TypeDefinitionIndex = 50121;

class Class_2_3BF36418FFD4773C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvSetupTrainCollectionSystem* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* Field_2_4; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x40

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

	::System::Void Method_2_F9B4F7940A0F9555(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_F9B4F7940A0F9555_OFFSET))(this, a1);
	}
};
