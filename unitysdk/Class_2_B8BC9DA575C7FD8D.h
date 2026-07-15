#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }

#define CLASS_2_B8BC9DA575C7FD8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1561A190)
#define CLASS_2_B8BC9DA575C7FD8D_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1561A1D0)
#define CLASS_2_B8BC9DA575C7FD8D_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1561A350)
#define CLASS_2_B8BC9DA575C7FD8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1561A1E0)
#define CLASS_2_B8BC9DA575C7FD8D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1561A250)
#define CLASS_2_B8BC9DA575C7FD8D_TICK_OFFSET UNITYSDK_OFFSET(0x1561A2A0)
#define CLASS_2_B8BC9DA575C7FD8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1561A180)

inline static constexpr unsigned int Class_2_B8BC9DA575C7FD8D_TypeDefinitionIndex = 56262;

class Class_2_B8BC9DA575C7FD8D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitFrame* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFrame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFrame*))((::PBYTE)hIl2Cpp + CLASS_2_B8BC9DA575C7FD8D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8BC9DA575C7FD8D_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8BC9DA575C7FD8D_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8BC9DA575C7FD8D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8BC9DA575C7FD8D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B8BC9DA575C7FD8D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8BC9DA575C7FD8D_ONSKIP_OFFSET))(this);
	}
};
