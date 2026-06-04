#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CADEC115725602AC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_119_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x141CDAC0)
#define CLASS_3_27518451A20BB161_119__CTOR_OFFSET UNITYSDK_OFFSET(0x141CDA90)

inline static constexpr unsigned int Class_3_27518451A20BB161_119_TypeDefinitionIndex = 51353;

class Class_3_27518451A20BB161_119 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CADEC115725602AC*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CADEC115725602AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CADEC115725602AC*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_119__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_119_ONTASKBEGIN_OFFSET))(this);
	}
};
