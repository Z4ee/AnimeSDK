#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_A1E875738AF63569;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_192_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15618670)
#define CLASS_3_27518451A20BB161_192__CTOR_OFFSET UNITYSDK_OFFSET(0x15618640)

inline static constexpr unsigned int Class_3_27518451A20BB161_192_TypeDefinitionIndex = 52744;

class Class_3_27518451A20BB161_192 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A1E875738AF63569*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A1E875738AF63569* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A1E875738AF63569*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_192__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_192_ONTASKBEGIN_OFFSET))(this);
	}
};
