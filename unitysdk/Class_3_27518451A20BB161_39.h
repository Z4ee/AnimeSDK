#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_8459FBDD4D4739ED;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_39_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A73700)
#define CLASS_3_27518451A20BB161_39__CTOR_OFFSET UNITYSDK_OFFSET(0x9A736D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_39_TypeDefinitionIndex = 48763;

class Class_3_27518451A20BB161_39 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_8459FBDD4D4739ED*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8459FBDD4D4739ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8459FBDD4D4739ED*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_39__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_39_ONTASKBEGIN_OFFSET))(this);
	}
};
