#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F_10;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_269_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16459BA0)
#define CLASS_3_27518451A20BB161_269__CTOR_OFFSET UNITYSDK_OFFSET(0x16459B70)

inline static constexpr unsigned int Class_3_27518451A20BB161_269_TypeDefinitionIndex = 56001;

class Class_3_27518451A20BB161_269 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F_10*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_10* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_10*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_269__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_269_ONTASKBEGIN_OFFSET))(this);
	}
};
