#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_527;
namespace InControl { class PlayerAction; }
namespace RPG::Client { class IAdventureSettingConflictShowInfo; }
namespace RPG::Client { class InControlActionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x994B8A0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GETCONFLICTACTIONSETTINGSHOWINFO_1_OFFSET UNITYSDK_OFFSET(0x994C0A0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GETCONFLICTACTIONSETTINGSHOWINFO_OFFSET UNITYSDK_OFFSET(0x994B940)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x994CA70)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET__SPECIALINPUTGROUPID_OFFSET UNITYSDK_OFFSET(0x994C350)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET__SYSTEMINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x994C170)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_HASCONFLICTINPUTKEY_OFFSET UNITYSDK_OFFSET(0x994C110)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x994B860)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_RESETCONFLICTINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x994BEB0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x994B7C0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__DEALCONFLICTSPECIALINPUTKEY_OFFSET UNITYSDK_OFFSET(0x994BF10)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__GETCONFLICTSETTING_OFFSET UNITYSDK_OFFSET(0x994BB00)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__HASSAMEKEY_1_OFFSET UNITYSDK_OFFSET(0x994C8D0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__HASSAMEKEY_OFFSET UNITYSDK_OFFSET(0x994C180)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__ONENTERSPECIALINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x994C240)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__ONEXITSPECIALINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x994CA10)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__REMOVESYSTEMSAMEKEY_OFFSET UNITYSDK_OFFSET(0x994C3A0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__REVERTSPECIALINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x994C2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int InputSettingKeyConflictManager_TypeDefinitionIndex = 49734;

	class InputSettingKeyConflictManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::InControl::PlayerAction*>* _DisableActionList; // 0x10
		::Class_0_16E4307DCC419505_527* _ConflictInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::IAdventureSettingConflictShowInfo* GetConflictActionSettingShowInfo(::System::String* actionName)
		{
			return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GETCONFLICTACTIONSETTINGSHOWINFO_OFFSET))(this, actionName);
		}

		::System::Void ResetConflictInputGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_RESETCONFLICTINPUTGROUP_OFFSET))(this);
		}

		::RPG::Client::IAdventureSettingConflictShowInfo* GetConflictActionSettingShowInfo_1(::System::String* actionName, ::System::UInt32 key)
		{
			return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GETCONFLICTACTIONSETTINGSHOWINFO_1_OFFSET))(this, actionName, key);
		}

		::System::Boolean HasConflictInputKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_HASCONFLICTINPUTKEY_OFFSET))(this);
		}

		::RPG::Client::IAdventureSettingConflictShowInfo* _GetConflictSetting(::InControl::Key bindKeyboard, ::System::String* actionName)
		{
			return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::InControl::Key, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__GETCONFLICTSETTING_OFFSET))(this, bindKeyboard, actionName);
		}

		::System::Void _OnEnterSpecialInputGroup(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__ONENTERSPECIALINPUTGROUP_OFFSET))(this, args);
		}

		::System::Void _DealConflictSpecialInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__DEALCONFLICTSPECIALINPUTKEY_OFFSET))(this);
		}

		::System::Void _RemoveSystemSameKey(::System::String* actionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__REMOVESYSTEMSAMEKEY_OFFSET))(this, actionName);
		}

		::System::Boolean _HasSameKey(::RPG::Client::InControlActionData* action, ::InControl::Key bindKeyboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::InControlActionData*, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__HASSAMEKEY_OFFSET))(this, action, bindKeyboard);
		}

		::System::Boolean _HasSameKey_1(::RPG::Client::InControlActionData* actionA, ::RPG::Client::InControlActionData* actionB)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::InControlActionData*, ::RPG::Client::InControlActionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__HASSAMEKEY_1_OFFSET))(this, actionA, actionB);
		}

		::System::Void _OnExitSpecialInputGroup(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__ONEXITSPECIALINPUTGROUP_OFFSET))(this, args);
		}

		::System::Void _RevertSpecialInputGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__REVERTSPECIALINPUTGROUP_OFFSET))(this);
		}

		::System::UInt32 get__SystemInputGroup()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET__SYSTEMINPUTGROUP_OFFSET))(this);
		}

		::System::UInt32 get__SpecialInputGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET__SPECIALINPUTGROUPID_OFFSET))(this);
		}

		static ::RPG::Client::InputSettingKeyConflictManager* get_Instance()
		{
			return ((::RPG::Client::InputSettingKeyConflictManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
