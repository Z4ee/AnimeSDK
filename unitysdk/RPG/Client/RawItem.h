#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RAWITEM_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x16559480)
#define RPG_CLIENT_RAWITEM_GETCONTENTMD5HASH_OFFSET UNITYSDK_OFFSET(0x16559350)
#define RPG_CLIENT_RAWITEM_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x16559390)
#define RPG_CLIENT_RAWITEM_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x16559440)
#define RPG_CLIENT_RAWITEM_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x165593D0)
#define RPG_CLIENT_RAWITEM_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x16559310)
#define RPG_CLIENT_RAWITEM_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x165592D0)
#define RPG_CLIENT_RAWITEM_GET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x165592F0)
#define RPG_CLIENT_RAWITEM_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x16559570)
#define RPG_CLIENT_RAWITEM_ISPATCH_OFFSET UNITYSDK_OFFSET(0x16559530)
#define RPG_CLIENT_RAWITEM_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x165594F0)
#define RPG_CLIENT_RAWITEM_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x165592E0)
#define RPG_CLIENT_RAWITEM_SET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x16559300)
#define RPG_CLIENT_RAWITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x165595B0)
#define RPG_CLIENT_RAWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x165598A0)
#define RPG_CLIENT_RAWITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x165598B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RawItem_TypeDefinitionIndex = 32109;

	class RawItem : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::System::String* Md5; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _TaskIds_k__BackingField; // 0x20
		::System::Int64 Size; // 0x28
		::System::Boolean Patch; // 0x30
		::System::Int32 _SubPackId_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_GET_SUBPACKID_OFFSET))(this);
		}

		::System::Void set_SubPackId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_SET_SUBPACKID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TaskIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_GET_TASKIDS_OFFSET))(this);
		}

		::System::Void set_TaskIds(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_SET_TASKIDS_OFFSET))(this, value);
		}

		::System::String* GetRelativePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_GETRELATIVEPATH_OFFSET))(this);
		}

		::System::String* GetContentMd5Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_GETCONTENTMD5HASH_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_GETFILESIZE_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_GETCONTENTHASH_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAWITEM___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
