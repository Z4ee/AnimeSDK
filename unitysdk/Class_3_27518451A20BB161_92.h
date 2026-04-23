#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1FAC468235C09814;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_92_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90BE320)
#define CLASS_3_27518451A20BB161_92__CTOR_OFFSET UNITYSDK_OFFSET(0x90BE2F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_92_TypeDefinitionIndex = 49693;

class Class_3_27518451A20BB161_92 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1FAC468235C09814*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1FAC468235C09814* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1FAC468235C09814*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_92__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_92_ONTASKBEGIN_OFFSET))(this);
	}
};
