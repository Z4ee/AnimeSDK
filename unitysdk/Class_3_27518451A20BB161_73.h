#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7AA0663B46C8586F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_73_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1844C770)
#define CLASS_3_27518451A20BB161_73__CTOR_OFFSET UNITYSDK_OFFSET(0x1844C740)

inline static constexpr unsigned int Class_3_27518451A20BB161_73_TypeDefinitionIndex = 50514;

class Class_3_27518451A20BB161_73 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7AA0663B46C8586F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_73_ONTASKBEGIN_OFFSET))(this);
	}
};
