#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_208CC9941471731A_566;
namespace System { class String; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GETFINALRESULT_OFFSET UNITYSDK_OFFSET(0x12CA2050)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x12CA2030)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x12CA2010)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x12CA1FF0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x12CA20B0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x12CA1FA0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x12CA1F60)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x12CA1E80)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONRESUME_OFFSET UNITYSDK_OFFSET(0x12CA1EC0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONSTART_OFFSET UNITYSDK_OFFSET(0x12CA1E40)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12CA1F00)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x12CA2040)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x12CA2020)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_SET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x12CA2000)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA1E10)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM__LOG2_OFFSET UNITYSDK_OFFSET(0x12CA2120)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM__LOG_OFFSET UNITYSDK_OFFSET(0x12CA20D0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeItem_TypeDefinitionIndex = 67055;

	class ChallengeSubTypeItem : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_566* template_; // 0x10
		::System::Boolean _IsFinished_k__BackingField; // 0x18
		::System::Boolean revertChanllengeResult; // 0x19
		::System::Boolean _IsStarted_k__BackingField; // 0x1A
		::System::Boolean _IsPaused_k__BackingField; // 0x1B
		::System::UInt32 ownerEntityID; // 0x1C

		::System::Void _ctor(::Class_2_208CC9941471731A_566* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_566*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONSTART_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONRESUME_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void OnFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONFINISHED_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Boolean get_IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GET_ISSTARTED_OFFSET))(this);
		}

		::System::Void set_IsStarted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_SET_ISSTARTED_OFFSET))(this, value);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_IsPaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_SET_ISPAUSED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::Boolean GetFinalResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GETFINALRESULT_OFFSET))(this);
		}

		::System::Int32 get_SubType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM_GET_SUBTYPE_OFFSET))(this);
		}

		::System::Void _Log(::System::String* log)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM__LOG_OFFSET))(this, log);
		}

		::System::Void _Log2(::System::String* log)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEITEM__LOG2_OFFSET))(this, log);
		}
	};
}
