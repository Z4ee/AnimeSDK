#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_960C55BD465E215C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_43_METHOD_3_44371D2438FC9371_OFFSET UNITYSDK_OFFSET(0x138394F0)
#define CLASS_3_27518451A20BB161_43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13839210)
#define CLASS_3_27518451A20BB161_43__CTOR_OFFSET UNITYSDK_OFFSET(0x138391E0)

inline static constexpr unsigned int Class_3_27518451A20BB161_43_TypeDefinitionIndex = 49435;

class Class_3_27518451A20BB161_43 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_960C55BD465E215C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_960C55BD465E215C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_960C55BD465E215C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43_ONTASKBEGIN_OFFSET))(this);
	}

	static ::Struct_2_9BF8902D61AE1796 Method_3_44371D2438FC9371(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::Struct_2_9BF8902D61AE1796(*)(::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43_METHOD_3_44371D2438FC9371_OFFSET))(a1);
	}
};
