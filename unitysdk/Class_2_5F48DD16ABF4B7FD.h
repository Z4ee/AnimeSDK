#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_859C8B90384D9B45.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5F48DD16ABF4B7FD_METHOD_2_DB5ADC09526D5F46_OFFSET UNITYSDK_OFFSET(0xE638FB0)
#define CLASS_2_5F48DD16ABF4B7FD_METHOD_2_F2A5E448304FCF58_OFFSET UNITYSDK_OFFSET(0xE638D80)
#define CLASS_2_5F48DD16ABF4B7FD__CTOR_OFFSET UNITYSDK_OFFSET(0xE638D20)

inline static constexpr unsigned int Class_2_5F48DD16ABF4B7FD_TypeDefinitionIndex = 63986;

class Class_2_5F48DD16ABF4B7FD : public ::Class_1_859C8B90384D9B45
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F48DD16ABF4B7FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F2A5E448304FCF58(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5F48DD16ABF4B7FD_METHOD_2_F2A5E448304FCF58_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DB5ADC09526D5F46(::RPG::GameCore::TaskContext* P0, ::RPG::GameCore::PhotoGraphAimContainerConfig* P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5F48DD16ABF4B7FD_METHOD_2_DB5ADC09526D5F46_OFFSET))(this, P0, P1, P2, P3);
	}
};
