#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsLoader_Status.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIFSLOADER_CRIFSLOADER_CREATE_OFFSET UNITYSDK_OFFSET(0x146C27E0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_DECOMPRESSDATA_OFFSET UNITYSDK_OFFSET(0x146C31E0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_DESTROY_OFFSET UNITYSDK_OFFSET(0x146C29B0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x146C3310)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADBYID_OFFSET UNITYSDK_OFFSET(0x146C2C30)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADWITHOUTDECOMPRESSIONBYID_OFFSET UNITYSDK_OFFSET(0x146C3020)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADWITHOUTDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x146C2E20)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x146C2A30)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_SETREADUNITSIZE_OFFSET UNITYSDK_OFFSET(0x146C33A0)
#define CRIWARE_CRIFSLOADER_CRIFSLOADER_STOP_OFFSET UNITYSDK_OFFSET(0x146C3290)
#define CRIWARE_CRIFSLOADER_DECOMPRESSDATA_OFFSET UNITYSDK_OFFSET(0x146C30F0)
#define CRIWARE_CRIFSLOADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x146C2860)
#define CRIWARE_CRIFSLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146C1C80)
#define CRIWARE_CRIFSLOADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x146C3430)
#define CRIWARE_CRIFSLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x146C26B0)
#define CRIWARE_CRIFSLOADER_LOADBYID_OFFSET UNITYSDK_OFFSET(0x146C2B20)
#define CRIWARE_CRIFSLOADER_LOADWITHOUTDECOMPRESSIONBYID_OFFSET UNITYSDK_OFFSET(0x146C2F10)
#define CRIWARE_CRIFSLOADER_LOADWITHOUTDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x146C2D00)
#define CRIWARE_CRIFSLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x146C2590)
#define CRIWARE_CRIFSLOADER_SETREADUNITSIZE_OFFSET UNITYSDK_OFFSET(0x146C2500)
#define CRIWARE_CRIFSLOADER_STOP_OFFSET UNITYSDK_OFFSET(0x146C1DC0)
#define CRIWARE_CRIFSLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x146C2310)

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoader_TypeDefinitionIndex = 37139;

	class CriFsLoader : public ::CriWare::CriDisposable
	{
	public:
		::System::Runtime::InteropServices::GCHandle srcGch; // 0x20
		::System::Runtime::InteropServices::GCHandle dstGch; // 0x24
		::System::IntPtr handle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Load(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4, ::Il2CppArray<::System::Byte>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_LOAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoadById(::CriWare::CriFsBinder* a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4, ::Il2CppArray<::System::Byte>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::Int32, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_LOADBYID_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoadWithoutDecompression(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4, ::Il2CppArray<::System::Byte>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_LOADWITHOUTDECOMPRESSION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoadWithoutDecompressionById(::CriWare::CriFsBinder* a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4, ::Il2CppArray<::System::Byte>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::Int32, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_LOADWITHOUTDECOMPRESSIONBYID_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DecompressData(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int64 a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_DECOMPRESSDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_STOP_OFFSET))(this);
		}

		::CriWare::CriFsLoader_Status GetStatus()
		{
			return ((::CriWare::CriFsLoader_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_GETSTATUS_OFFSET))(this);
		}

		::System::Void SetReadUnitSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_SETREADUNITSIZE_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_FINALIZE_OFFSET))(this);
		}

		static ::System::Int32 criFsLoader_Create(::System::IntPtr& a1)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_CREATE_OFFSET))(a1);
		}

		static ::System::Int32 criFsLoader_Destroy(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_DESTROY_OFFSET))(a1);
		}

		static ::System::Int32 criFsLoader_Load(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::Int64 a4, ::System::Int64 a5, ::System::IntPtr a6, ::System::Int64 a7)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::Int64, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_LOAD_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 criFsLoader_LoadById(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::IntPtr a6, ::System::Int64 a7)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int64, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADBYID_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 criFsLoader_Stop(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_STOP_OFFSET))(a1);
		}

		static ::System::Int32 criFsLoader_GetStatus(::System::IntPtr a1, ::CriWare::CriFsLoader_Status& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriFsLoader_Status&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_GETSTATUS_OFFSET))(a1, a2);
		}

		static ::System::Int32 criFsLoader_SetReadUnitSize(::System::IntPtr a1, ::System::Int64 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_SETREADUNITSIZE_OFFSET))(a1, a2);
		}

		static ::System::Int32 criFsLoader_LoadWithoutDecompression(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::Int64 a4, ::System::Int64 a5, ::System::IntPtr a6, ::System::Int64 a7)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::Int64, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADWITHOUTDECOMPRESSION_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 criFsLoader_LoadWithoutDecompressionById(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::IntPtr a6, ::System::Int64 a7)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::Int64, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_LOADWITHOUTDECOMPRESSIONBYID_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 criFsLoader_DecompressData(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int64 a3, ::System::IntPtr a4, ::System::Int64 a5)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADER_CRIFSLOADER_DECOMPRESSDATA_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
