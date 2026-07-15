#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PerformanceExtendEndBlack; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_76CB8FD6D65CF44A_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15EA79A0)
#define CLASS_3_76CB8FD6D65CF44A_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15EA7A30)
#define CLASS_3_76CB8FD6D65CF44A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EA79B0)
#define CLASS_3_76CB8FD6D65CF44A__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA7970)

inline static constexpr unsigned int Class_3_76CB8FD6D65CF44A_TypeDefinitionIndex = 50666;

class Class_3_76CB8FD6D65CF44A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PerformanceExtendEndBlack*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceExtendEndBlack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceExtendEndBlack*))((::PBYTE)hIl2Cpp + CLASS_3_76CB8FD6D65CF44A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76CB8FD6D65CF44A_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76CB8FD6D65CF44A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76CB8FD6D65CF44A_ONSKIP_OFFSET))(this);
	}
};
