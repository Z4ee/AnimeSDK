#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CAEDBE7AE01F5331;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_31_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1142A980)
#define CLASS_3_27518451A20BB161_31__CTOR_OFFSET UNITYSDK_OFFSET(0x1142A950)

inline static constexpr unsigned int Class_3_27518451A20BB161_31_TypeDefinitionIndex = 42777;

class Class_3_27518451A20BB161_31 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CAEDBE7AE01F5331*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CAEDBE7AE01F5331* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CAEDBE7AE01F5331*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_31_ONTASKBEGIN_OFFSET))(this);
	}
};
