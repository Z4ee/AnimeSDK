#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkActionOnEventType.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_BankCallback;
class AkCallbackManager_EventCallback;
class AkExternalSourceInfoArray;
class AkOutputSettings;
class AkPositionArray;
namespace RPG::GameCore { class PckPatchConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_WWISEUTILITIES_ADDOUTPUT_OFFSET UNITYSDK_OFFSET(0xA7A5F30)
#define RPG_CLIENT_WWISEUTILITIES_EXCUTEACTIONONPLYAINGID_OFFSET UNITYSDK_OFFSET(0xA7A8940)
#define RPG_CLIENT_WWISEUTILITIES_EXECUTEACTIONONEVENT_OFFSET UNITYSDK_OFFSET(0xA7A8790)
#define RPG_CLIENT_WWISEUTILITIES_GETAUDIOBUFFER_OFFSET UNITYSDK_OFFSET(0xA7A8B60)
#define RPG_CLIENT_WWISEUTILITIES_GETCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA7A8110)
#define RPG_CLIENT_WWISEUTILITIES_GETDEVICEIDFROMNAME_OFFSET UNITYSDK_OFFSET(0xA7A8460)
#define RPG_CLIENT_WWISEUTILITIES_GETIDFROMSTRING_OFFSET UNITYSDK_OFFSET(0xA7A65E0)
#define RPG_CLIENT_WWISEUTILITIES_GETREFILLSBUFFER_OFFSET UNITYSDK_OFFSET(0xA7A7EE0)
#define RPG_CLIENT_WWISEUTILITIES_GETRTPCVALUE_OFFSET UNITYSDK_OFFSET(0xA7A76B0)
#define RPG_CLIENT_WWISEUTILITIES_GETSOURCEPLAYPOSITION_OFFSET UNITYSDK_OFFSET(0xA7A6C80)
#define RPG_CLIENT_WWISEUTILITIES_GETSTATE_OFFSET UNITYSDK_OFFSET(0xA7A7470)
#define RPG_CLIENT_WWISEUTILITIES_ISWWISEENABLED_OFFSET UNITYSDK_OFFSET(0xA7A4700)
#define RPG_CLIENT_WWISEUTILITIES_LOADBANKASYNC_OFFSET UNITYSDK_OFFSET(0xA7A5430)
#define RPG_CLIENT_WWISEUTILITIES_LOADBANK_1_OFFSET UNITYSDK_OFFSET(0xA7A4FD0)
#define RPG_CLIENT_WWISEUTILITIES_LOADBANK_OFFSET UNITYSDK_OFFSET(0xA7A4BA0)
#define RPG_CLIENT_WWISEUTILITIES_LOADPATCHCONFIG_OFFSET UNITYSDK_OFFSET(0xA7A8D30)
#define RPG_CLIENT_WWISEUTILITIES_LOADPCK_OFFSET UNITYSDK_OFFSET(0xA7A4280)
#define RPG_CLIENT_WWISEUTILITIES_POSTEVENT_OFFSET UNITYSDK_OFFSET(0xA7A6470)
#define RPG_CLIENT_WWISEUTILITIES_POSTEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0xA7A67D0)
#define RPG_CLIENT_WWISEUTILITIES_REMOVEOUTPUT_OFFSET UNITYSDK_OFFSET(0xA7A60C0)
#define RPG_CLIENT_WWISEUTILITIES_RENDERAUDIO_OFFSET UNITYSDK_OFFSET(0xA7A5D60)
#define RPG_CLIENT_WWISEUTILITIES_REPLACEOUTPUT_OFFSET UNITYSDK_OFFSET(0xA7A62E0)
#define RPG_CLIENT_WWISEUTILITIES_RESETGAMEOBJECTOUTPUTVOLUME_OFFSET UNITYSDK_OFFSET(0xA7A8C90)
#define RPG_CLIENT_WWISEUTILITIES_SEEKONEVENTBYPERCENT_OFFSET UNITYSDK_OFFSET(0xA7A6AF0)
#define RPG_CLIENT_WWISEUTILITIES_SEEKONEVENT_OFFSET UNITYSDK_OFFSET(0xA7A6970)
#define RPG_CLIENT_WWISEUTILITIES_SETCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xA7A8240)
#define RPG_CLIENT_WWISEUTILITIES_SETGAMEOBJECTOUTPUTVOLUME_OFFSET UNITYSDK_OFFSET(0xA7A8BD0)
#define RPG_CLIENT_WWISEUTILITIES_SETMULTIPLEPOSITION_OFFSET UNITYSDK_OFFSET(0xA7A7B30)
#define RPG_CLIENT_WWISEUTILITIES_SETOCCLUSION_OFFSET UNITYSDK_OFFSET(0xA7A6EC0)
#define RPG_CLIENT_WWISEUTILITIES_SETREFILLSBUFFER_OFFSET UNITYSDK_OFFSET(0xA7A7CC0)
#define RPG_CLIENT_WWISEUTILITIES_SETRTPCVALUE_OFFSET UNITYSDK_OFFSET(0xA7A7850)
#define RPG_CLIENT_WWISEUTILITIES_SETSTATE_OFFSET UNITYSDK_OFFSET(0xA7A7240)
#define RPG_CLIENT_WWISEUTILITIES_SETSWITCH_OFFSET UNITYSDK_OFFSET(0xA7A70B0)
#define RPG_CLIENT_WWISEUTILITIES_STOPALLONOBJECT_OFFSET UNITYSDK_OFFSET(0xA7A8650)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADALLBANKS_OFFSET UNITYSDK_OFFSET(0xA7A5B50)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADALLPCKS_OFFSET UNITYSDK_OFFSET(0xA7A4990)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADBANKASYNC_OFFSET UNITYSDK_OFFSET(0xA7A59E0)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0xA7A57C0)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADPCK_OFFSET UNITYSDK_OFFSET(0xA7A4780)
#define RPG_CLIENT_WWISEUTILITIES_WATCHRESULT_OFFSET UNITYSDK_OFFSET(0xA7A4740)

namespace RPG::Client
{
	inline static constexpr unsigned int WwiseUtilities_TypeDefinitionIndex = 48388;

