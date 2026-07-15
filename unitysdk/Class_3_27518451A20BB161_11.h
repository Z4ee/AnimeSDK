#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6BCC89C3C94205BA;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183787F0)
#define CLASS_3_27518451A20BB161_11__CTOR_OFFSET UNITYSDK_OFFSET(0x183787C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_11_TypeDefinitionIndex = 50396;

class Class_3_27518451A20BB161_11 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6BCC89C3C94205BA*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6BCC89C3C94205BA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6BCC89C3C94205BA*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_11_ONTASKBEGIN_OFFSET))(this);
	}
};
