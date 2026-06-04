#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0E3850)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E3890)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xB0E38A0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenSettleAgendaGameState___c_TypeDefinitionIndex = 70394;

	class ActivityHipplenSettleAgendaGameState___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenSettleAgendaGameState___c_TypeDefinitionIndex)->GetStaticField(0x4F520);
		}
		static ::RPG::Client::ActivityHipplen::ActivityHipplenSettleAgendaGameState___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplen::ActivityHipplenSettleAgendaGameState___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenSettleAgendaGameState___c_TypeDefinitionIndex)->GetStaticField(0x4F528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* __ctor_b__2_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLEAGENDAGAMESTATE___C___CTOR_B__2_0_OFFSET))(this, a1);
		}
	};
}
