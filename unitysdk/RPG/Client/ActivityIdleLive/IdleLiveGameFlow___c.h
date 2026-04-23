#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B62A30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B62A70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C___SHOWDIALOGSONBATTLEBEGIN_B__123_0_OFFSET UNITYSDK_OFFSET(0x9B62A80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGameFlow___c_TypeDefinitionIndex = 69356;

	class IdleLiveGameFlow___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__123_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x2F2F0);
		}
		static ::RPG::Client::ActivityIdleLive::IdleLiveGameFlow___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveGameFlow___c**)Il2CppClass::FromTypeDefinitionIndex(IdleLiveGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x2F2F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C__CTOR_OFFSET))(this);
		}

		::System::Void __ShowDialogsOnBattleBegin_b__123_0(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGAMEFLOW___C___SHOWDIALOGSONBATTLEBEGIN_B__123_0_OFFSET))(this, ex);
		}
	};
}
