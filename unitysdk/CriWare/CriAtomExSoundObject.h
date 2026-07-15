#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExSoundObject_Config.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriAtomExPlayer; }

#define CRIWARE_CRIATOMEXSOUNDOBJECT_ADDPLAYER_OFFSET UNITYSDK_OFFSET(0x1B79C120)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_ADDPLAYER_OFFSET UNITYSDK_OFFSET(0x1B79C1B0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B79BED0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DELETEALLPLAYERS_OFFSET UNITYSDK_OFFSET(0x1B79C3C0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DELETEPLAYER_OFFSET UNITYSDK_OFFSET(0x1B79C2C0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B79C0A0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_DELETEALLPLAYERS_OFFSET UNITYSDK_OFFSET(0x1B79C340)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_DELETEPLAYER_OFFSET UNITYSDK_OFFSET(0x1B79C230)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B79BF90)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B79C440)
#define CRIWARE_CRIATOMEXSOUNDOBJECT_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B79BCE0)
#define CRIWARE_CRIATOMEXSOUNDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79BCF0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSoundObject_TypeDefinitionIndex = 37908;

	class CriAtomExSoundObject : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_DISPOSE_OFFSET))(this);
		}

		::System::Void AddPlayer(::CriWare::CriAtomExPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_ADDPLAYER_OFFSET))(this, a1);
		}

		::System::Void DeletePlayer(::CriWare::CriAtomExPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_DELETEPLAYER_OFFSET))(this, a1);
		}

		::System::Void DeleteAllPlayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_DELETEALLPLAYERS_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomExSoundObject_Create(::CriWare::CriAtomExSoundObject_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExSoundObject_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExSoundObject_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomExSoundObject_AddPlayer(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_ADDPLAYER_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExSoundObject_DeletePlayer(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DELETEPLAYER_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExSoundObject_DeleteAllPlayers(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSOUNDOBJECT_CRIATOMEXSOUNDOBJECT_DELETEALLPLAYERS_OFFSET))(a1);
		}
	};
}
