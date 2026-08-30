#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Key.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_710;
namespace InControl { class PlayerAction; }
namespace RPG::Client { class IAdventureSettingConflictShowInfo; }
namespace RPG::Client { class InControlActionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1984B140)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GETCONFLICTACTIONSETTINGSHOWINFO_1_OFFSET UNITYSDK_OFFSET(0x1984BAC0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GETCONFLICTACTIONSETTINGSHOWINFO_OFFSET UNITYSDK_OFFSET(0x1984B220)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1984C5F0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET__SPECIALINPUTGROUPID_OFFSET UNITYSDK_OFFSET(0x1984BDB0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GET__SYSTEMINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x1984BB90)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_HASCONFLICTINPUTKEY_OFFSET UNITYSDK_OFFSET(0x1984BB30)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1984B100)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_RESETCONFLICTINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x1984B830)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1984B040)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__DEALCONFLICTSPECIALINPUTKEY_OFFSET UNITYSDK_OFFSET(0x1984B890)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__GETCONFLICTSETTING_OFFSET UNITYSDK_OFFSET(0x1984B3D0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__HASSAMEKEY_1_OFFSET UNITYSDK_OFFSET(0x1984C450)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__HASSAMEKEY_OFFSET UNITYSDK_OFFSET(0x1984BBA0)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__ONENTERSPECIALINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x1984BC60)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__ONEXITSPECIALINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x1984C590)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__REMOVESYSTEMSAMEKEY_OFFSET UNITYSDK_OFFSET(0x1984BE20)
#define RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__REVERTSPECIALINPUTGROUP_OFFSET UNITYSDK_OFFSET(0x1984BCE0)

namespace RPG::Client
{
	inline static constexpr unsigned int InputSettingKeyConflictManager_TypeDefinitionIndex = 61424;

	class InputSettingKeyConflictManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::InControl::PlayerAction*>* _DisableActionList; // 0x10
		::Class_0_16E4307DCC419505_710* _ConflictInfo; // 0x18

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

		::RPG::Client::IAdventureSettingConflictShowInfo* GetConflictActionSettingShowInfo(::System::String* a1)
		{
			return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GETCONFLICTACTIONSETTINGSHOWINFO_OFFSET))(this, a1);
		}

		::System::Void ResetConflictInputGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_RESETCONFLICTINPUTGROUP_OFFSET))(this);
		}

		::RPG::Client::IAdventureSettingConflictShowInfo* GetConflictActionSettingShowInfo_1(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_GETCONFLICTACTIONSETTINGSHOWINFO_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasConflictInputKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER_HASCONFLICTINPUTKEY_OFFSET))(this);
		}

		::RPG::Client::IAdventureSettingConflictShowInfo* _GetConflictSetting(::InControl::Key a1, ::System::String* a2)
		{
			return ((::RPG::Client::IAdventureSettingConflictShowInfo*(*)(::PVOID, ::InControl::Key, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__GETCONFLICTSETTING_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterSpecialInputGroup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__ONENTERSPECIALINPUTGROUP_OFFSET))(this, a1);
		}

		::System::Void _DealConflictSpecialInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__DEALCONFLICTSPECIALINPUTKEY_OFFSET))(this);
		}

		::System::Void _RemoveSystemSameKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__REMOVESYSTEMSAMEKEY_OFFSET))(this, a1);
		}

		::System::Boolean _HasSameKey(::RPG::Client::InControlActionData* a1, ::InControl::Key a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::InControlActionData*, ::InControl::Key))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__HASSAMEKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasSameKey_1(::RPG::Client::InControlActionData* a1, ::RPG::Client::InControlActionData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::InControlActionData*, ::RPG::Client::InControlActionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__HASSAMEKEY_1_OFFSET))(this, a1, a2);
		}

		::System::Void _OnExitSpecialInputGroup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INPUTSETTINGKEYCONFLICTMANAGER__ONEXITSPECIALINPUTGROUP_OFFSET))(this, a1);
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
