#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionCheckerHandle; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA655F90)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_INIT_OFFSET UNITYSDK_OFFSET(0xA655530)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA6556E0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA655D60)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_TRYSETHINTSEEN_OFFSET UNITYSDK_OFFSET(0xA656CA0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_VISITHINTTOSEECOMPOSEIDS_OFFSET UNITYSDK_OFFSET(0xA656E40)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__AREHINTSDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0xA6566F0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CLEARLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0xA655DB0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CTOR_OFFSET UNITYSDK_OFFSET(0xA6576E0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__HANDLEMONTHLYPERIODRENEWED_OFFSET UNITYSDK_OFFSET(0xA655A90)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ISMONTHLYPERIODCHANGED_OFFSET UNITYSDK_OFFSET(0xA655790)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__MARKHINTASTOSEEAFTERCHECKED_OFFSET UNITYSDK_OFFSET(0xA656A70)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ONPLAYERDAILYREFRESHED_OFFSET UNITYSDK_OFFSET(0xA656060)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTSIFDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0xA655AF0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTS_OFFSET UNITYSDK_OFFSET(0xA656110)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REMOVELISTENEROFHINT_OFFSET UNITYSDK_OFFSET(0xA656D10)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOCHECK_OFFSET UNITYSDK_OFFSET(0xA657140)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOSEE_OFFSET UNITYSDK_OFFSET(0xA657410)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0xA655BA0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__TRYMARKHINTASSEEN_OFFSET UNITYSDK_OFFSET(0xA656BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeLimitHintPart_TypeDefinitionIndex = 60529;

	class ItemComposeLimitHintPart : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ConditionCheckerHandle*>* _ComposeConditionListeners; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _MonthlyHintComposeIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnPlayerDailyRefreshed(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ONPLAYERDAILYREFRESHED_OFFSET))(this, _);
		}

		::System::Boolean _IsMonthlyPeriodChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ISMONTHLYPERIODCHANGED_OFFSET))(this);
		}

		::System::Void _HandleMonthlyPeriodRenewed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__HANDLEMONTHLYPERIODRENEWED_OFFSET))(this);
		}

		::System::Void _RebuildHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTS_OFFSET))(this);
		}

		::System::Void _RebuildHintsIfDataCorrupted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTSIFDATACORRUPTED_OFFSET))(this);
		}

		::System::Boolean _AreHintsDataCorrupted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__AREHINTSDATACORRUPTED_OFFSET))(this);
		}

		::System::Void _MarkHintAsToSeeAfterChecked(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__MARKHINTASTOSEEAFTERCHECKED_OFFSET))(this, composeID);
		}

		::System::Boolean _TryMarkHintAsSeen(::System::UInt32 composeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__TRYMARKHINTASSEEN_OFFSET))(this, composeID);
		}

		::System::Void TrySetHintSeen(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_TRYSETHINTSEEN_OFFSET))(this, composeID);
		}

		::System::Void VisitHintToSeeComposeIDs(::System::Func_2<::System::UInt32, ::System::Boolean>* visit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_VISITHINTTOSEECOMPOSEIDS_OFFSET))(this, visit);
		}

		::System::Void _SetupListenersOfHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENERSOFHINTS_OFFSET))(this);
		}

		::System::Void _SetupListenerOfHintToCheck(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOCHECK_OFFSET))(this, composeID);
		}

		::System::Void _SetupListenerOfHintToSee(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOSEE_OFFSET))(this, composeID);
		}

		::System::Void _RemoveListenerOfHint(::System::UInt32 composeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REMOVELISTENEROFHINT_OFFSET))(this, composeID);
		}

		::System::Void _ClearListenersOfHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CLEARLISTENERSOFHINTS_OFFSET))(this);
		}
	};
}
