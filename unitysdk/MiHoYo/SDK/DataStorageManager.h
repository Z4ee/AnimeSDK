#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_DATASTORAGEMANAGER_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x17520010)
#define MIHOYO_SDK_DATASTORAGEMANAGER_DELETESTRINGINCACHE_OFFSET UNITYSDK_OFFSET(0x175206C0)
#define MIHOYO_SDK_DATASTORAGEMANAGER_DELETESTRING_OFFSET UNITYSDK_OFFSET(0x17520620)
#define MIHOYO_SDK_DATASTORAGEMANAGER_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1751FBB0)
#define MIHOYO_SDK_DATASTORAGEMANAGER_GETENCODEVALUE_OFFSET UNITYSDK_OFFSET(0x17520750)
#define MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRINGFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1751FF80)
#define MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRINGWITHENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x17520430)
#define MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x174F0D20)
#define MIHOYO_SDK_DATASTORAGEMANAGER_SAVESTRINGTOCACHE_OFFSET UNITYSDK_OFFSET(0x1751FAA0)
#define MIHOYO_SDK_DATASTORAGEMANAGER_SAVESTRING_OFFSET UNITYSDK_OFFSET(0x174F0BA0)
#define MIHOYO_SDK_DATASTORAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17520890)
#define MIHOYO_SDK_DATASTORAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x175207C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DataStorageManager_TypeDefinitionIndex = 7109;

	class DataStorageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DataStorageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DataStorageManager**)Il2CppClass::FromTypeDefinitionIndex(DataStorageManager_TypeDefinitionIndex)->GetStaticField(0x7A0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dataCache; // 0x10
		::Il2CppArray<::System::Byte>* Keys; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SaveString(::System::String* key, ::System::String* value, ::System::Boolean isEncode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_SAVESTRING_OFFSET))(this, key, value, isEncode);
		}

		::System::String* LoadString(::System::String* key, ::System::Boolean isDecode)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRING_OFFSET))(this, key, isDecode);
		}

		::System::String* LoadStringWithEncryptionKey(::System::String* key, ::System::String* strEncryptionKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRINGWITHENCRYPTIONKEY_OFFSET))(this, key, strEncryptionKey);
		}

		::System::Void DeleteString(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_DELETESTRING_OFFSET))(this, key);
		}

		::System::Void DeleteStringInCache(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_DELETESTRINGINCACHE_OFFSET))(this, key);
		}

		::System::Void SaveStringToCache(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_SAVESTRINGTOCACHE_OFFSET))(this, key, value);
		}

		::System::String* LoadStringFromCache(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRINGFROMCACHE_OFFSET))(this, key);
		}

		::System::String* EncodeString(::System::String* encryptString, ::System::String* encodeValue)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_ENCODESTRING_OFFSET))(this, encryptString, encodeValue);
		}

		::System::String* DecodeString(::System::String* decryptString, ::System::String* encodeValue)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_DECODESTRING_OFFSET))(this, decryptString, encodeValue);
		}

		::System::String* GetEncodeValue(::System::String* encodeStrnig)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_GETENCODEVALUE_OFFSET))(this, encodeStrnig);
		}
	};
}
