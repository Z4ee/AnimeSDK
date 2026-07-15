#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_TriggerInstantAbility; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_ACF41A37E5A59A62_METHOD_3_9F8CFC116188AAF4_OFFSET UNITYSDK_OFFSET(0x16089BE0)
#define CLASS_3_ACF41A37E5A59A62_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16089B70)
#define CLASS_3_ACF41A37E5A59A62_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16089DA0)
#define CLASS_3_ACF41A37E5A59A62__CTOR_OFFSET UNITYSDK_OFFSET(0x16089B40)

inline static constexpr unsigned int Class_3_ACF41A37E5A59A62_TypeDefinitionIndex = 49878;

class Class_3_ACF41A37E5A59A62 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_TriggerInstantAbility*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_TriggerInstantAbility* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + CLASS_3_ACF41A37E5A59A62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACF41A37E5A59A62_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ACF41A37E5A59A62_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_9F8CFC116188AAF4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_ACF41A37E5A59A62_METHOD_3_9F8CFC116188AAF4_OFFSET))(this, a1);
	}
};
