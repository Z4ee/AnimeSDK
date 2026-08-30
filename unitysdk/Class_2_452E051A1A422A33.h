#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2668DA02E674CE7.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_452E051A1A422A33_METHOD_2_B8286919C5578939_OFFSET UNITYSDK_OFFSET(0x160EC770)
#define CLASS_2_452E051A1A422A33__CTOR_OFFSET UNITYSDK_OFFSET(0x160EC710)

inline static constexpr unsigned int Class_2_452E051A1A422A33_TypeDefinitionIndex = 69402;

class Class_2_452E051A1A422A33 : public ::Class_1_A2668DA02E674CE7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_452E051A1A422A33__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B8286919C5578939(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_452E051A1A422A33_METHOD_2_B8286919C5578939_OFFSET))(this, a1, a2, a3, a4);
	}
};
