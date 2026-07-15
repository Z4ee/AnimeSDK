#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9533171BAAC129D2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_276_METHOD_3_B4C45ADAAEFBBFDC_OFFSET UNITYSDK_OFFSET(0x16101670)
#define CLASS_3_27518451A20BB161_276_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161013E0)
#define CLASS_3_27518451A20BB161_276__CTOR_OFFSET UNITYSDK_OFFSET(0x161013B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_276_TypeDefinitionIndex = 56089;

class Class_3_27518451A20BB161_276 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9533171BAAC129D2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9533171BAAC129D2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9533171BAAC129D2*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_276__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_276_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_B4C45ADAAEFBBFDC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_276_METHOD_3_B4C45ADAAEFBBFDC_OFFSET))(this, a1);
	}
};
