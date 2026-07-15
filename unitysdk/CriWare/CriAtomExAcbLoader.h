#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcbLoader_LoaderConfig.h"
#include "unitysdk/CriWare/CriAtomExAcbLoader_Status.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_CREATE_OFFSET UNITYSDK_OFFSET(0x1AEF3D80)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1AEF3EF0)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1AEF4460)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_LOADACBDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1AEF4010)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_LOADACBFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1AEF3E10)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_MOVEACBHANDLE_OFFSET UNITYSDK_OFFSET(0x1AEF44E0)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1AEF47C0)
#define CRIWARE_CRIATOMEXACBLOADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AEF4560)
#define CRIWARE_CRIATOMEXACBLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AEE5030)
#define CRIWARE_CRIATOMEXACBLOADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AEF46C0)
#define CRIWARE_CRIATOMEXACBLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1AEE4E30)
#define CRIWARE_CRIATOMEXACBLOADER_LOADACBDATAASYNC_1_OFFSET UNITYSDK_OFFSET(0x1AEF40E0)
#define CRIWARE_CRIATOMEXACBLOADER_LOADACBDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1AEE49C0)
#define CRIWARE_CRIATOMEXACBLOADER_LOADACBFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1AEE5640)
#define CRIWARE_CRIATOMEXACBLOADER_MOVEACB_OFFSET UNITYSDK_OFFSET(0x1AEE4EB0)
#define CRIWARE_CRIATOMEXACBLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEF3F70)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbLoader_TypeDefinitionIndex = 37864;

	class CriAtomExAcbLoader : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::Nullable_1<::System::Runtime::InteropServices::GCHandle> gch; // 0x28

		::System::Void _ctor(::System::IntPtr a1, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::CriWare::CriAtomExAcbLoader* LoadAcbFileAsync(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::CriWare::CriAtomExAcbLoader*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_LOADACBFILEASYNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::CriWare::CriAtomExAcbLoader* LoadAcbDataAsync(::Il2CppArray<::System::Byte>* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::CriWare::CriAtomExAcbLoader*(*)(::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_LOADACBDATAASYNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::CriWare::CriAtomExAcbLoader* LoadAcbDataAsync_1(::System::IntPtr a1, ::System::Int32 a2, ::CriWare::CriFsBinder* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::CriWare::CriAtomExAcbLoader*(*)(::System::IntPtr, ::System::Int32, ::CriWare::CriFsBinder*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_LOADACBDATAASYNC_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		::CriWare::CriAtomExAcbLoader_Status GetStatus()
		{
			return ((::CriWare::CriAtomExAcbLoader_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_GETSTATUS_OFFSET))(this);
		}

		::CriWare::CriAtomExAcb* MoveAcb()
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_MOVEACB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomExAcbLoader_Create(::CriWare::CriAtomExAcbLoader_LoaderConfig& a1)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExAcbLoader_LoaderConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_CREATE_OFFSET))(a1);
		}

		static ::System::Void criAtomExAcbLoader_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_DESTROY_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExAcbLoader_LoadAcbFileAsync(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::IntPtr a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_LOADACBFILEASYNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean criAtomExAcbLoader_LoadAcbDataAsync(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::IntPtr a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_LOADACBDATAASYNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::CriWare::CriAtomExAcbLoader_Status criAtomExAcbLoader_GetStatus(::System::IntPtr a1)
		{
			return ((::CriWare::CriAtomExAcbLoader_Status(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_GETSTATUS_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExAcbLoader_WaitForCompletion(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_WAITFORCOMPLETION_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomExAcbLoader_MoveAcbHandle(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_MOVEACBHANDLE_OFFSET))(a1);
		}
	};
}
