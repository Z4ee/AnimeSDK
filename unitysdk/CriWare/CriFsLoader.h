#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsLoader_Status.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIFSLOADER_CRIFSLOADER_CREATE_OFFSET UNITYSDK_OFFSET(0x1FA81120)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1FA813D0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FA817D0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1FA81570)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_SETREADUNITSIZE_OFFSET UNITYSDK_OFFSET(0x1FA818E0)
#define CRIWARE_CRIFSLOADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FA81200)
#define CRIWARE_CRIFSLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FA811A0)
#define CRIWARE_CRIFSLOADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FA81960)
#define CRIWARE_CRIFSLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FA81660)
#define CRIWARE_CRIFSLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1FA81450)
#define CRIWARE_CRIFSLOADER_SETREADUNITSIZE_OFFSET UNITYSDK_OFFSET(0x1FA81850)
#define CRIWARE_CRIFSLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA80ED0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoader_TypeDefinitionIndex = 34953;

	class CriFsLoader : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::Runtime::InteropServices::GCHandle dstGch; // 0x28
		::System::Runtime::InteropServices::GCHandle srcGch; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Load(::CriWare::CriFsBinder* binder, ::System::String* path, ::System::Int64 fileOffset, ::System::Int64 loadSize, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_LOAD_OFFSET))(this, binder, path, fileOffset, loadSize, buffer);
		}

		::CriWare::CriFsLoader_Status GetStatus()
		{
			return ((::CriWare::CriFsLoader_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_GETSTATUS_OFFSET))(this);
		}

		::System::Void SetReadUnitSize(::System::Int32 unit_size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_SETREADUNITSIZE_OFFSET))(this, unit_size);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_FINALIZE_OFFSET))(this);
		}

		static ::System::Int32 criFsLoader_Create(::System::IntPtr& loader)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_CREATE_OFFSET))(loader);
		}

		static ::System::Int32 criFsLoader_Destroy(::System::IntPtr loader)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_DESTROY_OFFSET))(loader);
		}

		static ::System::Int32 criFsLoader_Load(::System::IntPtr loader, ::System::IntPtr binder, ::System::String* path, ::System::Int64 offset, ::System::Int64 load_size, ::System::IntPtr buffer, ::System::Int64 buffer_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::Int64, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_LOAD_OFFSET))(loader, binder, path, offset, load_size, buffer, buffer_size);
		}

		static ::System::Int32 criFsLoader_GetStatus(::System::IntPtr loader, ::CriWare::CriFsLoader_Status& status)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriFsLoader_Status&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_GETSTATUS_OFFSET))(loader, status);
		}

		static ::System::Int32 criFsLoader_SetReadUnitSize(::System::IntPtr loader, ::System::Int64 unit_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_SETREADUNITSIZE_OFFSET))(loader, unit_size);
		}
	};
}
