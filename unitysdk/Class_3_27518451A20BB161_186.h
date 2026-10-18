#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_186_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF6E4F0)
#define CLASS_3_27518451A20BB161_186__CTOR_OFFSET UNITYSDK_OFFSET(0xCF6E4C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_186_TypeDefinitionIndex = 55040;

class Class_3_27518451A20BB161_186 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_8*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_8*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_186__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_186_ONTASKBEGIN_OFFSET))(this);
	}
};
