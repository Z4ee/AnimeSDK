#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CF9C7DF2A4F888F5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8CBFD90)
#define CLASS_3_27518451A20BB161_50__CTOR_OFFSET UNITYSDK_OFFSET(0x8CBFD60)

inline static constexpr unsigned int Class_3_27518451A20BB161_50_TypeDefinitionIndex = 42867;

class Class_3_27518451A20BB161_50 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CF9C7DF2A4F888F5*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CF9C7DF2A4F888F5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CF9C7DF2A4F888F5*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_50_ONTASKBEGIN_OFFSET))(this);
	}
};
