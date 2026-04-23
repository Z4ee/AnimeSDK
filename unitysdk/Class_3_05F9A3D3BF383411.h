#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetPerformanceResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05F9A3D3BF383411_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118B3F80)
#define CLASS_3_05F9A3D3BF383411__CTOR_OFFSET UNITYSDK_OFFSET(0x118B3F50)

inline static constexpr unsigned int Class_3_05F9A3D3BF383411_TypeDefinitionIndex = 49105;

class Class_3_05F9A3D3BF383411 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetPerformanceResult*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPerformanceResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPerformanceResult*))((::PBYTE)hIl2Cpp + CLASS_3_05F9A3D3BF383411__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05F9A3D3BF383411_ONTASKBEGIN_OFFSET))(this);
	}
};
