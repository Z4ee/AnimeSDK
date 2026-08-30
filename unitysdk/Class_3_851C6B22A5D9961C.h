#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetBPSortType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_851C6B22A5D9961C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1874A610)
#define CLASS_3_851C6B22A5D9961C__CTOR_OFFSET UNITYSDK_OFFSET(0x1874A5E0)

inline static constexpr unsigned int Class_3_851C6B22A5D9961C_TypeDefinitionIndex = 55550;

class Class_3_851C6B22A5D9961C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetBPSortType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBPSortType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBPSortType*))((::PBYTE)hIl2Cpp + CLASS_3_851C6B22A5D9961C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_851C6B22A5D9961C_ONTASKBEGIN_OFFSET))(this);
	}
};
