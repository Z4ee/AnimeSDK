#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_B411806AE48F8DCB;
class Class_3_C3B0EE7FF45CDDA3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_114_METHOD_3_452CF6018293CBF9_OFFSET UNITYSDK_OFFSET(0xA3DB4E0)
#define CLASS_3_27518451A20BB161_114_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3DB240)
#define CLASS_3_27518451A20BB161_114__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DB210)

inline static constexpr unsigned int Class_3_27518451A20BB161_114_TypeDefinitionIndex = 51333;

class Class_3_27518451A20BB161_114 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C3B0EE7FF45CDDA3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C3B0EE7FF45CDDA3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C3B0EE7FF45CDDA3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_114__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_114_ONTASKBEGIN_OFFSET))(this);
	}

	::Class_1_B411806AE48F8DCB* Method_3_452CF6018293CBF9()
	{
		return ((::Class_1_B411806AE48F8DCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_114_METHOD_3_452CF6018293CBF9_OFFSET))(this);
	}
};
