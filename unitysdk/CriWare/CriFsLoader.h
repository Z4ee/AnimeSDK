#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsLoader_Status.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIFSLOADER_CRIFSLOADER_CREATE_OFFSET UNITYSDK_OFFSET(0x12C07AE0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_DECOMPRESSDATA_OFFSET UNITYSDK_OFFSET(0x12C084E0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_DESTROY_OFFSET UNITYSDK_OFFSET(0x12C07CB0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x12C08610)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADBYID_OFFSET UNITYSDK_OFFSET(0x12C07F30)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADWITHOUTDECOMPRESSIONBYID_OFFSET UNITYSDK_OFFSET(0x12C08320)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADWITHOUTDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x12C08120)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x12C07D30)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_SETREADUNITSIZE_OFFSET UNITYSDK_OFFSET(0x12C086A0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_STOP_OFFSET UNITYSDK_OFFSET(0x12C08590)
#define CRIWARE_CRIFSLOADER_DECOMPRESSDATA_OFFSET UNITYSDK_OFFSET(0x12C083F0)
#define CRIWARE_CRIFSLOADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x12C07B60)
#define CRIWARE_CRIFSLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C07030)
#define CRIWARE_CRIFSLOADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x12C08730)
#define CRIWARE_CRIFSLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x12C079B0)
#define CRIWARE_CRIFSLOADER_LOADBYID_OFFSET UNITYSDK_OFFSET(0x12C07E20)
#define CRIWARE_CRIFSLOADER_LOADWITHOUTDECOMPRESSIONBYID_OFFSET UNITYSDK_OFFSET(0x12C08210)
#define CRIWARE_CRIFSLOADER_LOADWITHOUTDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x12C08000)
#define CRIWARE_CRIFSLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x12C07890)
#define CRIWARE_CRIFSLOADER_SETREADUNITSIZE_OFFSET UNITYSDK_OFFSET(0x12C07800)
#define CRIWARE_CRIFSLOADER_STOP_OFFSET UNITYSDK_OFFSET(0x12C07140)
#define CRIWARE_CRIFSLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C07610)

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoader_TypeDefinitionIndex = 36839;

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

		::System::Void LoadById(::CriWare::CriFsBinder* binder, ::System::Int32 id, ::System::Int64 fileOffset, ::System::Int64 loadSize, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::Int32, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_LOADBYID_OFFSET))(this, binder, id, fileOffset, loadSize, buffer);
		}

		::System::Void LoadWithoutDecompression(::CriWare::CriFsBinder* binder, ::System::String* path, ::System::Int64 fileOffset, ::System::Int64 loadSize, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_LOADWITHOUTDECOMPRESSION_OFFSET))(this, binder, path, fileOffset, loadSize, buffer);
		}

		::System::Void LoadWithoutDecompressionById(::CriWare::CriFsBinder* binder, ::System::Int32 id, ::System::Int64 fileOffset, ::System::Int64 loadSize, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::Int32, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_LOADWITHOUTDECOMPRESSIONBYID_OFFSET))(this, binder, id, fileOffset, loadSize, buffer);
		}

		::System::Void DecompressData(::System::Int64 srcSize, ::Il2CppArray<::System::Byte>* srcBuffer, ::System::Int64 dstSize, ::Il2CppArray<::System::Byte>* dstBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_DECOMPRESSDATA_OFFSET))(this, srcSize, srcBuffer, dstSize, dstBuffer);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_STOP_OFFSET))(this);
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

		static ::System::Int32 criFsLoader_LoadById(::System::IntPtr loader, ::System::IntPtr binder, ::System::Int32 id, ::System::Int64 offset, ::System::Int64 load_size, ::System::IntPtr buffer, ::System::Int64 buffer_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int64, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADBYID_OFFSET))(loader, binder, id, offset, load_size, buffer, buffer_size);
		}

		static ::System::Int32 criFsLoader_Stop(::System::IntPtr loader)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_STOP_OFFSET))(loader);
		}

		static ::System::Int32 criFsLoader_GetStatus(::System::IntPtr loader, ::CriWare::CriFsLoader_Status& status)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriFsLoader_Status&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_GETSTATUS_OFFSET))(loader, status);
		}

		static ::System::Int32 criFsLoader_SetReadUnitSize(::System::IntPtr loader, ::System::Int64 unit_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_SETREADUNITSIZE_OFFSET))(loader, unit_size);
		}

		static ::System::Int32 criFsLoader_LoadWithoutDecompression(::System::IntPtr loader, ::System::IntPtr binder, ::System::String* path, ::System::Int64 offset, ::System::Int64 load_size, ::System::IntPtr buffer, ::System::Int64 buffer_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::Int64, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADWITHOUTDECOMPRESSION_OFFSET))(loader, binder, path, offset, load_size, buffer, buffer_size);
		}

		static ::System::Int32 criFsLoader_LoadWithoutDecompressionById(::System::IntPtr loader, ::System::IntPtr binder, ::System::Int32 id, ::System::Int64 offset, ::System::Int64 load_size, ::System::IntPtr buffer, ::System::Int64 buffer_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int64, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADWITHOUTDECOMPRESSIONBYID_OFFSET))(loader, binder, id, offset, load_size, buffer, buffer_size);
		}

		static ::System::Int32 criFsLoader_DecompressData(::System::IntPtr loader, ::System::IntPtr src, ::System::Int64 src_size, ::System::IntPtr dst, ::System::Int64 dst_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_DECOMPRESSDATA_OFFSET))(loader, src, src_size, dst, dst_size);
		}
	};
}