	class WwiseUtilities : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableWwiseDebugLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WwiseUtilities_TypeDefinitionIndex)->GetStaticField(0x11340);
		}

		static ::System::Void LoadPck(::System::String* pckName, ::System::UInt32& pckID, ::System::Boolean ignoreError)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADPCK_OFFSET))(pckName, pckID, ignoreError);
		}

		static ::System::Void UnloadPck(::System::UInt32 pckID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADPCK_OFFSET))(pckID);
		}

		static ::System::Void UnloadAllPcks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADALLPCKS_OFFSET))();
		}

		static ::System::Void LoadBank(::System::UInt32 bankID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADBANK_OFFSET))(bankID);
		}

		static ::System::Void LoadBank_1(::System::String* bankName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADBANK_1_OFFSET))(bankName);
		}

		static ::System::Void LoadBankAsync(::System::UInt32 bankID, ::AkCallbackManager_BankCallback* loadBankCallBack)
		{
			return ((::System::Void(*)(::System::UInt32, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADBANKASYNC_OFFSET))(bankID, loadBankCallBack);
		}

		static ::System::Void UnloadBank(::System::UInt32 bankID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADBANK_OFFSET))(bankID);
		}

		static ::System::Void UnloadBankAsync(::System::UInt32 bankID, ::AkCallbackManager_BankCallback* unloadBankCallBack)
		{
			return ((::System::Void(*)(::System::UInt32, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADBANKASYNC_OFFSET))(bankID, unloadBankCallBack);
		}

		static ::System::Void UnloadAllBanks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADALLBANKS_OFFSET))();
		}

		static ::System::Void RenderAudio()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_RENDERAUDIO_OFFSET))();
		}

		static ::System::UInt64 AddOutput(::AkOutputSettings* outputSetting)
		{
			return ((::System::UInt64(*)(::AkOutputSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_ADDOUTPUT_OFFSET))(outputSetting);
		}

		static ::System::Void RemoveOutput(::System::UInt64 outputID)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_REMOVEOUTPUT_OFFSET))(outputID);
		}

		static ::System::UInt64 ReplaceOutput(::AkOutputSettings* outputSetting, ::System::UInt64 outputID)
		{
			return ((::System::UInt64(*)(::AkOutputSettings*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_REPLACEOUTPUT_OFFSET))(outputSetting, outputID);
		}

		static ::System::UInt32 PostEvent(::System::String* eventName, ::UnityEngine::GameObject* target, ::System::UInt32 flags, ::AkCallbackManager_EventCallback* callback)
		{
			return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_POSTEVENT_OFFSET))(eventName, target, flags, callback);
		}

		static ::System::UInt32 PostExternalSource(::System::String* eventName, ::UnityEngine::GameObject* target, ::System::UInt32 flags, ::AkCallbackManager_EventCallback* callback, ::System::UInt32 externalCount, ::AkExternalSourceInfoArray* externalSources)
		{
			return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::UInt32, ::AkExternalSourceInfoArray*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_POSTEXTERNALSOURCE_OFFSET))(eventName, target, flags, callback, externalCount, externalSources);
		}

		static ::System::Void SeekOnEvent(::System::String* eventName, ::System::Int32 position, ::System::UInt32 playingID)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SEEKONEVENT_OFFSET))(eventName, position, playingID);
		}

		static ::System::Void SeekOnEventByPercent(::System::String* eventName, ::System::Single percent)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SEEKONEVENTBYPERCENT_OFFSET))(eventName, percent);
		}

		static ::AKRESULT GetSourcePlayPosition(::System::UInt32 playingID, ::System::Int32& position)
		{
			return ((::AKRESULT(*)(::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETSOURCEPLAYPOSITION_OFFSET))(playingID, position);
		}

		static ::System::Void SetOcclusion(::UnityEngine::GameObject* emitter, ::System::Single OcclusionValue)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETOCCLUSION_OFFSET))(emitter, OcclusionValue);
		}

		static ::System::Boolean SetSwitch(::System::UInt32 switchGroupID, ::System::UInt32 switchID, ::UnityEngine::GameObject* obj)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETSWITCH_OFFSET))(switchGroupID, switchID, obj);
		}

		static ::System::Boolean SetState(::System::UInt32 stateGroupID, ::System::UInt32 stateID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETSTATE_OFFSET))(stateGroupID, stateID);
		}

		static ::System::UInt32 GetState(::System::String* stateGroupName)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETSTATE_OFFSET))(stateGroupName);
		}

		static ::System::Single GetRTPCValue(::System::String* rtpcName, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Single(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETRTPCVALUE_OFFSET))(rtpcName, gameObject);
		}

		static ::System::Void SetRTPCValue(::System::String* rtpcName, ::System::Single rtpcValue, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETRTPCVALUE_OFFSET))(rtpcName, rtpcValue, gameObject);
		}

		static ::System::Void SetMultiplePosition(::UnityEngine::GameObject* gameObject, ::AkPositionArray* listPosition)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::AkPositionArray*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETMULTIPLEPOSITION_OFFSET))(gameObject, listPosition);
		}

		static ::System::Void SetRefillsBuffer(::System::UInt16 refillNum)
		{
			return ((::System::Void(*)(::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETREFILLSBUFFER_OFFSET))(refillNum);
		}

		static ::System::UInt16 GetRefillsBuffer()
		{
			return ((::System::UInt16(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETREFILLSBUFFER_OFFSET))();
		}

		static ::System::String* GetCurrentLanguage()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETCURRENTLANGUAGE_OFFSET))();
		}

		static ::System::Void SetCurrentLanguage(::System::String* language)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETCURRENTLANGUAGE_OFFSET))(language);
		}

		static ::System::UInt32 GetIDFromString(::System::String* str)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETIDFROMSTRING_OFFSET))(str);
		}

		static ::System::UInt32 GetDeviceIDFromName(::System::String* name)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETDEVICEIDFROMNAME_OFFSET))(name);
		}

		static ::System::Void StopAllOnObject(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_STOPALLONOBJECT_OFFSET))(obj);
		}

		static ::System::Void ExecuteActionOnEvent(::System::String* eventName, ::AkActionOnEventType actionType, ::UnityEngine::GameObject* obj, ::System::Single transitionDuration)
		{
			return ((::System::Void(*)(::System::String*, ::AkActionOnEventType, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_EXECUTEACTIONONEVENT_OFFSET))(eventName, actionType, obj, transitionDuration);
		}

		static ::System::Void ExcuteActionOnPlyaingID(::System::UInt32 playingID, ::AkActionOnEventType actionType, ::System::Single transitionDuration)
		{
			return ((::System::Void(*)(::System::UInt32, ::AkActionOnEventType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_EXCUTEACTIONONPLYAINGID_OFFSET))(playingID, actionType, transitionDuration);
		}

		static ::System::Void GetAudioBuffer(::Il2CppArray<::System::Single>* fillBuffer, ::System::UInt32 playingID)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETAUDIOBUFFER_OFFSET))(fillBuffer, playingID);
		}

		static ::System::Void SetGameobjectOutputVolume(::UnityEngine::GameObject* emitter, ::UnityEngine::GameObject* listener, ::System::Single volume)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETGAMEOBJECTOUTPUTVOLUME_OFFSET))(emitter, listener, volume);
		}

		static ::System::Void ResetGameobjectOutputVolume(::UnityEngine::GameObject* emitter)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_RESETGAMEOBJECTOUTPUTVOLUME_OFFSET))(emitter);
		}

		static ::RPG::GameCore::PckPatchConfig* LoadPatchConfig()
		{
			return ((::RPG::GameCore::PckPatchConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADPATCHCONFIG_OFFSET))();
		}

		static ::System::Void WatchResult(::AKRESULT r)
		{
			return ((::System::Void(*)(::AKRESULT))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_WATCHRESULT_OFFSET))(r);
		}

		static ::System::Boolean IsWwiseEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_ISWWISEENABLED_OFFSET))();
		}
	};
}
