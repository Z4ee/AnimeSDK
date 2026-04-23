#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7C54442BEE20ABA2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_158_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123DA2D0)
#define CLASS_3_27518451A20BB161_158__CTOR_OFFSET UNITYSDK_OFFSET(0x123DA2A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_158_TypeDefinitionIndex = 51348;

class Class_3_27518451A20BB161_158 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7C54442BEE20ABA2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7C54442BEE20ABA2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7C54442BEE20ABA2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_158__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_158_ONTASKBEGIN_OFFSET))(this);
	}
};
