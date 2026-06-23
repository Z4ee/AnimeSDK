#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_FINISH_OFFSET UNITYSDK_OFFSET(0x1870BFB0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1870C080)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1870B980)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1870BA50)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_SETALPHAUPDATE_OFFSET UNITYSDK_OFFSET(0x1870BC40)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1870C090)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_START_OFFSET UNITYSDK_OFFSET(0x1870BAA0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_STOP_OFFSET UNITYSDK_OFFSET(0x1870BCE0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1870BD50)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1870B970)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager_FadeRuntimeInfo_TypeDefinitionIndex = 67963;

	class MultipleVideoPlayerManager_FadeRuntimeInfo : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* _setAlphaUpdater; // 0x10
		::System::Action_2<::System::Boolean, ::System::Single>* SetAlpha; // 0x18
		::System::Func_1<::System::Double>* GetCurVideoTime; // 0x20
		::System::Double _totalTime; // 0x28
		::System::Boolean _isLoop; // 0x30
		::System::Boolean _playedFadeIn; // 0x31
		::System::Boolean _IsActive_k__BackingField; // 0x32
		::System::Boolean _playedFadeOut; // 0x33
		::System::Single _fadeOutTime; // 0x34
		::System::Single _fadeInTime; // 0x38
		::System::Double _curFadeTime; // 0x40

		::System::Void _ctor(::System::Action_2<::System::Boolean, ::System::Single>* setAlpha, ::System::Func_1<::System::Double>* getCurVideoTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Single>*, ::System::Func_1<::System::Double>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO__CTOR_OFFSET))(this, setAlpha, getCurVideoTime);
		}

		::System::Void Init(::System::Single fadeInTime, ::System::Single fadeOutTime, ::System::Double totalTime, ::System::Boolean isLoop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_INIT_OFFSET))(this, fadeInTime, fadeOutTime, totalTime, isLoop);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_UPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_RESET_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_FINISH_OFFSET))(this);
		}

		::System::Collections::IEnumerator* SetAlphaUpdate(::System::Single time, ::System::Boolean isFadeIn)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_SETALPHAUPDATE_OFFSET))(this, time, isFadeIn);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_FADERUNTIMEINFO_SET_ISACTIVE_OFFSET))(this, value);
		}
	};
}
