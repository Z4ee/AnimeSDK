#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05B51C46A30CE88C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18874440)
#define CLASS_3_05B51C46A30CE88C__CTOR_OFFSET UNITYSDK_OFFSET(0x18874410)

inline static constexpr unsigned int Class_3_05B51C46A30CE88C_TypeDefinitionIndex = 58481;

class Class_3_05B51C46A30CE88C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropMove*))((::PBYTE)hIl2Cpp + CLASS_3_05B51C46A30CE88C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05B51C46A30CE88C_ONTASKBEGIN_OFFSET))(this);
	}
};
