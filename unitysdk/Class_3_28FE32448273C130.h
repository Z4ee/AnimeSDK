#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ResetActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_28FE32448273C130_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157C9250)
#define CLASS_3_28FE32448273C130__CTOR_OFFSET UNITYSDK_OFFSET(0x157C9220)

inline static constexpr unsigned int Class_3_28FE32448273C130_TypeDefinitionIndex = 55515;

class Class_3_28FE32448273C130 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ResetActionDelay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetActionDelay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetActionDelay*))((::PBYTE)hIl2Cpp + CLASS_3_28FE32448273C130__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28FE32448273C130_ONTASKBEGIN_OFFSET))(this);
	}
};
