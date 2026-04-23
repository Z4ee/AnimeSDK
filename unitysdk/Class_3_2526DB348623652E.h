#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_FearEscape; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2526DB348623652E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x910EF80)
#define CLASS_3_2526DB348623652E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x910EFD0)
#define CLASS_3_2526DB348623652E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x910F120)
#define CLASS_3_2526DB348623652E_TICK_OFFSET UNITYSDK_OFFSET(0x910F0C0)
#define CLASS_3_2526DB348623652E__CTOR_OFFSET UNITYSDK_OFFSET(0x910EEF0)
#define CLASS_3_2526DB348623652E___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x910F1B0)
#define CLASS_3_2526DB348623652E___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x910F200)

inline static constexpr unsigned int Class_3_2526DB348623652E_TypeDefinitionIndex = 48194;

class Class_3_2526DB348623652E : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_FearEscape*>
{
public:
	::Class_2_F1C3EBA366E084A2* Field_3_0; // 0x28
	::RPG::GameCore::AdventureAbilityComponent* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_FearEscape* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_FearEscape*))((::PBYTE)hIl2Cpp + CLASS_3_2526DB348623652E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2526DB348623652E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2526DB348623652E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2526DB348623652E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2526DB348623652E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2526DB348623652E___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2526DB348623652E___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
