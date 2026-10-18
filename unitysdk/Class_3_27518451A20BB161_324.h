#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A5903EBACBBF95B0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_324_METHOD_3_B4C45ADAAEFBBFDC_OFFSET UNITYSDK_OFFSET(0x154AD2C0)
#define CLASS_3_27518451A20BB161_324_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154AD040)
#define CLASS_3_27518451A20BB161_324__CTOR_OFFSET UNITYSDK_OFFSET(0x154AD010)

inline static constexpr unsigned int Class_3_27518451A20BB161_324_TypeDefinitionIndex = 58716;

class Class_3_27518451A20BB161_324 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A5903EBACBBF95B0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A5903EBACBBF95B0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A5903EBACBBF95B0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_324__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_324_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_B4C45ADAAEFBBFDC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_324_METHOD_3_B4C45ADAAEFBBFDC_OFFSET))(this, a1);
	}
};
