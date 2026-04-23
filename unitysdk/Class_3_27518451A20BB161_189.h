#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_92D509F8C09BDC99;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_189_METHOD_3_38415FC6FA5AFCDB_OFFSET UNITYSDK_OFFSET(0x90F77C0)
#define CLASS_3_27518451A20BB161_189_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90F75E0)
#define CLASS_3_27518451A20BB161_189__CTOR_OFFSET UNITYSDK_OFFSET(0x90F75B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_189_TypeDefinitionIndex = 54132;

class Class_3_27518451A20BB161_189 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_92D509F8C09BDC99*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_92D509F8C09BDC99* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_92D509F8C09BDC99*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_189__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_189_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_38415FC6FA5AFCDB(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_189_METHOD_3_38415FC6FA5AFCDB_OFFSET))(this, a1);
	}
};
