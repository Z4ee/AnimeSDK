#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6954875F008CACFC_10;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_130_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB75EAA0)
#define CLASS_3_27518451A20BB161_130_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB75EAE0)
#define CLASS_3_27518451A20BB161_130__CTOR_OFFSET UNITYSDK_OFFSET(0xB75EA70)

inline static constexpr unsigned int Class_3_27518451A20BB161_130_TypeDefinitionIndex = 53835;

class Class_3_27518451A20BB161_130 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC_10*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC_10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC_10*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_130__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_130_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_130_ONTASKBEGIN_OFFSET))(this);
	}
};
