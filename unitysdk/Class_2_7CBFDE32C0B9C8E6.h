#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UINotifyMonopolyCellEventFinish; }

#define CLASS_2_7CBFDE32C0B9C8E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1821C6C0)
#define CLASS_2_7CBFDE32C0B9C8E6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1821C5B0)
#define CLASS_2_7CBFDE32C0B9C8E6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1821C670)
#define CLASS_2_7CBFDE32C0B9C8E6_TICK_OFFSET UNITYSDK_OFFSET(0x1821C610)
#define CLASS_2_7CBFDE32C0B9C8E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1821C5A0)

inline static constexpr unsigned int Class_2_7CBFDE32C0B9C8E6_TypeDefinitionIndex = 56203;

class Class_2_7CBFDE32C0B9C8E6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::UINotifyMonopolyCellEventFinish* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UINotifyMonopolyCellEventFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UINotifyMonopolyCellEventFinish*))((::PBYTE)hIl2Cpp + CLASS_2_7CBFDE32C0B9C8E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBFDE32C0B9C8E6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7CBFDE32C0B9C8E6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBFDE32C0B9C8E6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBFDE32C0B9C8E6_DISPOSE_OFFSET))(this);
	}
};
