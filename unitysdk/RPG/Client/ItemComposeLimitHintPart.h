#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionCheckerHandle; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C557C0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_INIT_OFFSET UNITYSDK_OFFSET(0x16C54DA0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x16C54F70)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x16C555F0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_TRYSETHINTSEEN_OFFSET UNITYSDK_OFFSET(0x16C56650)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_VISITHINTTOSEECOMPOSEIDS_OFFSET UNITYSDK_OFFSET(0x16C567B0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__AREHINTSDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0x16C56020)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CLEARLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0x16C55640)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CTOR_OFFSET UNITYSDK_OFFSET(0x16C57120)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__HANDLEMONTHLYPERIODRENEWED_OFFSET UNITYSDK_OFFSET(0x16C55320)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ISMONTHLYPERIODCHANGED_OFFSET UNITYSDK_OFFSET(0x16C55020)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__MARKHINTASTOSEEAFTERCHECKED_OFFSET UNITYSDK_OFFSET(0x16C56420)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ONPLAYERDAILYREFRESHED_OFFSET UNITYSDK_OFFSET(0x16C558C0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTSIFDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0x16C55380)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTS_OFFSET UNITYSDK_OFFSET(0x16C55970)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REMOVELISTENEROFHINT_OFFSET UNITYSDK_OFFSET(0x16C566C0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOCHECK_OFFSET UNITYSDK_OFFSET(0x16C56C00)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOSEE_OFFSET UNITYSDK_OFFSET(0x16C56E90)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0x16C55430)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__TRYMARKHINTASSEEN_OFFSET UNITYSDK_OFFSET(0x16C56560)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeLimitHintPart_TypeDefinitionIndex = 62825;

	class ItemComposeLimitHintPart : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _MonthlyHintComposeIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ConditionCheckerHandle*>* _ComposeConditionListeners; // 0x18

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
