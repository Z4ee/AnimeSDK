#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterTriggerFreeStyleGraph; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1275B08CFA85A203_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1237B1B0)
#define CLASS_2_1275B08CFA85A203_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1237B220)
#define CLASS_2_1275B08CFA85A203_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1237B8C0)
#define CLASS_2_1275B08CFA85A203_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1237B870)
#define CLASS_2_1275B08CFA85A203_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1237B230)
#define CLASS_2_1275B08CFA85A203_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1237B580)
#define CLASS_2_1275B08CFA85A203_TICK_OFFSET UNITYSDK_OFFSET(0x1237B600)
#define CLASS_2_1275B08CFA85A203__CTOR_OFFSET UNITYSDK_OFFSET(0x1237B100)

inline static constexpr unsigned int Class_2_1275B08CFA85A203_TypeDefinitionIndex = 53496;

class Class_2_1275B08CFA85A203 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntityList* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::CharacterTriggerFreeStyleGraph* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* Field_2_3; // 0x30

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
