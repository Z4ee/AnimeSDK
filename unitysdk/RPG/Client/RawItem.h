#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RAWITEM_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x17B84060)
#define RPG_CLIENT_RAWITEM_GETCONTENTMD5HASH_OFFSET UNITYSDK_OFFSET(0x17B83F30)
#define RPG_CLIENT_RAWITEM_GETDOWNLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x17B83F70)
#define RPG_CLIENT_RAWITEM_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x17B84020)
#define RPG_CLIENT_RAWITEM_GETLOADRELATIVEBUNDLELOADPATH_OFFSET UNITYSDK_OFFSET(0x17B83FB0)
#define RPG_CLIENT_RAWITEM_GETRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x17B83EF0)
#define RPG_CLIENT_RAWITEM_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x17B83EB0)
#define RPG_CLIENT_RAWITEM_GET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x17B83ED0)
#define RPG_CLIENT_RAWITEM_ISNEEDWRITECONTENTHASHFILE_OFFSET UNITYSDK_OFFSET(0x17B84150)
#define RPG_CLIENT_RAWITEM_ISPATCH_OFFSET UNITYSDK_OFFSET(0x17B84110)
#define RPG_CLIENT_RAWITEM_ISTMPFILENAMEADDFILEHASH_OFFSET UNITYSDK_OFFSET(0x17B840D0)
#define RPG_CLIENT_RAWITEM_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x17B83EC0)
#define RPG_CLIENT_RAWITEM_SET_TASKIDS_OFFSET UNITYSDK_OFFSET(0x17B83EE0)
#define RPG_CLIENT_RAWITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B84190)
#define RPG_CLIENT_RAWITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17B84480)
#define RPG_CLIENT_RAWITEM___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B84490)

namespace RPG::Client
{
	inline static constexpr unsigned int RawItem_TypeDefinitionIndex = 37829;

	class RawItem : public ::System::Object
	{
	public:
		::System::String* Md5; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TaskIds_k__BackingField; // 0x18
		::System::String* Path; // 0x20
		::System::Int32 _SubPackId_k__BackingField; // 0x28
		::System::Boolean Patch; // 0x2C
		::System::Int64 Size; // 0x30

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
