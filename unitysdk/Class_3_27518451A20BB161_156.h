#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_975AA6CEA4DCEF29;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_156_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95919D0)
#define CLASS_3_27518451A20BB161_156__CTOR_OFFSET UNITYSDK_OFFSET(0x95919A0)

inline static constexpr unsigned int Class_3_27518451A20BB161_156_TypeDefinitionIndex = 51342;

class Class_3_27518451A20BB161_156 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_975AA6CEA4DCEF29*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_975AA6CEA4DCEF29* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_975AA6CEA4DCEF29*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_156__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_156_ONTASKBEGIN_OFFSET))(this);
	}
};
