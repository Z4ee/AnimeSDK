#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_83EA74218EFDDF83;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_240_METHOD_3_48208814608F04F4_OFFSET UNITYSDK_OFFSET(0x1698C580)
#define CLASS_3_27518451A20BB161_240_METHOD_3_E81FC461A5E4FAA2_OFFSET UNITYSDK_OFFSET(0x1698C450)
#define CLASS_3_27518451A20BB161_240_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1698C220)
#define CLASS_3_27518451A20BB161_240__CTOR_OFFSET UNITYSDK_OFFSET(0x1698C1F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_240_TypeDefinitionIndex = 53255;

class Class_3_27518451A20BB161_240 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_83EA74218EFDDF83*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_83EA74218EFDDF83* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_83EA74218EFDDF83*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_240__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_240_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_48208814608F04F4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_240_METHOD_3_48208814608F04F4_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* Method_3_E81FC461A5E4FAA2()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_240_METHOD_3_E81FC461A5E4FAA2_OFFSET))(this);
	}
};
