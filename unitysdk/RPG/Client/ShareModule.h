#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_FA4F4A67B1C04320_536;
namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CLIENT_SHAREMODULE_GETSHAREFRAMECAPTUREPROMISE_OFFSET UNITYSDK_OFFSET(0xA477A50)
#define RPG_CLIENT_SHAREMODULE_GETSHARENUM_OFFSET UNITYSDK_OFFSET(0xA477940)
#define RPG_CLIENT_SHAREMODULE_GET_ENABLESHARE_OFFSET UNITYSDK_OFFSET(0xA478630)
#define RPG_CLIENT_SHAREMODULE_GET__FRAMECAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0xA477CD0)
#define RPG_CLIENT_SHAREMODULE_HASAVAILABLESHAREREWARD_OFFSET UNITYSDK_OFFSET(0xA4779C0)
#define RPG_CLIENT_SHAREMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA477760)
#define RPG_CLIENT_SHAREMODULE_RELEASESHARECAPTUREDFRAME_OFFSET UNITYSDK_OFFSET(0xA477C70)
#define RPG_CLIENT_SHAREMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA477E90)
#define RPG_CLIENT_SHAREMODULE__BEFORESHARESCREENSHOT_OFFSET UNITYSDK_OFFSET(0xA478440)
#define RPG_CLIENT_SHAREMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA478860)
#define RPG_CLIENT_SHAREMODULE__ENDSHARESCREENSHOT_OFFSET UNITYSDK_OFFSET(0xA478490)
#define RPG_CLIENT_SHAREMODULE__GETSHAREFRAMECAPTUREPROCESS_OFFSET UNITYSDK_OFFSET(0xA477BF0)
#define RPG_CLIENT_SHAREMODULE__ONCMDGETSHAREDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA477F40)
#define RPG_CLIENT_SHAREMODULE__ONCMDSHARESCRSP_OFFSET UNITYSDK_OFFSET(0xA478290)
#define RPG_CLIENT_SHAREMODULE__RESOLVEGETSHAREFRAMECAPTUREPROMISE_OFFSET UNITYSDK_OFFSET(0xA4785A0)
#define RPG_CLIENT_SHAREMODULE__SYNCSHAREDATA_OFFSET UNITYSDK_OFFSET(0xA4781F0)
#define RPG_CLIENT_SHAREMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA478880)
#define RPG_CLIENT_SHAREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA478910)

namespace RPG::Client
{
	inline static constexpr unsigned int ShareModule_TypeDefinitionIndex = 55445;

	class ShareModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ShareNumDict; // 0x10
		::RPG::Client::Promises::Promise_1<::UnityEngine::RenderTexture*>* _GetShareFrameCapturePromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_INIT_OFFSET))(this);
		}

		::System::UInt32 GetShareNum(::System::UInt32 shareId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_GETSHARENUM_OFFSET))(this, shareId);
		}

		::System::Boolean HasAvailableShareReward(::System::UInt32 shareId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_HASAVAILABLESHAREREWARD_OFFSET))(this, shareId);
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

		::System::Void _OnCmdGetShareDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__ONCMDGETSHAREDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdShareScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__ONCMDSHARESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncShareData(::Class_1_FA4F4A67B1C04320_536* shareData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_536*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__SYNCSHAREDATA_OFFSET))(this, shareData);
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

		::System::Void _ResolveGetShareFrameCapturePromise(::UnityEngine::RenderTexture* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE__RESOLVEGETSHAREFRAMECAPTUREPROMISE_OFFSET))(this, texture);
		}

		::RPG::Client::FrameCaptureManager* get__FrameCaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_GET__FRAMECAPTUREMANAGER_OFFSET))(this);
		}

		::System::Boolean get_EnableShare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE_GET_ENABLESHARE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHAREMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
