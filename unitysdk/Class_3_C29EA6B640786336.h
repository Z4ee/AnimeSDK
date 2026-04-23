#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetEmoGraphAlwaysEvaluate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C29EA6B640786336_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12125B50)
#define CLASS_3_C29EA6B640786336__CTOR_OFFSET UNITYSDK_OFFSET(0x12125B20)

inline static constexpr unsigned int Class_3_C29EA6B640786336_TypeDefinitionIndex = 51546;

class Class_3_C29EA6B640786336 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetEmoGraphAlwaysEvaluate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEmoGraphAlwaysEvaluate*))((::PBYTE)hIl2Cpp + CLASS_3_C29EA6B640786336__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C29EA6B640786336_ONTASKBEGIN_OFFSET))(this);
	}
};
