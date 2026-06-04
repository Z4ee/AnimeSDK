#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_859C8B90384D9B45.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F6547C29ED6DC357_2_METHOD_2_2E24602706D93F1A_OFFSET UNITYSDK_OFFSET(0x141BD1C0)
#define CLASS_2_F6547C29ED6DC357_2_METHOD_2_B8286919C5578939_OFFSET UNITYSDK_OFFSET(0x141BD050)
#define CLASS_2_F6547C29ED6DC357_2__CTOR_OFFSET UNITYSDK_OFFSET(0x141BCFF0)

inline static constexpr unsigned int Class_2_F6547C29ED6DC357_2_TypeDefinitionIndex = 64908;

class Class_2_F6547C29ED6DC357_2 : public ::Class_1_859C8B90384D9B45
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B8286919C5578939(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_2_METHOD_2_B8286919C5578939_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2E24602706D93F1A(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F6547C29ED6DC357_2_METHOD_2_2E24602706D93F1A_OFFSET))(this, a1, a2, a3, a4);
	}
};
