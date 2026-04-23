#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1099;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BD98C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD9900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__UPDATE_B__3_0_OFFSET UNITYSDK_OFFSET(0x9BD9910)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTickManager___c_TypeDefinitionIndex = 69506;

	class IdleLiveTickManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityIdleLive::IdleLiveTickManager___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveTickManager___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTickManager___c_TypeDefinitionIndex)->GetStaticField(0x31560);
		}
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_1099*>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_1099*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTickManager___c_TypeDefinitionIndex)->GetStaticField(0x31568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__3_0(::Class_0_16E4307DCC419505_1099* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1099*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__UPDATE_B__3_0_OFFSET))(this, x);
		}
	};
}
