#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsInstaller_CopyPolicy.h"
#include "unitysdk/CriWare/CriFsInstaller_Status.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIFSINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x164EC870)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x164ED1E0)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_CREATE_OFFSET UNITYSDK_OFFSET(0x164ED670)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x164ED160)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x164ED4F0)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x164ED3E0)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x164ED350)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_STOP_OFFSET UNITYSDK_OFFSET(0x164ED2D0)
#define CRIWARE_CRIFSINSTALLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x164ED050)
#define CRIWARE_CRIFSINSTALLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164ECEF0)
#define CRIWARE_CRIFSINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x164ED470)
#define CRIWARE_CRIFSINSTALLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x164ED570)
#define CRIWARE_CRIFSINSTALLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x164ECDB0)
#define CRIWARE_CRIFSINSTALLER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x164ECE50)
#define CRIWARE_CRIFSINSTALLER_STOP_OFFSET UNITYSDK_OFFSET(0x164EC6D0)
#define CRIWARE_CRIFSINSTALLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164EC810)

namespace CriWare
{
	inline static constexpr unsigned int CriFsInstaller_TypeDefinitionIndex = 38802;

	class CriFsInstaller : public ::CriWare::CriDisposable
	{
	public:
		::Il2CppArray<::System::Byte>* installBuffer; // 0x20
		::System::IntPtr handle; // 0x28
		::System::Runtime::InteropServices::GCHandle installBufferGch; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Copy(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_COPY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_STOP_OFFSET))(this);
		}

		::CriWare::CriFsInstaller_Status GetStatus()
		{
			return ((::CriWare::CriFsInstaller_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_GETSTATUS_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_GETPROGRESS_OFFSET))(this);
		}

		static ::System::Void ExecuteMain()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_EXECUTEMAIN_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_FINALIZE_OFFSET))(this);
		}

		static ::System::Int32 criFsInstaller_ExecuteMain()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_EXECUTEMAIN_OFFSET))();
		}

		static ::System::Int32 criFsInstaller_Create(::System::IntPtr& a1, ::CriWare::CriFsInstaller_CopyPolicy a2)
		{
			return ((::System::Int32(*)(::System::IntPtr&, ::CriWare::CriFsInstaller_CopyPolicy))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Int32 criFsInstaller_Destroy(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_DESTROY_OFFSET))(a1);
		}

		static ::System::Int32 criFsInstaller_Copy(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::String* a4, ::System::IntPtr a5, ::System::Int64 a6)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::String*, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_COPY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 criFsInstaller_Stop(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_STOP_OFFSET))(a1);
		}

		static ::System::Int32 criFsInstaller_GetStatus(::System::IntPtr a1, ::CriWare::CriFsInstaller_Status& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriFsInstaller_Status&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_GETSTATUS_OFFSET))(a1, a2);
		}

		static ::System::Int32 criFsInstaller_GetProgress(::System::IntPtr a1, ::System::Single& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_GETPROGRESS_OFFSET))(a1, a2);
		}
	};
}
