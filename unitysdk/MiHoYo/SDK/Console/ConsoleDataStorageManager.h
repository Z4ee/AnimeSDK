#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_DELETESTRINGINCACHE_OFFSET UNITYSDK_OFFSET(0x17433690)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_DELETESTRING_OFFSET UNITYSDK_OFFSET(0x174333B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x17432C80)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17432B20)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_LOADSTRINGFROMCACHE_OFFSET UNITYSDK_OFFSET(0x17433320)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x17432FF0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_SAVESTRINGTOCACHE_OFFSET UNITYSDK_OFFSET(0x17432F80)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_SAVESTRING_OFFSET UNITYSDK_OFFSET(0x17432D90)
#define MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17432C00)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleDataStorageManager_TypeDefinitionIndex = 7711;

	class ConsoleDataStorageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleDataStorageManager** StaticGet__consoleInstance()
		{
			return (::MiHoYo::SDK::Console::ConsoleDataStorageManager**)Il2CppClass::FromTypeDefinitionIndex(ConsoleDataStorageManager_TypeDefinitionIndex)->GetStaticField(0x197D0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _dataCache; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::ConsoleDataStorageManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::ConsoleDataStorageManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::String* GetFilePath(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_GETFILEPATH_OFFSET))(this, key);
		}

		::System::Void SaveString(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_SAVESTRING_OFFSET))(this, key, value);
		}

		::System::String* LoadString(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_LOADSTRING_OFFSET))(this, key);
		}

		::System::Void DeleteString(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_DELETESTRING_OFFSET))(this, key);
		}

		::System::Void DeleteStringInCache(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_DELETESTRINGINCACHE_OFFSET))(this, key);
		}

		::System::Void SaveStringToCache(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_SAVESTRINGTOCACHE_OFFSET))(this, key, value);
		}

		::System::String* LoadStringFromCache(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDATASTORAGEMANAGER_LOADSTRINGFROMCACHE_OFFSET))(this, key);
		}
	};
}
