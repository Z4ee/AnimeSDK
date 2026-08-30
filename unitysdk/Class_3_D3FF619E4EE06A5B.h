#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_4_F60973754F5DAEE6;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D3FF619E4EE06A5B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13505370)
#define CLASS_3_D3FF619E4EE06A5B__CTOR_OFFSET UNITYSDK_OFFSET(0x13505340)

inline static constexpr unsigned int Class_3_D3FF619E4EE06A5B_TypeDefinitionIndex = 53609;

class Class_3_D3FF619E4EE06A5B : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_4_F60973754F5DAEE6*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_F60973754F5DAEE6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_F60973754F5DAEE6*))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3FF619E4EE06A5B_ONTASKBEGIN_OFFSET))(this);
	}
};
