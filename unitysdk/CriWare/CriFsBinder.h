#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsBinder_ContentsFileInfo.h"
#include "unitysdk/CriWare/CriFsBinder_Status.h"

namespace System { class String; }

#define CRIWARE_CRIFSBINDER_BINDCPK_OFFSET UNITYSDK_OFFSET(0x11A34B40)
#define CRIWARE_CRIFSBINDER_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x11A34C30)
#define CRIWARE_CRIFSBINDER_BINDFILESECTION_OFFSET UNITYSDK_OFFSET(0x11A357E0)
#define CRIWARE_CRIFSBINDER_BINDFILE_OFFSET UNITYSDK_OFFSET(0x11A34D20)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDCPK_OFFSET UNITYSDK_OFFSET(0x11A35570)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x11A35640)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILESECTION_OFFSET UNITYSDK_OFFSET(0x11A35930)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILE_OFFSET UNITYSDK_OFFSET(0x11A35710)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_CREATE_OFFSET UNITYSDK_OFFSET(0x11A352C0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_DESTROY_OFFSET UNITYSDK_OFFSET(0x11A354F0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFOBYID_OFFSET UNITYSDK_OFFSET(0x11A36600)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x11A36A10)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFO_OFFSET UNITYSDK_OFFSET(0x11A361B0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZEBYID_OFFSET UNITYSDK_OFFSET(0x11A35EB0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x11A35D50)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x11A35BF0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x11A36CE0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_UNBIND_OFFSET UNITYSDK_OFFSET(0x11A35B70)
#define CRIWARE_CRIFSBINDER_CRIWAREF02BA103_OFFSET UNITYSDK_OFFSET(0x11A36B30)
#define CRIWARE_CRIFSBINDER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x11A35430)
#define CRIWARE_CRIFSBINDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A35340)
#define CRIWARE_CRIFSBINDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A36D70)
#define CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x11A36690)
#define CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFO_1_OFFSET UNITYSDK_OFFSET(0x11A363A0)
#define CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFO_OFFSET UNITYSDK_OFFSET(0x11A35F40)
#define CRIWARE_CRIFSBINDER_GETFILESIZE_1_OFFSET UNITYSDK_OFFSET(0x11A35E00)
#define CRIWARE_CRIFSBINDER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x11A35C80)
#define CRIWARE_CRIFSBINDER_GETNUMCONTENTSFILES_OFFSET UNITYSDK_OFFSET(0x11A36AB0)
#define CRIWARE_CRIFSBINDER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x11A34E90)
#define CRIWARE_CRIFSBINDER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x11A36D60)
#define CRIWARE_CRIFSBINDER_SETPRIORITY_OFFSET UNITYSDK_OFFSET(0x11A36BB0)
#define CRIWARE_CRIFSBINDER_UNBIND_OFFSET UNITYSDK_OFFSET(0x11A35A50)
#define CRIWARE_CRIFSBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A35030)

namespace CriWare
{
	inline static constexpr unsigned int CriFsBinder_TypeDefinitionIndex = 31124;

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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::UInt32 BindCpk(::CriWare::CriFsBinder* srcBinder, ::System::String* path)
		{
			return ((::System::UInt32(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_BINDCPK_OFFSET))(this, srcBinder, path);
		}

		::System::UInt32 BindDirectory(::CriWare::CriFsBinder* srcBinder, ::System::String* path)
		{
			return ((::System::UInt32(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_BINDDIRECTORY_OFFSET))(this, srcBinder, path);
		}

		::System::UInt32 BindFile(::CriWare::CriFsBinder* srcBinder, ::System::String* path)
		{
			return ((::System::UInt32(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_BINDFILE_OFFSET))(this, srcBinder, path);
		}

		::System::UInt32 BindFileSection(::CriWare::CriFsBinder* srcBinder, ::System::String* path, ::System::UInt64 offset, ::System::Int32 size, ::System::String* sectionName)
		{
			return ((::System::UInt32(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::UInt64, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_BINDFILESECTION_OFFSET))(this, srcBinder, path, offset, size, sectionName);
		}

		static ::System::Void Unbind(::System::UInt32 bindId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_UNBIND_OFFSET))(bindId);
		}

		static ::CriWare::CriFsBinder_Status GetStatus(::System::UInt32 bindId)
		{
			return ((::CriWare::CriFsBinder_Status(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETSTATUS_OFFSET))(bindId);
		}

		::System::Int64 GetFileSize(::System::String* path)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETFILESIZE_OFFSET))(this, path);
		}

