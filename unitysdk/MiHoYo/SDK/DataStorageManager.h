#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_DATASTORAGEMANAGER_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x1B9416A0)
#define MIHOYO_SDK_DATASTORAGEMANAGER_DELETESTRINGINCACHE_OFFSET UNITYSDK_OFFSET(0x1B941E20)
#define MIHOYO_SDK_DATASTORAGEMANAGER_DELETESTRING_OFFSET UNITYSDK_OFFSET(0x1B941D60)
#define MIHOYO_SDK_DATASTORAGEMANAGER_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x1B941160)
#define MIHOYO_SDK_DATASTORAGEMANAGER_GETENCODEVALUE_OFFSET UNITYSDK_OFFSET(0x1B941ED0)
#define MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRINGFROMCACHE_OFFSET UNITYSDK_OFFSET(0x1B941590)
#define MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRINGWITHENCRYPTIONKEY_OFFSET UNITYSDK_OFFSET(0x1B941AF0)
#define MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x1B91F880)
#define MIHOYO_SDK_DATASTORAGEMANAGER_SAVESTRINGTOCACHE_OFFSET UNITYSDK_OFFSET(0x1B941050)
#define MIHOYO_SDK_DATASTORAGEMANAGER_SAVESTRING_OFFSET UNITYSDK_OFFSET(0x1B91F700)
#define MIHOYO_SDK_DATASTORAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B942010)
#define MIHOYO_SDK_DATASTORAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B941F40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DataStorageManager_TypeDefinitionIndex = 8026;

	class DataStorageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DataStorageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DataStorageManager**)Il2CppClass::FromTypeDefinitionIndex(DataStorageManager_TypeDefinitionIndex)->GetStaticField(0x26C0);
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

		::System::Void SaveString(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_SAVESTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::String* LoadString(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRING_OFFSET))(this, a1, a2);
		}

		::System::String* LoadStringWithEncryptionKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRINGWITHENCRYPTIONKEY_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_DELETESTRING_OFFSET))(this, a1);
		}

		::System::Void DeleteStringInCache(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_DELETESTRINGINCACHE_OFFSET))(this, a1);
		}

		::System::Void SaveStringToCache(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_SAVESTRINGTOCACHE_OFFSET))(this, a1, a2);
		}

		::System::String* LoadStringFromCache(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_LOADSTRINGFROMCACHE_OFFSET))(this, a1);
		}

		::System::String* EncodeString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_ENCODESTRING_OFFSET))(this, a1, a2);
		}

		::System::String* DecodeString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_DECODESTRING_OFFSET))(this, a1, a2);
		}

		::System::String* GetEncodeValue(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATASTORAGEMANAGER_GETENCODEVALUE_OFFSET))(this, a1);
		}
	};
}
