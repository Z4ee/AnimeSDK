#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_B2CDFC03C1EA6E7F;
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_146_METHOD_3_8370DF4FB3DA74BB_OFFSET UNITYSDK_OFFSET(0x112BC990)
#define CLASS_3_27518451A20BB161_146_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x112BC780)
#define CLASS_3_27518451A20BB161_146__CTOR_OFFSET UNITYSDK_OFFSET(0x112BC750)

inline static constexpr unsigned int Class_3_27518451A20BB161_146_TypeDefinitionIndex = 51831;

class Class_3_27518451A20BB161_146 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B2CDFC03C1EA6E7F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B2CDFC03C1EA6E7F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B2CDFC03C1EA6E7F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_146__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_146_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8370DF4FB3DA74BB(::RPG::Client::MonoEffectPluginFollow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_146_METHOD_3_8370DF4FB3DA74BB_OFFSET))(this, a1);
	}
};
