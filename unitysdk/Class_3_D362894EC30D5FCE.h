#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntityResetTransform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D362894EC30D5FCE_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAB74F60)
#define CLASS_3_D362894EC30D5FCE_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAB74F70)
#define CLASS_3_D362894EC30D5FCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB74BC0)
#define CLASS_3_D362894EC30D5FCE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB74B90)

inline static constexpr unsigned int Class_3_D362894EC30D5FCE_TypeDefinitionIndex = 48969;

class Class_3_D362894EC30D5FCE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEntityResetTransform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityResetTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityResetTransform*))((::PBYTE)hIl2Cpp + CLASS_3_D362894EC30D5FCE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D362894EC30D5FCE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D362894EC30D5FCE_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D362894EC30D5FCE_ONSKIP_OFFSET))(this);
	}
};
