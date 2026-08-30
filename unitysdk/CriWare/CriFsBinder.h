#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsBinder_ContentsFileInfo.h"
#include "unitysdk/CriWare/CriFsBinder_Status.h"

namespace System { class String; }

#define CRIWARE_CRIFSBINDER_BINDCPK_OFFSET UNITYSDK_OFFSET(0x1D386210)
#define CRIWARE_CRIFSBINDER_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D386300)
#define CRIWARE_CRIFSBINDER_BINDFILESECTION_OFFSET UNITYSDK_OFFSET(0x1D386F50)
#define CRIWARE_CRIFSBINDER_BINDFILE_OFFSET UNITYSDK_OFFSET(0x1D3863F0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDCPK_OFFSET UNITYSDK_OFFSET(0x1D386CE0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1D386DB0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILESECTION_OFFSET UNITYSDK_OFFSET(0x1D3870A0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILE_OFFSET UNITYSDK_OFFSET(0x1D386E80)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D386A10)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D386C60)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFOBYID_OFFSET UNITYSDK_OFFSET(0x1D387D60)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D388130)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFO_OFFSET UNITYSDK_OFFSET(0x1D387920)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZEBYID_OFFSET UNITYSDK_OFFSET(0x1D387620)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1D3874C0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1D387360)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D388400)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_UNBIND_OFFSET UNITYSDK_OFFSET(0x1D3872E0)
#define CRIWARE_CRIFSBINDER_CRIWARE2DDC95C4_OFFSET UNITYSDK_OFFSET(0x1D388250)
#define CRIWARE_CRIFSBINDER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D386BA0)
#define CRIWARE_CRIFSBINDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D386A90)
#define CRIWARE_CRIFSBINDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D388490)
#define CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D387DF0)
#define CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFO_1_OFFSET UNITYSDK_OFFSET(0x1D387B10)
#define CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFO_OFFSET UNITYSDK_OFFSET(0x1D3876B0)
#define CRIWARE_CRIFSBINDER_GETFILESIZE_1_OFFSET UNITYSDK_OFFSET(0x1D387570)
#define CRIWARE_CRIFSBINDER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1D3873F0)
#define CRIWARE_CRIFSBINDER_GETNUMCONTENTSFILES_OFFSET UNITYSDK_OFFSET(0x1D3881D0)
#define CRIWARE_CRIFSBINDER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1D3866A0)
#define CRIWARE_CRIFSBINDER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1D388480)
#define CRIWARE_CRIFSBINDER_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1D3882D0)
#define CRIWARE_CRIFSBINDER_UNBIND_OFFSET UNITYSDK_OFFSET(0x1D3871C0)
#define CRIWARE_CRIFSBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D386820)

namespace CriWare
{
	inline static constexpr unsigned int CriFsBinder_TypeDefinitionIndex = 38805;

	class CriFsBinder : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::UInt32 BindCpk(::CriWare::CriFsBinder* a1, ::System::String* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_BINDCPK_OFFSET))(this, a1, a2);
		}

		::System::UInt32 BindDirectory(::CriWare::CriFsBinder* a1, ::System::String* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_BINDDIRECTORY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 BindFile(::CriWare::CriFsBinder* a1, ::System::String* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_BINDFILE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 BindFileSection(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::UInt64 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::UInt64, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_BINDFILESECTION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void Unbind(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_UNBIND_OFFSET))(a1);
		}

		static ::CriWare::CriFsBinder_Status GetStatus(::System::UInt32 a1)
		{
			return ((::CriWare::CriFsBinder_Status(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETSTATUS_OFFSET))(a1);
		}

		::System::Int64 GetFileSize(::System::String* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETFILESIZE_OFFSET))(this, a1);
		}

		::System::Int64 GetFileSize_1(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETFILESIZE_1_OFFSET))(this, a1);
		}

		::System::Boolean GetContentsFileInfo(::System::String* a1, ::CriWare::CriFsBinder_ContentsFileInfo& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriFsBinder_ContentsFileInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetContentsFileInfo_1(::System::Int32 a1, ::CriWare::CriFsBinder_ContentsFileInfo& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriFsBinder_ContentsFileInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFO_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean GetContentsFileInfoByIndex(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::CriWare::CriFsBinder_ContentsFileInfo>*& a4)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::Il2CppArray<::CriWare::CriFsBinder_ContentsFileInfo>*&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFOBYINDEX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetNumContentsFiles(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETNUMCONTENTSFILES_OFFSET))(a1);
		}

		static ::System::Void SetPriority(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_SETPRIORITY_OFFSET))(a1, a2);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_FINALIZE_OFFSET))(this);
		}

		static ::System::UInt32 criFsBinder_Create(::System::IntPtr& a1)
		{
			return ((::System::UInt32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_CREATE_OFFSET))(a1);
		}

		static ::System::UInt32 criFsBinder_Destroy(::System::IntPtr a1)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_DESTROY_OFFSET))(a1);
		}

		static ::System::UInt32 criFsBinder_BindCpk(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::IntPtr a4, ::System::Int32 a5, ::System::UInt32& a6)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDCPK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::UInt32 criFsBinder_BindDirectory(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::IntPtr a4, ::System::Int32 a5, ::System::UInt32& a6)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDDIRECTORY_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::UInt32 criFsBinder_BindFile(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::IntPtr a4, ::System::Int32 a5, ::System::UInt32& a6)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::UInt32 criFsBinder_BindFileSection(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::UInt64 a4, ::System::Int32 a5, ::System::String* a6, ::System::IntPtr a7, ::System::Int32 a8, ::System::UInt32& a9)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::UInt64, ::System::Int32, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILESECTION_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Int32 criFsBinder_Unbind(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_UNBIND_OFFSET))(a1);
		}

		static ::System::Int32 criFsBinder_GetStatus(::System::UInt32 a1, ::CriWare::CriFsBinder_Status& a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::CriWare::CriFsBinder_Status&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETSTATUS_OFFSET))(a1, a2);
		}

		static ::System::Int32 criFsBinder_GetFileSize(::System::IntPtr a1, ::System::String* a2, ::System::Int64& a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFsBinder_GetFileSizeById(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64& a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZEBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFsBinder_SetPriority(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_SETPRIORITY_OFFSET))(a1, a2);
		}

		static ::System::Int32 criFsBinder_GetContentsFileInfo(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFsBinder_GetContentsFileInfoById(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFsBinder_GetContentsFileInfoByIndex(::System::UInt32 a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFOBYINDEX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 CRIWARE2DDC95C4(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIWARE2DDC95C4_OFFSET))(a1);
		}
	};
}
