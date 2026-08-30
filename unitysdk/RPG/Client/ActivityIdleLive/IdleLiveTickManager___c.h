#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1255;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5F5B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F5B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__UPDATE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC5F5B70)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTickManager___c_TypeDefinitionIndex = 75148;

	class IdleLiveTickManager___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_0_16E4307DCC419505_1255*>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::Class_0_16E4307DCC419505_1255*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTickManager___c_TypeDefinitionIndex)->GetStaticField(0x601E0);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveTickManager___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveTickManager___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveTickManager___c_TypeDefinitionIndex)->GetStaticField(0x601E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__3_0(::Class_0_16E4307DCC419505_1255* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1255*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETICKMANAGER___C__UPDATE_B__3_0_OFFSET))(this, a1);
		}
	};
}
