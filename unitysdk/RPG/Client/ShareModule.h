#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_D17272E82AE804C2_677;
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CLIENT_SHAREMODULE_GETSHAREFRAMECAPTUREPROMISE_OFFSET UNITYSDK_OFFSET(0xE07BFE0)
#define RPG_CLIENT_SHAREMODULE_GETSHARENUM_OFFSET UNITYSDK_OFFSET(0xE07BE90)
#define RPG_CLIENT_SHAREMODULE_GET_ENABLESHARE_OFFSET UNITYSDK_OFFSET(0xE07CEE0)
#define RPG_CLIENT_SHAREMODULE_GET__FRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0xE07C260)
#define RPG_CLIENT_SHAREMODULE_HASAVAILABLESHAREREWARD_OFFSET UNITYSDK_OFFSET(0xE07BF50)
#define RPG_CLIENT_SHAREMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xE07BCB0)
#define RPG_CLIENT_SHAREMODULE_RELEASESHARECAPTUREDFRAME_OFFSET UNITYSDK_OFFSET(0xE07C200)
#define RPG_CLIENT_SHAREMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xE07C490)
#define RPG_CLIENT_SHAREMODULE__BEFORESHARESCREENSHOT_OFFSET UNITYSDK_OFFSET(0xE07CCF0)
#define RPG_CLIENT_SHAREMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xE07D110)
#define RPG_CLIENT_SHAREMODULE__ENDSHARESCREENSHOT_OFFSET UNITYSDK_OFFSET(0xE07CD40)
#define RPG_CLIENT_SHAREMODULE__GETSHAREFRAMECAPTUREPROCESS_OFFSET UNITYSDK_OFFSET(0xE07C180)
#define RPG_CLIENT_SHAREMODULE__ONCMDGETSHAREDATASCRSP_OFFSET UNITYSDK_OFFSET(0xE07C620)
#define RPG_CLIENT_SHAREMODULE__ONCMDSHARESCRSP_OFFSET UNITYSDK_OFFSET(0xE07CAC0)
#define RPG_CLIENT_SHAREMODULE__RESOLVEGETSHAREFRAMECAPTUREPROMISE_OFFSET UNITYSDK_OFFSET(0xE07CE50)
#define RPG_CLIENT_SHAREMODULE__SYNCSHAREDATA_OFFSET UNITYSDK_OFFSET(0xE07CA20)

namespace RPG::Client
{
	inline static constexpr unsigned int ShareModule_TypeDefinitionIndex = 67944;

	class ShareModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise_1<::UnityEngine::RenderTexture*>* _GetShareFrameCapturePromise; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ShareNumDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_INIT_OFFSET))(this);
		}

		::System::UInt32 GetShareNum(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_GETSHARENUM_OFFSET))(this, a1);
		}

		::System::Boolean HasAvailableShareReward(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_HASAVAILABLESHAREREWARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::UnityEngine::RenderTexture*>* GetShareFrameCapturePromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::UnityEngine::RenderTexture*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_GETSHAREFRAMECAPTUREPROMISE_OFFSET))(this);
		}

		::System::Void ReleaseShareCapturedFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_RELEASESHARECAPTUREDFRAME_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetShareDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__ONCMDGETSHAREDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdShareScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__ONCMDSHARESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncShareData(::Class_1_D17272E82AE804C2_677* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_677*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__SYNCSHAREDATA_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _GetShareFrameCaptureProcess()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__GETSHAREFRAMECAPTUREPROCESS_OFFSET))(this);
		}

		::System::Void _BeforeShareScreenShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__BEFORESHARESCREENSHOT_OFFSET))(this);
		}

		::System::Void _EndShareScreenShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__ENDSHARESCREENSHOT_OFFSET))(this);
		}

		::System::Void _ResolveGetShareFrameCapturePromise(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__RESOLVEGETSHAREFRAMECAPTUREPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::FrameCaptureManager* get__FrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_GET__FRAMECAPTUREMANAGER_OFFSET))(this);
		}

		::System::Boolean get_EnableShare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_GET_ENABLESHARE_OFFSET))(this);
		}
	};
}
