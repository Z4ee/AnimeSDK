#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_12825D4B6E545D7F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_196_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164AFEB0)
#define CLASS_3_27518451A20BB161_196_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164AFEF0)
#define CLASS_3_27518451A20BB161_196__CTOR_OFFSET UNITYSDK_OFFSET(0x164AFE80)

inline static constexpr unsigned int Class_3_27518451A20BB161_196_TypeDefinitionIndex = 55079;

class Class_3_27518451A20BB161_196 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_12825D4B6E545D7F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_12825D4B6E545D7F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_12825D4B6E545D7F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_196__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_196_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_196_ONTASKBEGIN_OFFSET))(this);
	}
};
