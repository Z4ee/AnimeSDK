#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_33;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_96_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183EBC70)
#define CLASS_3_27518451A20BB161_96_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x183EBCB0)
#define CLASS_3_27518451A20BB161_96_TICK_OFFSET UNITYSDK_OFFSET(0x183EBD80)
#define CLASS_3_27518451A20BB161_96__CTOR_OFFSET UNITYSDK_OFFSET(0x183EBC40)

inline static constexpr unsigned int Class_3_27518451A20BB161_96_TypeDefinitionIndex = 50907;

class Class_3_27518451A20BB161_96 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_33*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_33* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_33*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_96__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_96_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_96_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_96_TICK_OFFSET))(this, a1);
	}
};
