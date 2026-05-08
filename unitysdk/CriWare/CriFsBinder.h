#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsBinder_Status.h"

namespace System { class String; }

#define CRIWARE_CRIFSBINDER_BINDCPK_OFFSET UNITYSDK_OFFSET(0x1C30D9E0)
#define CRIWARE_CRIFSBINDER_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C30DBA0)
#define CRIWARE_CRIFSBINDER_BINDFILE_OFFSET UNITYSDK_OFFSET(0x1C30DD60)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDCPK_OFFSET UNITYSDK_OFFSET(0x1C30DAD0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C30DC90)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_BINDFILE_OFFSET UNITYSDK_OFFSET(0x1C30DE50)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C30D6C0)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C30D960)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C30E250)
#define CRIWARE_CRIFSBINDER_CRIFSBINDER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C30E0F0)
#define CRIWARE_CRIFSBINDER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C30D870)
#define CRIWARE_CRIFSBINDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C30D740)
#define CRIWARE_CRIFSBINDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C30E310)
#define CRIWARE_CRIFSBINDER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C30E180)
#define CRIWARE_CRIFSBINDER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C30DF20)
#define CRIWARE_CRIFSBINDER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1C30E300)
#define CRIWARE_CRIFSBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30D470)

namespace CriWare
{
	inline static constexpr unsigned int CriFsBinder_TypeDefinitionIndex = 32756;

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

		static ::CriWare::CriFsBinder_Status GetStatus(::System::UInt32 bindId)
		{
			return ((::CriWare::CriFsBinder_Status(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETSTATUS_OFFSET))(bindId);
		}

		::System::Int64 GetFileSize(::System::String* path)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_GETFILESIZE_OFFSET))(this, path);
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

		static ::System::Int32 criFsBinder_GetStatus(::System::UInt32 bindId, ::CriWare::CriFsBinder_Status& status)
		{
			return ((::System::Int32(*)(::System::UInt32, ::CriWare::CriFsBinder_Status&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETSTATUS_OFFSET))(bindId, status);
		}

		static ::System::Int32 criFsBinder_GetFileSize(::System::IntPtr binder, ::System::String* path, ::System::Int64& size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::Int64&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CRIFSBINDER_GETFILESIZE_OFFSET))(binder, path, size);
		}
	};
}
