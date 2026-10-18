#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9EEBD89C9FDDE08B_METHOD_1_0C8187FEE0C22529_OFFSET UNITYSDK_OFFSET(0x157208B0)
#define CLASS_1_9EEBD89C9FDDE08B_METHOD_1_5EFF038061D3B907_OFFSET UNITYSDK_OFFSET(0x15720B10)
#define CLASS_1_9EEBD89C9FDDE08B_METHOD_1_63117BA0AAED6DBB_OFFSET UNITYSDK_OFFSET(0x157207F0)
#define CLASS_1_9EEBD89C9FDDE08B_METHOD_1_9E83203C6B0EFE30_OFFSET UNITYSDK_OFFSET(0x157206F0)
#define CLASS_1_9EEBD89C9FDDE08B_METHOD_1_9F94900DA47DB1F7_OFFSET UNITYSDK_OFFSET(0x157209D0)
#define CLASS_1_9EEBD89C9FDDE08B_METHOD_1_A8959E1258286D13_OFFSET UNITYSDK_OFFSET(0x15720D30)
#define CLASS_1_9EEBD89C9FDDE08B_METHOD_1_D1A77FA963C2F779_OFFSET UNITYSDK_OFFSET(0x15720C10)
#define CLASS_1_9EEBD89C9FDDE08B_METHOD_1_D4EFAD8F75A7222B_OFFSET UNITYSDK_OFFSET(0x15720760)
#define CLASS_1_9EEBD89C9FDDE08B__CTOR_OFFSET UNITYSDK_OFFSET(0x15721010)

inline static constexpr unsigned int Class_1_9EEBD89C9FDDE08B_TypeDefinitionIndex = 80170;

class Class_1_9EEBD89C9FDDE08B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B__CTOR_OFFSET))(this);
	}

	::RPG::Client::MonoEffectManager* Method_1_9E83203C6B0EFE30()
	{
		return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B_METHOD_1_9E83203C6B0EFE30_OFFSET))(this);
	}

	::RPG::Client::TriggerEffectParamsRef Method_1_D4EFAD8F75A7222B(::System::String* a1)
	{
		return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B_METHOD_1_D4EFAD8F75A7222B_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffect* Method_1_63117BA0AAED6DBB(::RPG::Client::TriggerEffectParamsRef a1)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B_METHOD_1_63117BA0AAED6DBB_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffect* Method_1_0C8187FEE0C22529(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B_METHOD_1_0C8187FEE0C22529_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9F94900DA47DB1F7(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B_METHOD_1_9F94900DA47DB1F7_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::MonoEffect* Method_1_5EFF038061D3B907(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B_METHOD_1_5EFF038061D3B907_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1A77FA963C2F779(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B_METHOD_1_D1A77FA963C2F779_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_A8959E1258286D13(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9EEBD89C9FDDE08B_METHOD_1_A8959E1258286D13_OFFSET))(this, a1);
	}
};
