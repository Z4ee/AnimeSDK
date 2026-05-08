#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Tar { class TarHeader; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_ADJUSTENTRYNAME_OFFSET UNITYSDK_OFFSET(0x1C45ED60)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_CLONE_OFFSET UNITYSDK_OFFSET(0x1C45D8A0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_CREATEENTRYFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C45DE70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_CREATETARENTRY_OFFSET UNITYSDK_OFFSET(0x1C45DB60)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C45E430)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GETDIRECTORYENTRIES_OFFSET UNITYSDK_OFFSET(0x1C45EA70)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GETFILETARHEADER_OFFSET UNITYSDK_OFFSET(0x1C45DF00)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C45E510)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_FILE_OFFSET UNITYSDK_OFFSET(0x1C45E8D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C45E690)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C45E750)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_ISDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C45E980)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_MODTIME_OFFSET UNITYSDK_OFFSET(0x1C45E890)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C45DAC0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C45E8E0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_TARHEADER_OFFSET UNITYSDK_OFFSET(0x1C45E640)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1C45E650)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1C45E6D0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_ISDESCENDENT_OFFSET UNITYSDK_OFFSET(0x1C45E5A0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_NAMETARHEADER_OFFSET UNITYSDK_OFFSET(0x1C45DBF0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SETIDS_OFFSET UNITYSDK_OFFSET(0x1C45E7C0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SETNAMES_OFFSET UNITYSDK_OFFSET(0x1C45E7E0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C45E6B0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C45E770)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_MODTIME_OFFSET UNITYSDK_OFFSET(0x1C45E8B0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C45DAE0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C45E900)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1C45E670)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1C45E6F0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_WRITEENTRYHEADER_OFFSET UNITYSDK_OFFSET(0x1C45ED40)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C45D6C0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C45D730)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45D670)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int TarEntry_TypeDefinitionIndex = 6685;

	class TarEntry : public ::System::Object
	{
	public:
		::System::String* file; // 0x10
		::ICSharpCode::SharpZipLib::Tar::TarHeader* header; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* headerBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY__CTOR_1_OFFSET))(this, headerBuffer);
		}

		::System::Void _ctor_2(::ICSharpCode::SharpZipLib::Tar::TarHeader* header)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarHeader*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY__CTOR_2_OFFSET))(this, header);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_CLONE_OFFSET))(this);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateTarEntry(::System::String* name)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_CREATETARENTRY_OFFSET))(name);
		}

		static ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntryFromFile(::System::String* fileName)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_CREATEENTRYFROMFILE_OFFSET))(fileName);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsDescendent(::ICSharpCode::SharpZipLib::Tar::TarEntry* toTest)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_ISDESCENDENT_OFFSET))(this, toTest);
		}

		::ICSharpCode::SharpZipLib::Tar::TarHeader* get_TarHeader()
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarHeader*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_TARHEADER_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_UserId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_USERID_OFFSET))(this, value);
		}

		::System::Int32 get_GroupId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_GROUPID_OFFSET))(this, value);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_USERNAME_OFFSET))(this, value);
		}

		::System::String* get_GroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_GROUPNAME_OFFSET))(this);
		}

		::System::Void set_GroupName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_GROUPNAME_OFFSET))(this, value);
		}

		::System::Void SetIds(::System::Int32 userId, ::System::Int32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SETIDS_OFFSET))(this, userId, groupId);
		}

		::System::Void SetNames(::System::String* userName, ::System::String* groupName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SETNAMES_OFFSET))(this, userName, groupName);
		}

		::System::DateTime get_ModTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_MODTIME_OFFSET))(this);
		}

		::System::Void set_ModTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_MODTIME_OFFSET))(this, value);
		}

		::System::String* get_File()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_FILE_OFFSET))(this);
		}

		::System::Int64 get_Size()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_SET_SIZE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDirectory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GET_ISDIRECTORY_OFFSET))(this);
		}

		::System::Void GetFileTarHeader(::ICSharpCode::SharpZipLib::Tar::TarHeader* header, ::System::String* file)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Tar::TarHeader*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GETFILETARHEADER_OFFSET))(this, header, file);
		}

		::Il2CppArray<::ICSharpCode::SharpZipLib::Tar::TarEntry*>* GetDirectoryEntries()
		{
			return ((::Il2CppArray<::ICSharpCode::SharpZipLib::Tar::TarEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_GETDIRECTORYENTRIES_OFFSET))(this);
		}

		::System::Void WriteEntryHeader(::Il2CppArray<::System::Byte>* outBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_WRITEENTRYHEADER_OFFSET))(this, outBuffer);
		}

		static ::System::Void AdjustEntryName(::Il2CppArray<::System::Byte>* buffer, ::System::String* newName)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_ADJUSTENTRYNAME_OFFSET))(buffer, newName);
		}

		static ::System::Void NameTarHeader(::ICSharpCode::SharpZipLib::Tar::TarHeader* header, ::System::String* name)
		{
			return ((::System::Void(*)(::ICSharpCode::SharpZipLib::Tar::TarHeader*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARENTRY_NAMETARHEADER_OFFSET))(header, name);
		}
	};
}
