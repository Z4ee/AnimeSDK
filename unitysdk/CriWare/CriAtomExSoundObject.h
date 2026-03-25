#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExSoundObject_Config.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomExPlayer; }

#define CRIWARE_CRIATOMEXSOUNDOBJECT_ADDPLAYER_OFFSET UNITYSDK_OFFSET(0x11A23ED0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_ADDPLAYER_OFFSET UNITYSDK_OFFSET(0x11A23F60)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x11A23CA0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DELETEALLPLAYERS_OFFSET UNITYSDK_OFFSET(0x11A24170)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DELETEPLAYER_OFFSET UNITYSDK_OFFSET(0x11A24070)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DESTROY_OFFSET UNITYSDK_OFFSET(0x11A23E50)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_DELETEALLPLAYERS_OFFSET UNITYSDK_OFFSET(0x11A240F0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_DELETEPLAYER_OFFSET UNITYSDK_OFFSET(0x11A23FE0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A23D60)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A241F0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x11A23AB0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A23AC0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSoundObject_TypeDefinitionIndex = 31089;

	class CriAtomExSoundObject : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor(::System::Boolean enableVoiceLimitScope, ::System::Boolean enableCategoryCueLimitScope)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT__CTOR_OFFSET))(this, enableVoiceLimitScope, enableCategoryCueLimitScope);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_DISPOSE_OFFSET))(this);
		}

		::System::Void AddPlayer(::CriWare::CriAtomExPlayer* player)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_ADDPLAYER_OFFSET))(this, player);
		}

		::System::Void DeletePlayer(::CriWare::CriAtomExPlayer* player)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_DELETEPLAYER_OFFSET))(this, player);
		}

		::System::Void DeleteAllPlayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_DELETEALLPLAYERS_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomExSoundObject_Create(::CriWare::CriAtomExSoundObject_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExSoundObject_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomExSoundObject_Destroy(::System::IntPtr soundObject)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DESTROY_OFFSET))(soundObject);
		}

		static ::System::Void criAtomExSoundObject_AddPlayer(::System::IntPtr soundObject, ::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_ADDPLAYER_OFFSET))(soundObject, player);
		}

		static ::System::Void criAtomExSoundObject_DeletePlayer(::System::IntPtr soundObject, ::System::IntPtr player)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DELETEPLAYER_OFFSET))(soundObject, player);
		}

		static ::System::Void criAtomExSoundObject_DeleteAllPlayers(::System::IntPtr soundObject)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DELETEALLPLAYERS_OFFSET))(soundObject);
		}
	};
}
