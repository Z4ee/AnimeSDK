#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ReduceStanceRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EF0268BE15B6887E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163220E0)
#define CLASS_3_EF0268BE15B6887E__CTOR_OFFSET UNITYSDK_OFFSET(0x163220B0)

inline static constexpr unsigned int Class_3_EF0268BE15B6887E_TypeDefinitionIndex = 55490;

class Class_3_EF0268BE15B6887E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReduceStanceRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReduceStanceRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReduceStanceRatio*))((::PBYTE)hIl2Cpp + CLASS_3_EF0268BE15B6887E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF0268BE15B6887E_ONTASKBEGIN_OFFSET))(this);
	}
};
