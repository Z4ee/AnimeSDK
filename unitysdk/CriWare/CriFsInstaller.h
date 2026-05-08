#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsInstaller_CopyPolicy.h"
#include "unitysdk/CriWare/CriFsInstaller_Status.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIFSINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x1C15E470)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x1C15E6D0)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C15E190)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C15E3F0)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x1C15EAA0)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C15E990)
#define CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C15E860)
#define CRIWARE_CRIFSINSTALLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C15E280)
#define CRIWARE_CRIFSINSTALLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C15E220)
#define CRIWARE_CRIFSINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x1C15EA20)
#define CRIWARE_CRIFSINSTALLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C15EB20)
#define CRIWARE_CRIFSINSTALLER_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C15E8F0)
#define CRIWARE_CRIFSINSTALLER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C15E7C0)
#define CRIWARE_CRIFSINSTALLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15DF30)

namespace CriWare
{
	inline static constexpr unsigned int CriFsInstaller_TypeDefinitionIndex = 32753;

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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Copy(::CriWare::CriFsBinder* binder, ::System::String* srcPath, ::System::String* dstPath, ::System::Int32 installBufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_COPY_OFFSET))(this, binder, srcPath, dstPath, installBufferSize);
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

		static ::System::Int32 criFsInstaller_Create(::System::IntPtr& installer, ::CriWare::CriFsInstaller_CopyPolicy option)
		{
			return ((::System::Int32(*)(::System::IntPtr&, ::CriWare::CriFsInstaller_CopyPolicy))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_CREATE_OFFSET))(installer, option);
		}

		static ::System::Int32 criFsInstaller_Destroy(::System::IntPtr installer)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_DESTROY_OFFSET))(installer);
		}

		static ::System::Int32 criFsInstaller_Copy(::System::IntPtr installer, ::System::IntPtr binder, ::System::String* src_path, ::System::String* dst_path, ::System::IntPtr buffer, ::System::Int64 buffer_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::String*, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_COPY_OFFSET))(installer, binder, src_path, dst_path, buffer, buffer_size);
		}

		static ::System::Int32 criFsInstaller_GetStatus(::System::IntPtr installer, ::CriWare::CriFsInstaller_Status& status)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriFsInstaller_Status&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_GETSTATUS_OFFSET))(installer, status);
		}

		static ::System::Int32 criFsInstaller_GetProgress(::System::IntPtr installer, ::System::Single& progress)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSINSTALLER_CRIFSINSTALLER_GETPROGRESS_OFFSET))(installer, progress);
		}
	};
}
