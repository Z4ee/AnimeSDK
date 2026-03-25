#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetActionBarRightDownMiniIcon; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E22334153A056C47_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89C6E70)
#define CLASS_3_E22334153A056C47__CTOR_OFFSET UNITYSDK_OFFSET(0x89C6E40)

inline static constexpr unsigned int Class_3_E22334153A056C47_TypeDefinitionIndex = 44305;

class Class_3_E22334153A056C47 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetActionBarRightDownMiniIcon*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActionBarRightDownMiniIcon* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActionBarRightDownMiniIcon*))((::PBYTE)hIl2Cpp + CLASS_3_E22334153A056C47__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E22334153A056C47_ONTASKBEGIN_OFFSET))(this);
	}
};
