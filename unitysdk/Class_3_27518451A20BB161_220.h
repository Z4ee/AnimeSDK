#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3AD4EA164A2F9230;
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_220_METHOD_3_8370DF4FB3DA74BB_OFFSET UNITYSDK_OFFSET(0x12E84680)
#define CLASS_3_27518451A20BB161_220_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12E84440)
#define CLASS_3_27518451A20BB161_220__CTOR_OFFSET UNITYSDK_OFFSET(0x12E84410)

inline static constexpr unsigned int Class_3_27518451A20BB161_220_TypeDefinitionIndex = 55684;

class Class_3_27518451A20BB161_220 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3AD4EA164A2F9230*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3AD4EA164A2F9230* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3AD4EA164A2F9230*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_220__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_220_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8370DF4FB3DA74BB(::RPG::Client::MonoEffectPluginFollow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_220_METHOD_3_8370DF4FB3DA74BB_OFFSET))(this, a1);
	}
};
