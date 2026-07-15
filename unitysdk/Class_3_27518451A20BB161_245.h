#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F18F1D8CA2B3C9DB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_245_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CFA960)
#define CLASS_3_27518451A20BB161_245__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFA930)

inline static constexpr unsigned int Class_3_27518451A20BB161_245_TypeDefinitionIndex = 53857;

class Class_3_27518451A20BB161_245 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F18F1D8CA2B3C9DB*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F18F1D8CA2B3C9DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F18F1D8CA2B3C9DB*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_245__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_245_ONTASKBEGIN_OFFSET))(this);
	}
};
