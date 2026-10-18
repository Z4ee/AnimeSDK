#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_83EA74218EFDDF83;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_27518451A20BB161_273_METHOD_3_48208814608F04F4_OFFSET UNITYSDK_OFFSET(0xF881220)
#define CLASS_3_27518451A20BB161_273_METHOD_3_E81FC461A5E4FAA2_OFFSET UNITYSDK_OFFSET(0xF8810F0)
#define CLASS_3_27518451A20BB161_273_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF880EC0)
#define CLASS_3_27518451A20BB161_273__CTOR_OFFSET UNITYSDK_OFFSET(0xF880E90)

inline static constexpr unsigned int Class_3_27518451A20BB161_273_TypeDefinitionIndex = 55781;

class Class_3_27518451A20BB161_273 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_83EA74218EFDDF83*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_83EA74218EFDDF83* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_83EA74218EFDDF83*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_273__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_273_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_48208814608F04F4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_273_METHOD_3_48208814608F04F4_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* Method_3_E81FC461A5E4FAA2()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_273_METHOD_3_E81FC461A5E4FAA2_OFFSET))(this);
	}
};
