#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionCheckerHandle; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD5CAB0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_INIT_OFFSET UNITYSDK_OFFSET(0xBD5C090)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xBD5C260)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBD5C8E0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_TRYSETHINTSEEN_OFFSET UNITYSDK_OFFSET(0xBD5D860)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART_VISITHINTTOSEECOMPOSEIDS_OFFSET UNITYSDK_OFFSET(0xBD5D9C0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__AREHINTSDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0xBD5D290)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CLEARLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0xBD5C930)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5E1E0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__HANDLEMONTHLYPERIODRENEWED_OFFSET UNITYSDK_OFFSET(0xBD5C610)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ISMONTHLYPERIODCHANGED_OFFSET UNITYSDK_OFFSET(0xBD5C310)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__MARKHINTASTOSEEAFTERCHECKED_OFFSET UNITYSDK_OFFSET(0xBD5D630)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__ONPLAYERDAILYREFRESHED_OFFSET UNITYSDK_OFFSET(0xBD5CBB0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTSIFDATACORRUPTED_OFFSET UNITYSDK_OFFSET(0xBD5C670)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REBUILDHINTS_OFFSET UNITYSDK_OFFSET(0xBD5CC60)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__REMOVELISTENEROFHINT_OFFSET UNITYSDK_OFFSET(0xBD5D8D0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOCHECK_OFFSET UNITYSDK_OFFSET(0xBD5DCC0)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENEROFHINTTOSEE_OFFSET UNITYSDK_OFFSET(0xBD5DF50)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__SETUPLISTENERSOFHINTS_OFFSET UNITYSDK_OFFSET(0xBD5C720)
#define RPG_CLIENT_ITEMCOMPOSELIMITHINTPART__TRYMARKHINTASSEEN_OFFSET UNITYSDK_OFFSET(0xBD5D770)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeLimitHintPart_TypeDefinitionIndex = 61463;

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
