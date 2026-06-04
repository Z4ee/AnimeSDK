#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B547B56320B70AD4;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB124720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB124760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C___CLEARINVALIDSPECIALCHATS_B__9_0_OFFSET UNITYSDK_OFFSET(0xB124770)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChatService___c_TypeDefinitionIndex = 70152;

	class IdleLiveChatService___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveChatService___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveChatService___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveChatService___c_TypeDefinitionIndex)->GetStaticField(0x515E0);
		}
		static ::System::Predicate_1<::Class_1_B547B56320B70AD4*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::Class_1_B547B56320B70AD4*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveChatService___c_TypeDefinitionIndex)->GetStaticField(0x515E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ClearInvalidSpecialChats_b__9_0(::Class_1_B547B56320B70AD4* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_B547B56320B70AD4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C___CLEARINVALIDSPECIALCHATS_B__9_0_OFFSET))(this, a1);
		}
	};
}
