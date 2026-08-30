#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RetargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECE2DCB3A896678F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17895C00)
#define CLASS_2_ECE2DCB3A896678F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17895E00)
#define CLASS_2_ECE2DCB3A896678F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x178965C0)
#define CLASS_2_ECE2DCB3A896678F_TICK_OFFSET UNITYSDK_OFFSET(0x178962C0)
#define CLASS_2_ECE2DCB3A896678F__CTOR_OFFSET UNITYSDK_OFFSET(0x17895A30)

inline static constexpr unsigned int Class_2_ECE2DCB3A896678F_TypeDefinitionIndex = 55522;

class Class_2_ECE2DCB3A896678F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x18
	::Class_3_07C3C4D2990C49EE* FNLJDEPHGFK; // 0x20
	::Class_3_07C3C4D2990C49EE* ABLEHPJLDDM; // 0x28
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x30
	::RPG::GameCore::RetargetList* OFKGLJOAMLD; // 0x38
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40

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
