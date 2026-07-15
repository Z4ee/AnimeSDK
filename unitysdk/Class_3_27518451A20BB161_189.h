#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_AEB473993EF0DACB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_189_METHOD_3_67C7CE7CDAA79B6E_OFFSET UNITYSDK_OFFSET(0x169F3DA0)
#define CLASS_3_27518451A20BB161_189_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169F3B60)
#define CLASS_3_27518451A20BB161_189__CTOR_OFFSET UNITYSDK_OFFSET(0x169F3B30)

inline static constexpr unsigned int Class_3_27518451A20BB161_189_TypeDefinitionIndex = 52724;

class Class_3_27518451A20BB161_189 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_AEB473993EF0DACB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_AEB473993EF0DACB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_AEB473993EF0DACB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_189__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_189_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_67C7CE7CDAA79B6E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_189_METHOD_3_67C7CE7CDAA79B6E_OFFSET))(this, a1);
	}
};
