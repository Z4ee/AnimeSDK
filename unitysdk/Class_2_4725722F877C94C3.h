#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2668DA02E674CE7.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4725722F877C94C3_METHOD_2_8ADC43AC745831ED_OFFSET UNITYSDK_OFFSET(0xC09BE80)
#define CLASS_2_4725722F877C94C3__CTOR_OFFSET UNITYSDK_OFFSET(0xC09BE20)

inline static constexpr unsigned int Class_2_4725722F877C94C3_TypeDefinitionIndex = 69401;

class Class_2_4725722F877C94C3 : public ::Class_1_A2668DA02E674CE7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4725722F877C94C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8ADC43AC745831ED(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4725722F877C94C3_METHOD_2_8ADC43AC745831ED_OFFSET))(this, a1, a2, a3, a4);
	}
};
