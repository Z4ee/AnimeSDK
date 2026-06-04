#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaWorldTagConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1403F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xB140430)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB140420)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaPoolConfig___c_TypeDefinitionIndex = 70123;

	class IdleLiveGachaPoolConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaPoolConfig___c_TypeDefinitionIndex)->GetStaticField(0x52DC0);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveGachaPoolConfig___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGachaPoolConfig___c_TypeDefinitionIndex)->GetStaticField(0x52DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig* _Create_b__0_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C__CREATE_B__0_0_OFFSET))(this, a1);
		}
	};
}
