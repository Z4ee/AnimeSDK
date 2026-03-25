#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RetargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECE2DCB3A896678F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B0CE50)
#define CLASS_2_ECE2DCB3A896678F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B0CF10)
#define CLASS_2_ECE2DCB3A896678F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B0D770)
#define CLASS_2_ECE2DCB3A896678F_TICK_OFFSET UNITYSDK_OFFSET(0x10B0D470)
#define CLASS_2_ECE2DCB3A896678F__CTOR_OFFSET UNITYSDK_OFFSET(0x10B0CC80)

inline static constexpr unsigned int Class_2_ECE2DCB3A896678F_TypeDefinitionIndex = 44292;

class Class_2_ECE2DCB3A896678F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RetargetList* Field_2_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_2; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x40

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
