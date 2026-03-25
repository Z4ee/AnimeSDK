#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0xA770E00)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETCONTENTMD5HASH_OFFSET UNITYSDK_OFFSET(0xA770CD0)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0xA770D10)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0xA770DC0)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0xA770D50)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xA770C90)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0xA770C50)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_GET_TASKIDS_OFFSET UNITYSDK_OFFSET(0xA770C70)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0xA770EF0)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_ISPATCH_OFFSET UNITYSDK_OFFSET(0xA770EB0)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0xA770E70)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0xA770C60)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_SET_TASKIDS_OFFSET UNITYSDK_OFFSET(0xA770C80)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA770F30)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA771220)
#define RPG_CLIENT_VIDEOBUNDLEINFOITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA771230)

namespace RPG::Client
{
	inline static constexpr unsigned int VideoBundleInfoItem_TypeDefinitionIndex = 49694;

	class VideoBundleInfoItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TaskIds_k__BackingField; // 0x10
		::System::String* Path; // 0x18
		::System::String* Md5; // 0x20
		::System::Int64 Size; // 0x28
		::System::Int32 _SubPackId_k__BackingField; // 0x30
		::System::Boolean Patch; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_GET_SUBPACKID_OFFSET))(this);
		}

		::System::Void set_SubPackId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_SET_SUBPACKID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TaskIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_GET_TASKIDS_OFFSET))(this);
		}

		::System::Void set_TaskIds(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_SET_TASKIDS_OFFSET))(this, value);
		}

		::System::String* GetRelativePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETRELATIVEPATH_OFFSET))(this);
		}

		::System::String* GetContentMd5Hash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETCONTENTMD5HASH_OFFSET))(this);
		}

		::System::String* GetDownloadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::String* GetLoadRelativeBundleLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETLOADRELATIVEBUNDLELOADPATH_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETFILESIZE_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_GETCONTENTHASH_OFFSET))(this);
		}

		::System::Boolean IsTmpFileNameAddFileHash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_ISTMPFILENAMEADDFILEHASH_OFFSET))(this);
		}

		::System::Boolean IsPatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_ISPATCH_OFFSET))(this);
		}

		::System::Boolean IsNeedWriteContentHashFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_ISNEEDWRITECONTENTHASHFILE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOBUNDLEINFOITEM___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
