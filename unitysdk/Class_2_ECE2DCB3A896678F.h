#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RetargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECE2DCB3A896678F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97A0DF0)
#define CLASS_2_ECE2DCB3A896678F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x97A0EB0)
#define CLASS_2_ECE2DCB3A896678F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x97A1710)
#define CLASS_2_ECE2DCB3A896678F_TICK_OFFSET UNITYSDK_OFFSET(0x97A1410)
#define CLASS_2_ECE2DCB3A896678F__CTOR_OFFSET UNITYSDK_OFFSET(0x97A0C20)

inline static constexpr unsigned int Class_2_ECE2DCB3A896678F_TypeDefinitionIndex = 51006;

class Class_2_ECE2DCB3A896678F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x20
	::RPG::GameCore::RetargetList* Field_2_1; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RetargetList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RetargetList*))((::PBYTE)hIl2Cpp + CLASS_2_ECE2DCB3A896678F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECE2DCB3A896678F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECE2DCB3A896678F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECE2DCB3A896678F_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECE2DCB3A896678F_ONTASKRESET_OFFSET))(this);
	}
};
