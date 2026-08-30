#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterTriggerFreeStyleGraph; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1275B08CFA85A203_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16482750)
#define CLASS_2_1275B08CFA85A203_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x164827C0)
#define CLASS_2_1275B08CFA85A203_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x16482EE0)
#define CLASS_2_1275B08CFA85A203_ONSKIP_OFFSET UNITYSDK_OFFSET(0x16482E90)
#define CLASS_2_1275B08CFA85A203_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164827D0)
#define CLASS_2_1275B08CFA85A203_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16482B50)
#define CLASS_2_1275B08CFA85A203_TICK_OFFSET UNITYSDK_OFFSET(0x16482BC0)
#define CLASS_2_1275B08CFA85A203__CTOR_OFFSET UNITYSDK_OFFSET(0x164826A0)

inline static constexpr unsigned int Class_2_1275B08CFA85A203_TypeDefinitionIndex = 58163;

class Class_2_1275B08CFA85A203 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntityList* FPEOFLNHOOL; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* FOAKPHLEJFG; // 0x28
	::RPG::GameCore::CharacterTriggerFreeStyleGraph* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterTriggerFreeStyleGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterTriggerFreeStyleGraph*))((::PBYTE)hIl2Cpp + CLASS_2_1275B08CFA85A203__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1275B08CFA85A203_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1275B08CFA85A203_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1275B08CFA85A203_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1275B08CFA85A203_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1275B08CFA85A203_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1275B08CFA85A203_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1275B08CFA85A203_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
