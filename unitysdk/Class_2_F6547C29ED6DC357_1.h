#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_859C8B90384D9B45.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F6547C29ED6DC357_1_METHOD_2_2E24602706D93F1A_OFFSET UNITYSDK_OFFSET(0xACC3250)
#define CLASS_2_F6547C29ED6DC357_1_METHOD_2_8ADC43AC745831ED_OFFSET UNITYSDK_OFFSET(0xACC2FF0)
#define CLASS_2_F6547C29ED6DC357_1__CTOR_OFFSET UNITYSDK_OFFSET(0xACC2F90)

inline static constexpr unsigned int Class_2_F6547C29ED6DC357_1_TypeDefinitionIndex = 64907;

class Class_2_F6547C29ED6DC357_1 : public ::Class_1_859C8B90384D9B45
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8ADC43AC745831ED(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_1_METHOD_2_8ADC43AC745831ED_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2E24602706D93F1A(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_1_METHOD_2_2E24602706D93F1A_OFFSET))(this, a1, a2, a3, a4);
	}
};
