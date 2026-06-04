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

#define RPG_CLIENT_WWISEUTILITIES_ADDOUTPUT_OFFSET UNITYSDK_OFFSET(0xCC4EB10)
#define RPG_CLIENT_WWISEUTILITIES_EXCUTEACTIONONPLYAINGID_OFFSET UNITYSDK_OFFSET(0xCC51520)
#define RPG_CLIENT_WWISEUTILITIES_EXECUTEACTIONONEVENT_OFFSET UNITYSDK_OFFSET(0xCC51370)
#define RPG_CLIENT_WWISEUTILITIES_GETAUDIOBUFFER_OFFSET UNITYSDK_OFFSET(0xCC51740)
#define RPG_CLIENT_WWISEUTILITIES_GETCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xCC50CF0)
#define RPG_CLIENT_WWISEUTILITIES_GETDEVICEIDFROMNAME_OFFSET UNITYSDK_OFFSET(0xCC51040)
#define RPG_CLIENT_WWISEUTILITIES_GETIDFROMSTRING_OFFSET UNITYSDK_OFFSET(0xCC4F1C0)
#define RPG_CLIENT_WWISEUTILITIES_GETREFILLSBUFFER_OFFSET UNITYSDK_OFFSET(0xCC50AC0)
#define RPG_CLIENT_WWISEUTILITIES_GETRTPCVALUE_OFFSET UNITYSDK_OFFSET(0xCC50290)
#define RPG_CLIENT_WWISEUTILITIES_GETSOURCEPLAYPOSITION_OFFSET UNITYSDK_OFFSET(0xCC4F860)
#define RPG_CLIENT_WWISEUTILITIES_GETSTATE_OFFSET UNITYSDK_OFFSET(0xCC50050)
#define RPG_CLIENT_WWISEUTILITIES_ISWWISEENABLED_OFFSET UNITYSDK_OFFSET(0xCC4D390)
#define RPG_CLIENT_WWISEUTILITIES_LOADBANKASYNC_OFFSET UNITYSDK_OFFSET(0xCC4E050)
#define RPG_CLIENT_WWISEUTILITIES_LOADBANK_1_OFFSET UNITYSDK_OFFSET(0xCC4DC20)
#define RPG_CLIENT_WWISEUTILITIES_LOADBANK_OFFSET UNITYSDK_OFFSET(0xCC4D830)
#define RPG_CLIENT_WWISEUTILITIES_LOADPATCHCONFIG_OFFSET UNITYSDK_OFFSET(0xCC51910)
#define RPG_CLIENT_WWISEUTILITIES_LOADPCK_OFFSET UNITYSDK_OFFSET(0xCC4CF50)
#define RPG_CLIENT_WWISEUTILITIES_POSTEVENT_OFFSET UNITYSDK_OFFSET(0xCC4F050)
#define RPG_CLIENT_WWISEUTILITIES_POSTEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0xCC4F3B0)
#define RPG_CLIENT_WWISEUTILITIES_REMOVEOUTPUT_OFFSET UNITYSDK_OFFSET(0xCC4ECA0)
#define RPG_CLIENT_WWISEUTILITIES_RENDERAUDIO_OFFSET UNITYSDK_OFFSET(0xCC4E940)
#define RPG_CLIENT_WWISEUTILITIES_REPLACEOUTPUT_OFFSET UNITYSDK_OFFSET(0xCC4EEC0)
#define RPG_CLIENT_WWISEUTILITIES_RESETGAMEOBJECTOUTPUTVOLUME_OFFSET UNITYSDK_OFFSET(0xCC51870)
#define RPG_CLIENT_WWISEUTILITIES_SEEKONEVENTBYPERCENT_OFFSET UNITYSDK_OFFSET(0xCC4F6D0)
#define RPG_CLIENT_WWISEUTILITIES_SEEKONEVENT_OFFSET UNITYSDK_OFFSET(0xCC4F550)
#define RPG_CLIENT_WWISEUTILITIES_SETCURRENTLANGUAGE_OFFSET UNITYSDK_OFFSET(0xCC50E20)
#define RPG_CLIENT_WWISEUTILITIES_SETGAMEOBJECTOUTPUTVOLUME_OFFSET UNITYSDK_OFFSET(0xCC517B0)
#define RPG_CLIENT_WWISEUTILITIES_SETMULTIPLEPOSITION_OFFSET UNITYSDK_OFFSET(0xCC50710)
#define RPG_CLIENT_WWISEUTILITIES_SETOCCLUSION_OFFSET UNITYSDK_OFFSET(0xCC4FAA0)
#define RPG_CLIENT_WWISEUTILITIES_SETREFILLSBUFFER_OFFSET UNITYSDK_OFFSET(0xCC508A0)
#define RPG_CLIENT_WWISEUTILITIES_SETRTPCVALUE_OFFSET UNITYSDK_OFFSET(0xCC50430)
#define RPG_CLIENT_WWISEUTILITIES_SETSTATE_OFFSET UNITYSDK_OFFSET(0xCC4FE20)
#define RPG_CLIENT_WWISEUTILITIES_SETSWITCH_OFFSET UNITYSDK_OFFSET(0xCC4FC90)
#define RPG_CLIENT_WWISEUTILITIES_STOPALLONOBJECT_OFFSET UNITYSDK_OFFSET(0xCC51230)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADALLBANKS_OFFSET UNITYSDK_OFFSET(0xCC4E730)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADALLPCKS_OFFSET UNITYSDK_OFFSET(0xCC4D620)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADBANKASYNC_OFFSET UNITYSDK_OFFSET(0xCC4E5C0)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0xCC4E3A0)
#define RPG_CLIENT_WWISEUTILITIES_UNLOADPCK_OFFSET UNITYSDK_OFFSET(0xCC4D410)
#define RPG_CLIENT_WWISEUTILITIES_WATCHRESULT_OFFSET UNITYSDK_OFFSET(0xCC4D3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int WwiseUtilities_TypeDefinitionIndex = 55870;

	class WwiseUtilities : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableWwiseDebugLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WwiseUtilities_TypeDefinitionIndex)->GetStaticField(0x13630);
		}

		static ::System::Void LoadPck(::System::String* a1, ::System::UInt32& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADPCK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnloadPck(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADPCK_OFFSET))(a1);
		}

		static ::System::Void UnloadAllPcks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADALLPCKS_OFFSET))();
		}

		static ::System::Void LoadBank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADBANK_OFFSET))(a1);
		}

		static ::System::Void LoadBank_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADBANK_1_OFFSET))(a1);
		}

		static ::System::Void LoadBankAsync(::System::UInt32 a1, ::AkCallbackManager_BankCallback* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADBANKASYNC_OFFSET))(a1, a2);
		}

		static ::System::Void UnloadBank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADBANK_OFFSET))(a1);
		}

		static ::System::Void UnloadBankAsync(::System::UInt32 a1, ::AkCallbackManager_BankCallback* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADBANKASYNC_OFFSET))(a1, a2);
		}

		static ::System::Void UnloadAllBanks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_UNLOADALLBANKS_OFFSET))();
		}

		static ::System::Void RenderAudio()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_RENDERAUDIO_OFFSET))();
		}

		static ::System::UInt64 AddOutput(::AkOutputSettings* a1)
		{
			return ((::System::UInt64(*)(::AkOutputSettings*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_ADDOUTPUT_OFFSET))(a1);
		}

		static ::System::Void RemoveOutput(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_REMOVEOUTPUT_OFFSET))(a1);
		}

		static ::System::UInt64 ReplaceOutput(::AkOutputSettings* a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::AkOutputSettings*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_REPLACEOUTPUT_OFFSET))(a1, a2);
		}

		static ::System::UInt32 PostEvent(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::UInt32 a3, ::AkCallbackManager_EventCallback* a4)
		{
			return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_POSTEVENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 PostExternalSource(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::UInt32 a3, ::AkCallbackManager_EventCallback* a4, ::System::UInt32 a5, ::AkExternalSourceInfoArray* a6)
		{
			return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::UInt32, ::AkExternalSourceInfoArray*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_POSTEXTERNALSOURCE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SeekOnEvent(::System::String* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SEEKONEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SeekOnEventByPercent(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SEEKONEVENTBYPERCENT_OFFSET))(a1, a2);
		}

		static ::AKRESULT GetSourcePlayPosition(::System::UInt32 a1, ::System::Int32& a2)
		{
			return ((::AKRESULT(*)(::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETSOURCEPLAYPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void SetOcclusion(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETOCCLUSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean SetSwitch(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETSWITCH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean SetState(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETSTATE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetState(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETSTATE_OFFSET))(a1);
		}

		static ::System::Single GetRTPCValue(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Single(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETRTPCVALUE_OFFSET))(a1, a2);
		}

		static ::System::Void SetRTPCValue(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETRTPCVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetMultiplePosition(::UnityEngine::GameObject* a1, ::AkPositionArray* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::AkPositionArray*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETMULTIPLEPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void SetRefillsBuffer(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETREFILLSBUFFER_OFFSET))(a1);
		}

		static ::System::UInt16 GetRefillsBuffer()
		{
			return ((::System::UInt16(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETREFILLSBUFFER_OFFSET))();
		}

		static ::System::String* GetCurrentLanguage()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETCURRENTLANGUAGE_OFFSET))();
		}

		static ::System::Void SetCurrentLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETCURRENTLANGUAGE_OFFSET))(a1);
		}

		static ::System::UInt32 GetIDFromString(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETIDFROMSTRING_OFFSET))(a1);
		}

		static ::System::UInt32 GetDeviceIDFromName(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETDEVICEIDFROMNAME_OFFSET))(a1);
		}

		static ::System::Void StopAllOnObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_STOPALLONOBJECT_OFFSET))(a1);
		}

		static ::System::Void ExecuteActionOnEvent(::System::String* a1, ::AkActionOnEventType a2, ::UnityEngine::GameObject* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::System::String*, ::AkActionOnEventType, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_EXECUTEACTIONONEVENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ExcuteActionOnPlyaingID(::System::UInt32 a1, ::AkActionOnEventType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::AkActionOnEventType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_EXCUTEACTIONONPLYAINGID_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetAudioBuffer(::Il2CppArray<::System::Single>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_GETAUDIOBUFFER_OFFSET))(a1, a2);
		}

		static ::System::Void SetGameobjectOutputVolume(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_SETGAMEOBJECTOUTPUTVOLUME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ResetGameobjectOutputVolume(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_RESETGAMEOBJECTOUTPUTVOLUME_OFFSET))(a1);
		}

		static ::RPG::GameCore::PckPatchConfig* LoadPatchConfig()
		{
			return ((::RPG::GameCore::PckPatchConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_LOADPATCHCONFIG_OFFSET))();
		}

		static ::System::Void WatchResult(::AKRESULT a1)
		{
			return ((::System::Void(*)(::AKRESULT))((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_WATCHRESULT_OFFSET))(a1);
		}

		static ::System::Boolean IsWwiseEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WWISEUTILITIES_ISWWISEENABLED_OFFSET))();
		}
	};
}