		::System::Int64 GetFileSize_1(::System::Int32 id)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETFILESIZE_1_OFFSET))(this, id);
		}

		::System::Boolean GetContentsFileInfo(::System::String* path, ::CriWare::CriFsBinder_ContentsFileInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriFsBinder_ContentsFileInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFO_OFFSET))(this, path, info);
		}

		::System::Boolean GetContentsFileInfo_1(::System::Int32 id, ::CriWare::CriFsBinder_ContentsFileInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriFsBinder_ContentsFileInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFO_1_OFFSET))(this, id, info);
		}

		static ::System::Boolean GetContentsFileInfoByIndex(::System::UInt32 bindId, ::System::Int32 index, ::System::Int32 numFiles, ::Il2CppArray<::CriWare::CriFsBinder_ContentsFileInfo>*& info)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::Il2CppArray<::CriWare::CriFsBinder_ContentsFileInfo>*&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETCONTENTSFILEINFOBYINDEX_OFFSET))(bindId, index, numFiles, info);
		}

		static ::System::Int32 GetNumContentsFiles(::System::UInt32 bindId)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETNUMCONTENTSFILES_OFFSET))(bindId);
		}

		static ::System::Void SetPriority(::System::UInt32 bindId, ::System::Int32 priority)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_SETPRIORITY_OFFSET))(bindId, priority);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_FINALIZE_OFFSET))(this);
		}

		static ::System::UInt32 criFsBinder_Create(::System::IntPtr& binder)
		{
			return ((::System::UInt32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_CREATE_OFFSET))(binder);
		}

		static ::System::UInt32 criFsBinder_Destroy(::System::IntPtr binder)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_DESTROY_OFFSET))(binder);
		}

		static ::System::UInt32 criFsBinder_BindCpk(::System::IntPtr binder, ::System::IntPtr srcBinder, ::System::String* path, ::System::IntPtr work, ::System::Int32 worksize, ::System::UInt32& bindId)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDCPK_OFFSET))(binder, srcBinder, path, work, worksize, bindId);
		}

		static ::System::UInt32 criFsBinder_BindDirectory(::System::IntPtr binder, ::System::IntPtr srcBinder, ::System::String* path, ::System::IntPtr work, ::System::Int32 worksize, ::System::UInt32& bindId)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDDIRECTORY_OFFSET))(binder, srcBinder, path, work, worksize, bindId);
		}

		static ::System::UInt32 criFsBinder_BindFile(::System::IntPtr binder, ::System::IntPtr srcBinder, ::System::String* path, ::System::IntPtr work, ::System::Int32 worksize, ::System::UInt32& bindId)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILE_OFFSET))(binder, srcBinder, path, work, worksize, bindId);
		}

		static ::System::UInt32 criFsBinder_BindFileSection(::System::IntPtr binder, ::System::IntPtr srcBinder, ::System::String* path, ::System::UInt64 offset, ::System::Int32 size, ::System::String* sectionName, ::System::IntPtr work, ::System::Int32 worksize, ::System::UInt32& bindId)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::UInt64, ::System::Int32, ::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILESECTION_OFFSET))(binder, srcBinder, path, offset, size, sectionName, work, worksize, bindId);
		}

		static ::System::Int32 criFsBinder_Unbind(::System::UInt32 bindId)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_UNBIND_OFFSET))(bindId);
		}

		static ::System::Int32 criFsBinder_GetStatus(::System::UInt32 bindId, ::CriWare::CriFsBinder_Status& status)
		{
			return ((::System::Int32(*)(::System::UInt32, ::CriWare::CriFsBinder_Status&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETSTATUS_OFFSET))(bindId, status);
		}

		static ::System::Int32 criFsBinder_GetFileSize(::System::IntPtr binder, ::System::String* path, ::System::Int64& size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZE_OFFSET))(binder, path, size);
		}

		static ::System::Int32 criFsBinder_GetFileSizeById(::System::IntPtr binder, ::System::Int32 id, ::System::Int64& size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZEBYID_OFFSET))(binder, id, size);
		}

		static ::System::Int32 criFsBinder_SetPriority(::System::UInt32 bindId, ::System::Int32 priority)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_SETPRIORITY_OFFSET))(bindId, priority);
		}

		static ::System::Int32 criFsBinder_GetContentsFileInfo(::System::IntPtr binder, ::System::String* path, ::System::IntPtr info)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFO_OFFSET))(binder, path, info);
		}

		static ::System::Int32 criFsBinder_GetContentsFileInfoById(::System::IntPtr binder, ::System::Int32 id, ::System::IntPtr info)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFOBYID_OFFSET))(binder, id, info);
		}

		static ::System::Int32 criFsBinder_GetContentsFileInfoByIndex(::System::UInt32 id, ::System::Int32 index, ::System::IntPtr info, ::System::Int32 num)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETCONTENTSFILEINFOBYINDEX_OFFSET))(id, index, info, num);
		}

		static ::System::Int32 CRIWAREF02BA103(::System::UInt32 id)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIWAREF02BA103_OFFSET))(id);
		}
	};
}
