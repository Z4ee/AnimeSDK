#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_02188F0D1DF78350;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_155_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160AE8C0)
#define CLASS_3_27518451A20BB161_155__CTOR_OFFSET UNITYSDK_OFFSET(0x160AE890)

inline static constexpr unsigned int Class_3_27518451A20BB161_155_TypeDefinitionIndex = 52450;

class Class_3_27518451A20BB161_155 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_02188F0D1DF78350*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_02188F0D1DF78350* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_02188F0D1DF78350*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_155__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_155_ONTASKBEGIN_OFFSET))(this);
	}
};
