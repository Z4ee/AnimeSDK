#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F8C627038C8DD30C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_33_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1FE2C0)
#define CLASS_3_27518451A20BB161_33__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FE290)

inline static constexpr unsigned int Class_3_27518451A20BB161_33_TypeDefinitionIndex = 48757;

class Class_3_27518451A20BB161_33 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F8C627038C8DD30C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F8C627038C8DD30C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F8C627038C8DD30C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33_ONTASKBEGIN_OFFSET))(this);
	}
};
