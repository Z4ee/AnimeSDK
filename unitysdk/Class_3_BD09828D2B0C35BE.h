#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerMiniEmoEffect; }

#define CLASS_3_BD09828D2B0C35BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C09B50)
#define CLASS_3_BD09828D2B0C35BE_METHOD_3_22B9001BA8838BF5_OFFSET UNITYSDK_OFFSET(0x11C0A120)
#define CLASS_3_BD09828D2B0C35BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11C09B90)
#define CLASS_3_BD09828D2B0C35BE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C09B20)
#define CLASS_3_BD09828D2B0C35BE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C0A2C0)

inline static constexpr unsigned int Class_3_BD09828D2B0C35BE_TypeDefinitionIndex = 51393;

class Class_3_BD09828D2B0C35BE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerMiniEmoEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerMiniEmoEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerMiniEmoEffect*))((::PBYTE)hIl2Cpp + CLASS_3_BD09828D2B0C35BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD09828D2B0C35BE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD09828D2B0C35BE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_22B9001BA8838BF5(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_BD09828D2B0C35BE_METHOD_3_22B9001BA8838BF5_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD09828D2B0C35BE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
