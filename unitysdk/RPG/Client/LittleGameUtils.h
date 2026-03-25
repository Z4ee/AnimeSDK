#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_151B93D9C4BBDCA4;
class Class_3_163A9557988CEBBE;
namespace RPG::Client { class LittleGameManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameConstConfig; }
namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGamePresetConfigs; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x9A3B3D0)
#define RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_2_OFFSET UNITYSDK_OFFSET(0x9A3B450)
#define RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_3_OFFSET UNITYSDK_OFFSET(0x9A3B580)
#define RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x9A3B2A0)
#define RPG_CLIENT_LITTLEGAMEUTILS_DESTROYGAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x9A3A930)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIGPATH_1_OFFSET UNITYSDK_OFFSET(0x9A3AF00)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x9A3ACD0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIG_OFFSET UNITYSDK_OFFSET(0x9A3AAE0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESET_OFFSET UNITYSDK_OFFSET(0x9A3ADC0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x9A39C40)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A39BD0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMELEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x9A39DA0)
#define RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEMANAGER_OFFSET UNITYSDK_OFFSET(0x9A39D00)
#define RPG_CLIENT_LITTLEGAMEUTILS_HASCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9A3A7E0)
#define RPG_CLIENT_LITTLEGAMEUTILS_INITDICECOMBATGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9A3A510)
#define RPG_CLIENT_LITTLEGAMEUTILS_INITGAMEWITHLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x9A39F10)
#define RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x9A3B730)
#define RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_2_OFFSET UNITYSDK_OFFSET(0x9A3B7B0)
#define RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_3_OFFSET UNITYSDK_OFFSET(0x9A3B8E0)
#define RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x9A3B600)
#define RPG_CLIENT_LITTLEGAMEUTILS_STOPCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9A3A680)
#define RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x9A3B080)
#define RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_2_OFFSET UNITYSDK_OFFSET(0x9A3B0F0)
#define RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_3_OFFSET UNITYSDK_OFFSET(0x9A3B220)
#define RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x9A3AF60)
#define RPG_CLIENT_LITTLEGAMEUTILS_UNLOADGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x9A3AAA0)
#define RPG_CLIENT_LITTLEGAMEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A3B960)

namespace RPG::Client
{
	inline static constexpr unsigned int LittleGameUtils_TypeDefinitionIndex = 48914;

