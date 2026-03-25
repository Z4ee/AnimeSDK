#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_D983BF2FAAA4C0BD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_105_METHOD_3_38415FC6FA5AFCDB_OFFSET UNITYSDK_OFFSET(0x1164FA60)
#define CLASS_3_27518451A20BB161_105_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1164F820)
#define CLASS_3_27518451A20BB161_105__CTOR_OFFSET UNITYSDK_OFFSET(0x1164F7F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_105_TypeDefinitionIndex = 47397;

class Class_3_27518451A20BB161_105 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D983BF2FAAA4C0BD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D983BF2FAAA4C0BD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D983BF2FAAA4C0BD*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_105__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_105_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_38415FC6FA5AFCDB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_105_METHOD_3_38415FC6FA5AFCDB_OFFSET))(this, a1);
	}
};
