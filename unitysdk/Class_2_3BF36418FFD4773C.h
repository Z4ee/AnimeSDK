#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class AdvSetupTrainCollectionSystem; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3BF36418FFD4773C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAEFD40)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0xAAF0340)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xAAF05E0)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xAAEFF30)
#define CLASS_2_3BF36418FFD4773C_METHOD_2_F9B4F7940A0F9555_OFFSET UNITYSDK_OFFSET(0xAAF0940)
#define CLASS_2_3BF36418FFD4773C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAF0190)
#define CLASS_2_3BF36418FFD4773C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAAEFD90)
#define CLASS_2_3BF36418FFD4773C_TICK_OFFSET UNITYSDK_OFFSET(0xAAF01E0)
#define CLASS_2_3BF36418FFD4773C__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEFCB0)

inline static constexpr unsigned int Class_2_3BF36418FFD4773C_TypeDefinitionIndex = 49108;

class Class_2_3BF36418FFD4773C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::AdvSetupTrainCollectionSystem* Field_2_2; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::ELevelPerformanceType>>* Field_2_5; // 0x40

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

	::System::Void Method_2_F9B4F7940A0F9555(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_3BF36418FFD4773C_METHOD_2_F9B4F7940A0F9555_OFFSET))(this, a1);
	}
};
