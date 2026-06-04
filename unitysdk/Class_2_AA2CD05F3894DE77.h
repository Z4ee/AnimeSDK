#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GotoUIPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AA2CD05F3894DE77_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA59C890)
#define CLASS_2_AA2CD05F3894DE77_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA59C930)
#define CLASS_2_AA2CD05F3894DE77_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA59C9B0)
#define CLASS_2_AA2CD05F3894DE77_TICK_OFFSET UNITYSDK_OFFSET(0xA59C8D0)
#define CLASS_2_AA2CD05F3894DE77__CTOR_OFFSET UNITYSDK_OFFSET(0xA59C880)

inline static constexpr unsigned int Class_2_AA2CD05F3894DE77_TypeDefinitionIndex = 54337;

class Class_2_AA2CD05F3894DE77 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GotoUIPage* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GotoUIPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GotoUIPage*))((::PBYTE)hIl2Cpp + CLASS_2_AA2CD05F3894DE77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2CD05F3894DE77_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AA2CD05F3894DE77_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2CD05F3894DE77_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA2CD05F3894DE77_ONTASKRESET_OFFSET))(this);
	}
};
