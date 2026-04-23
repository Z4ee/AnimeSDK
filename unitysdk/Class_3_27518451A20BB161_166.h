#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B1F5CC0F6F52FABE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_166_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124CA570)
#define CLASS_3_27518451A20BB161_166__CTOR_OFFSET UNITYSDK_OFFSET(0x124CA540)

inline static constexpr unsigned int Class_3_27518451A20BB161_166_TypeDefinitionIndex = 51942;

class Class_3_27518451A20BB161_166 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B1F5CC0F6F52FABE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B1F5CC0F6F52FABE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B1F5CC0F6F52FABE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_166__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_166_ONTASKBEGIN_OFFSET))(this);
	}
};
