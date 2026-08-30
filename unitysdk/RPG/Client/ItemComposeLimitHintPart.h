#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionCheckerHandle; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD427190)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_INIT_OFFSET UNITYSDK_OFFSET(0xD426770)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xD426940)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD426FC0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_TRYSETHINTSEEN_OFFSET UNITYSDK_OFFSET(0xD428010)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_VISITHINTTOSEECOMPOSEIDS_OFFSET UNITYSDK_OFFSET(0xD428170)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__AREHINTSDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0xD4279E0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CLEARLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0xD427010)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CTOR_OFFSET UNITYSDK_OFFSET(0xD428AE0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__HANDLEMONTHLYPERIODRENEWED_OFFSET UNITYSDK_OFFSET(0xD426CF0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ISMONTHLYPERIODCHANGED_OFFSET UNITYSDK_OFFSET(0xD4269F0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__MARKHINTASTOSEEAFTERCHECKED_OFFSET UNITYSDK_OFFSET(0xD427DE0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ONPLAYERDAILYREFRESHED_OFFSET UNITYSDK_OFFSET(0xD427290)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTSIFDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0xD426D50)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTS_OFFSET UNITYSDK_OFFSET(0xD427340)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REMOVELISTENEROFHINT_OFFSET UNITYSDK_OFFSET(0xD428080)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOCHECK_OFFSET UNITYSDK_OFFSET(0xD4285C0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOSEE_OFFSET UNITYSDK_OFFSET(0xD428850)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0xD426E00)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__TRYMARKHINTASSEEN_OFFSET UNITYSDK_OFFSET(0xD427F20)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeLimitHintPart_TypeDefinitionIndex = 65810;

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

		::System::Void _OnPlayerDailyRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ONPLAYERDAILYREFRESHED_OFFSET))(this, a1);
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

		::System::Void _MarkHintAsToSeeAfterChecked(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__MARKHINTASTOSEEAFTERCHECKED_OFFSET))(this, a1);
		}

		::System::Boolean _TryMarkHintAsSeen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__TRYMARKHINTASSEEN_OFFSET))(this, a1);
		}

		::System::Void TrySetHintSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_TRYSETHINTSEEN_OFFSET))(this, a1);
		}

		::System::Void VisitHintToSeeComposeIDs(::System::Func_2<::System::UInt32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_VISITHINTTOSEECOMPOSEIDS_OFFSET))(this, a1);
		}

		::System::Void _SetupListenersOfHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENERSOFHINTS_OFFSET))(this);
		}

		::System::Void _SetupListenerOfHintToCheck(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOCHECK_OFFSET))(this, a1);
		}

		::System::Void _SetupListenerOfHintToSee(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOSEE_OFFSET))(this, a1);
		}

		::System::Void _RemoveListenerOfHint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REMOVELISTENEROFHINT_OFFSET))(this, a1);
		}

		::System::Void _ClearListenersOfHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CLEARLISTENERSOFHINTS_OFFSET))(this);
		}
	};
}
