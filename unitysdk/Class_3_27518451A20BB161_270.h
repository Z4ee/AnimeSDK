#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_39;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_270_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0F37F0)
#define CLASS_3_27518451A20BB161_270__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F37C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_270_TypeDefinitionIndex = 55734;

class Class_3_27518451A20BB161_270 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_39*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_39* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_39*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_270__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_270_ONTASKBEGIN_OFFSET))(this);
	}
};
