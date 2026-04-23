#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"

class Class_3_3524A0FF18D26A40;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_41_METHOD_3_F16B1746BDFFC848_OFFSET UNITYSDK_OFFSET(0x1250B8C0)
#define CLASS_3_27518451A20BB161_41_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1250B5E0)
#define CLASS_3_27518451A20BB161_41__CTOR_OFFSET UNITYSDK_OFFSET(0x1250B5B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_41_TypeDefinitionIndex = 48769;

class Class_3_27518451A20BB161_41 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3524A0FF18D26A40*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3524A0FF18D26A40* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3524A0FF18D26A40*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_41_ONTASKBEGIN_OFFSET))(this);
	}

	static ::Struct_2_9BF8902D61AE1796 Method_3_F16B1746BDFFC848(::Class_3_E21F6DE9B7FA4D05* a1)
	{
		return ((::Struct_2_9BF8902D61AE1796(*)(::Class_3_E21F6DE9B7FA4D05*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_41_METHOD_3_F16B1746BDFFC848_OFFSET))(a1);
	}
};
