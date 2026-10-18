#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6400FC1012161FE9;
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_234_METHOD_3_8370DF4FB3DA74BB_OFFSET UNITYSDK_OFFSET(0x1330EA40)
#define CLASS_3_27518451A20BB161_234_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1330E800)
#define CLASS_3_27518451A20BB161_234__CTOR_OFFSET UNITYSDK_OFFSET(0x1330E7D0)

inline static constexpr unsigned int Class_3_27518451A20BB161_234_TypeDefinitionIndex = 55492;

class Class_3_27518451A20BB161_234 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6400FC1012161FE9*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6400FC1012161FE9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6400FC1012161FE9*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_234__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_234_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8370DF4FB3DA74BB(::RPG::Client::MonoEffectPluginFollow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_234_METHOD_3_8370DF4FB3DA74BB_OFFSET))(this, a1);
	}
};
