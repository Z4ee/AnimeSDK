#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_GETABTESTKEY_OFFSET UNITYSDK_OFFSET(0x19C99B30)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19C99A90)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_LOADALLABTESTINFO_OFFSET UNITYSDK_OFFSET(0x19C99B20)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_REQUESTALLABTESTINFO_OFFSET UNITYSDK_OFFSET(0x19C99B10)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_SAVEABRESULT_OFFSET UNITYSDK_OFFSET(0x19C99BD0)
#define MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C99B00)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int ABTestManager_TypeDefinitionIndex = 19636;

	class ABTestManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::ABTestManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::OS::ABTestManager**)Il2CppClass::FromTypeDefinitionIndex(ABTestManager_TypeDefinitionIndex)->GetStaticField(0xAF90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::OS::ABTestManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::OS::ABTestManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void RequestAllABTestInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_REQUESTALLABTESTINFO_OFFSET))(this);
		}

		::System::Void LoadAllABTestInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_LOADALLABTESTINFO_OFFSET))(this);
		}

		::System::String* GetABTestKey(::System::String* storageKey, ::System::String* accountId)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_GETABTESTKEY_OFFSET))(this, storageKey, accountId);
		}

		::System::Boolean SaveABResult(::System::String* key, ::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_ABTESTMANAGER_SAVEABRESULT_OFFSET))(this, key, data);
		}
	};
}
