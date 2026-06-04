#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIMANAVP9_CRIMANAUNITY_GETALLOCATORMANAGER_OFFSET UNITYSDK_OFFSET(0x146DA020)
#define CRIWARE_CRIMANAVP9_CRIMVPLY_ATTACHCODECINTERFACE_OFFSET UNITYSDK_OFFSET(0x146DA230)
#define CRIWARE_CRIMANAVP9_CRIVVP9_GETALPHAINTERFACE_OFFSET UNITYSDK_OFFSET(0x146DA1B0)
#define CRIWARE_CRIMANAVP9_CRIVVP9_GETINTERFACE_OFFSET UNITYSDK_OFFSET(0x146DA130)
#define CRIWARE_CRIMANAVP9_CRIVVP9_SETUSERALLOCATOR_OFFSET UNITYSDK_OFFSET(0x146DA0A0)
#define CRIWARE_CRIMANAVP9_CRIWAREUNITY_GETALLOCATEFUNC_OFFSET UNITYSDK_OFFSET(0x146D9F20)
#define CRIWARE_CRIMANAVP9_CRIWAREUNITY_GETDEALLOCATEFUNC_OFFSET UNITYSDK_OFFSET(0x146D9FA0)
#define CRIWARE_CRIMANAVP9_SETUPVP9DECODER_OFFSET UNITYSDK_OFFSET(0x146D9AB0)
#define CRIWARE_CRIMANAVP9_SUPPORTCURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x146D9F10)

namespace CriWare
{
	inline static constexpr unsigned int CriManaVp9_TypeDefinitionIndex = 37240;

	class CriManaVp9 : public ::System::Object
	{
	public:
		// static const ::System::String* scriptVersionString; // 0x0
		// static const ::System::String* cri_mana_vp9_name; // 0x0

		static ::System::Boolean SupportCurrentPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_SUPPORTCURRENTPLATFORM_OFFSET))();
		}

		static ::System::Void SetupVp9Decoder()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_SETUPVP9DECODER_OFFSET))();
		}

		static ::System::IntPtr criWareUnity_GetAllocateFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIWAREUNITY_GETALLOCATEFUNC_OFFSET))();
		}

		static ::System::IntPtr criWareUnity_GetDeallocateFunc()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIWAREUNITY_GETDEALLOCATEFUNC_OFFSET))();
		}

		static ::System::IntPtr criManaUnity_GetAllocatorManager()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIMANAUNITY_GETALLOCATORMANAGER_OFFSET))();
		}

		static ::System::Void criMvPly_AttachCodecInterface(::System::Int32 a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIMVPLY_ATTACHCODECINTERFACE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criVvp9_SetUserAllocator(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIVVP9_SETUSERALLOCATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr criVvp9_GetInterface()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIVVP9_GETINTERFACE_OFFSET))();
		}

		static ::System::IntPtr criVvp9_GetAlphaInterface()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAVP9_CRIVVP9_GETALPHAINTERFACE_OFFSET))();
		}
	};
}
