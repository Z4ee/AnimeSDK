#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class AnimTriggerRandomPlay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BA4613B05C7BB629_METHOD_3_C87A2530700F1868_OFFSET UNITYSDK_OFFSET(0xAF27760)
#define CLASS_3_BA4613B05C7BB629_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF27380)
#define CLASS_3_BA4613B05C7BB629__CTOR_OFFSET UNITYSDK_OFFSET(0xAF27350)

inline static constexpr unsigned int Class_3_BA4613B05C7BB629_TypeDefinitionIndex = 52193;

class Class_3_BA4613B05C7BB629 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AnimTriggerRandomPlay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AnimTriggerRandomPlay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + CLASS_3_BA4613B05C7BB629__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA4613B05C7BB629_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_C87A2530700F1868(::Class_2_1DBE0E1023AFDBC5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1DBE0E1023AFDBC5*))((::PBYTE)hIl2Cpp + CLASS_3_BA4613B05C7BB629_METHOD_3_C87A2530700F1868_OFFSET))(this, a1);
	}
};
