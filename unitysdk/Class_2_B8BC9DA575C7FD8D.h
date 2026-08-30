#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrame; }

#define CLASS_2_B8BC9DA575C7FD8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C8E7B0)
#define CLASS_2_B8BC9DA575C7FD8D_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x17C8E7F0)
#define CLASS_2_B8BC9DA575C7FD8D_ONSKIP_OFFSET UNITYSDK_OFFSET(0x17C8E970)
#define CLASS_2_B8BC9DA575C7FD8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C8E800)
#define CLASS_2_B8BC9DA575C7FD8D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C8E870)
#define CLASS_2_B8BC9DA575C7FD8D_TICK_OFFSET UNITYSDK_OFFSET(0x17C8E8C0)
#define CLASS_2_B8BC9DA575C7FD8D__CTOR_OFFSET UNITYSDK_OFFSET(0x17C8E7A0)

inline static constexpr unsigned int Class_2_B8BC9DA575C7FD8D_TypeDefinitionIndex = 59044;

class Class_2_B8BC9DA575C7FD8D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitFrame* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Int32 JFMEEDGDMKP; // 0x28
	::System::Int32 PFAKDIHJNEF; // 0x2C

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
