#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_CCA1EE6AEDE8A3A0;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_69_METHOD_3_44371D2438FC9371_OFFSET UNITYSDK_OFFSET(0x1912A630)
#define CLASS_3_27518451A20BB161_69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1912A350)
#define CLASS_3_27518451A20BB161_69__CTOR_OFFSET UNITYSDK_OFFSET(0x1912A320)

inline static constexpr unsigned int Class_3_27518451A20BB161_69_TypeDefinitionIndex = 53152;

class Class_3_27518451A20BB161_69 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CCA1EE6AEDE8A3A0*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CCA1EE6AEDE8A3A0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CCA1EE6AEDE8A3A0*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69_ONTASKBEGIN_OFFSET))(this);
	}

	static ::Struct_2_F8D9CEC872B937AF Method_3_44371D2438FC9371(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::Struct_2_F8D9CEC872B937AF(*)(::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_69_METHOD_3_44371D2438FC9371_OFFSET))(a1);
	}
};