	class LittleGameUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameType, ::RPG::GameCore::LittleGamePresetConfigs*>** StaticGet__PresetConfigs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameType, ::RPG::GameCore::LittleGamePresetConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(LittleGameUtils_TypeDefinitionIndex)->GetStaticField(0x26780);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameType, ::RPG::GameCore::LittleGameConstConfig*>** StaticGet__GameConfigs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameType, ::RPG::GameCore::LittleGameConstConfig*>**)Il2CppClass::FromTypeDefinitionIndex(LittleGameUtils_TypeDefinitionIndex)->GetStaticField(0x26788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS__CCTOR_OFFSET))();
		}

		static ::Class_1_151B93D9C4BBDCA4* GetLittleGameInstance(::RPG::GameCore::GameEntity* littleGameInstanceEntity)
		{
			return ((::Class_1_151B93D9C4BBDCA4*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEINSTANCE_OFFSET))(littleGameInstanceEntity);
		}

		static ::System::Boolean GetLittleGameInstance_1(::RPG::GameCore::TaskContext* taskContext, ::Class_1_151B93D9C4BBDCA4*& outInstance)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::Class_1_151B93D9C4BBDCA4*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEINSTANCE_1_OFFSET))(taskContext, outInstance);
		}

		static ::RPG::Client::LittleGameManager* GetLittleGameManager()
		{
			return ((::RPG::Client::LittleGameManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMEMANAGER_OFFSET))();
		}

		static ::System::Boolean GetLittleGameLevelConfig(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::GameCore::LittleGameLevelConfig*& levelConfig)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETLITTLEGAMELEVELCONFIG_OFFSET))(groupID, instanceID, levelConfig);
		}

		static ::System::Boolean InitGameWithLevelConfig(::RPG::GameCore::LittleGameLevelConfig* levelConfig, ::RPG::GameCore::GameEntity* ownerEntity, ::Class_1_151B93D9C4BBDCA4*& outInstance, ::System::String* levelConfigPath)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::GameEntity*, ::Class_1_151B93D9C4BBDCA4*&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_INITGAMEWITHLEVELCONFIG_OFFSET))(levelConfig, ownerEntity, outInstance, levelConfigPath);
		}

		static ::Class_1_151B93D9C4BBDCA4* InitDiceCombatGameInstance(::RPG::GameCore::GameEntity* ownerEntity, ::Class_3_163A9557988CEBBE* gameInitParams)
		{
			return ((::Class_1_151B93D9C4BBDCA4*(*)(::RPG::GameCore::GameEntity*, ::Class_3_163A9557988CEBBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_INITDICECOMBATGAMEINSTANCE_OFFSET))(ownerEntity, gameInitParams);
		}

		static ::System::Void StopCurrentGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_STOPCURRENTGAME_OFFSET))();
		}

		static ::System::Boolean HasCurrentGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_HASCURRENTGAME_OFFSET))();
		}

		static ::System::Void DestroyGameInstanceEntity(::RPG::GameCore::GameEntity* gameInstanceEntity)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_DESTROYGAMEINSTANCEENTITY_OFFSET))(gameInstanceEntity);
		}

		static ::System::Void UnloadGameConfig(::RPG::GameCore::LittleGameType gameType)
		{
			return ((::System::Void(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_UNLOADGAMECONFIG_OFFSET))(gameType);
		}

		static ::RPG::GameCore::LittleGamePresetConfigs* GetEntityPresetConfig(::RPG::GameCore::LittleGameType gameType)
		{
			return ((::RPG::GameCore::LittleGamePresetConfigs*(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIG_OFFSET))(gameType);
		}

		static ::RPG::GameCore::LittleGameEntityPreset* GetEntityPreset(::RPG::GameCore::LittleGameType gameType, ::System::String* name)
		{
			return ((::RPG::GameCore::LittleGameEntityPreset*(*)(::RPG::GameCore::LittleGameType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESET_OFFSET))(gameType, name);
		}

		static ::System::String* GetEntityPresetConfigPath(::RPG::GameCore::LittleGameType gameType)
		{
			return ((::System::String*(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIGPATH_OFFSET))(gameType);
		}

		static ::System::String* GetEntityPresetConfigPath_1(::System::String* gameTypeName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_GETENTITYPRESETCONFIGPATH_1_OFFSET))(gameTypeName);
		}

		static ::System::Void TriggerLittleGameCustomEvent(::RPG::GameCore::GameEntity* littleGameInstanceEntity, ::System::String* eventName)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(littleGameInstanceEntity, eventName);
		}

		static ::System::Void TriggerLittleGameCustomEvent_1(::Class_1_151B93D9C4BBDCA4* instance, ::System::String* eventName)
		{
			return ((::System::Void(*)(::Class_1_151B93D9C4BBDCA4*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(instance, eventName);
		}

		static ::System::Void TriggerLittleGameCustomEvent_2(::RPG::GameCore::GameEntity* littleGameInstanceEntity, ::System::String* eventName, ::System::UInt32 sourceID)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_2_OFFSET))(littleGameInstanceEntity, eventName, sourceID);
		}

		static ::System::Void TriggerLittleGameCustomEvent_3(::Class_1_151B93D9C4BBDCA4* instance, ::System::String* eventName, ::System::UInt32 sourceID)
		{
			return ((::System::Void(*)(::Class_1_151B93D9C4BBDCA4*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_TRIGGERLITTLEGAMECUSTOMEVENT_3_OFFSET))(instance, eventName, sourceID);
		}

		static ::System::Void AddLittleGameCustomEventListener(::RPG::GameCore::GameEntity* littleGameInstanceEntity, ::System::String* eventName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(littleGameInstanceEntity, eventName, callback);
		}

		static ::System::Void AddLittleGameCustomEventListener_1(::Class_1_151B93D9C4BBDCA4* instance, ::System::String* eventName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::Class_1_151B93D9C4BBDCA4*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(instance, eventName, callback);
		}

		static ::System::Void AddLittleGameCustomEventListener_2(::RPG::GameCore::GameEntity* littleGameInstanceEntity, ::System::UInt32 sourceID, ::System::String* eventName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_2_OFFSET))(littleGameInstanceEntity, sourceID, eventName, callback);
		}

		static ::System::Void AddLittleGameCustomEventListener_3(::Class_1_151B93D9C4BBDCA4* instance, ::System::UInt32 sourceID, ::System::String* eventName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::Class_1_151B93D9C4BBDCA4*, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_ADDLITTLEGAMECUSTOMEVENTLISTENER_3_OFFSET))(instance, sourceID, eventName, callback);
		}

		static ::System::Void RemoveLittleGameCustomEventListener(::RPG::GameCore::GameEntity* littleGameInstanceEntity, ::System::String* eventName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(littleGameInstanceEntity, eventName, callback);
		}

		static ::System::Void RemoveLittleGameCustomEventListener_1(::Class_1_151B93D9C4BBDCA4* instance, ::System::String* eventName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::Class_1_151B93D9C4BBDCA4*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(instance, eventName, callback);
		}

		static ::System::Void RemoveLittleGameCustomEventListener_2(::RPG::GameCore::GameEntity* littleGameInstanceEntity, ::System::UInt32 sourceID, ::System::String* eventName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_2_OFFSET))(littleGameInstanceEntity, sourceID, eventName, callback);
		}

		static ::System::Void RemoveLittleGameCustomEventListener_3(::Class_1_151B93D9C4BBDCA4* instance, ::System::UInt32 sourceID, ::System::String* eventName, ::System::Action* callback)
		{
			return ((::System::Void(*)(::Class_1_151B93D9C4BBDCA4*, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMEUTILS_REMOVELITTLEGAMECUSTOMEVENTLISTENER_3_OFFSET))(instance, sourceID, eventName, callback);
		}
	};
}
