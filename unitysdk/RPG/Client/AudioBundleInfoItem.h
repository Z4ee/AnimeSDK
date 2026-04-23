#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x9D51F80)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETCONTENTMD5HASH_OFFSET UNITYSDK_OFFSET(0x9D51E00)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x9D51F00)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x9D51F40)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x9D51E90)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x9D51D70)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x9D51D30)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_GET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x9D51D50)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x9D52070)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_ISPATCH_OFFSET UNITYSDK_OFFSET(0x9D52030)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x9D51FF0)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_SETCONTENTMD5HASH_OFFSET UNITYSDK_OFFSET(0x9D51E40)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_SETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x9D51DB0)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x9D51D40)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_SET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x9D51D60)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D520B0)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D523A0)
#define RPG_CLIENT_AUDIOBUNDLEINFOITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D523B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioBundleInfoItem_TypeDefinitionIndex = 56460;

	class AudioBundleInfoItem : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::System::String* Md5; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _TaskIds_k__BackingField; // 0x20
		::System::Int32 _SubPackId_k__BackingField; // 0x28
		::System::Boolean Patch; // 0x2C
		::System::Int64 Size; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_GET_SUBPACKID_OFFSET))(this);
		}

		::System::Void set_SubPackId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_SET_SUBPACKID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TaskIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_GET_TASKIDS_OFFSET))(this);
		}

		::System::Void set_TaskIds(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_SET_TASKIDS_OFFSET))(this, value);
		}

		::System::String* GetRelativePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETRELATIVEPATH_OFFSET))(this);
		}

		::System::Void SetRelativePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_SETRELATIVEPATH_OFFSET))(this, value);
		}

		::System::String* GetContentMd5Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETCONTENTMD5HASH_OFFSET))(this);
		}

		::System::Void SetContentMd5Hash(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_SETCONTENTMD5HASH_OFFSET))(this, value);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETFILESIZE_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_GETCONTENTHASH_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBUNDLEINFOITEM___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
