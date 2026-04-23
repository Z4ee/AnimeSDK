#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_E44054C0F1A43C8E;
class Class_3_D8CD91A9FE5659F7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_12349897AF9328BF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11918360)
#define CLASS_3_12349897AF9328BF__CTOR_OFFSET UNITYSDK_OFFSET(0x11918250)

inline static constexpr unsigned int Class_3_12349897AF9328BF_TypeDefinitionIndex = 49641;

class Class_3_12349897AF9328BF : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_D8CD91A9FE5659F7*>
{
public:
	::Class_1_E44054C0F1A43C8E* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_D8CD91A9FE5659F7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_D8CD91A9FE5659F7*))((::PBYTE)hIl2Cpp + CLASS_3_12349897AF9328BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12349897AF9328BF_ONTASKBEGIN_OFFSET))(this);
	}
};
