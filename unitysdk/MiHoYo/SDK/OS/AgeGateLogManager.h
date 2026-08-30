#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_OS_AGEGATELOGMANAGER_GETMINORLOGSTOREURL_OFFSET UNITYSDK_OFFSET(0x1B9B86F0)
#define MIHOYO_SDK_OS_AGEGATELOGMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B9B7730)
#define MIHOYO_SDK_OS_AGEGATELOGMANAGER_PARSELOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B9B8C00)
#define MIHOYO_SDK_OS_AGEGATELOGMANAGER_SETLOGDEFAULTLEVEL_OFFSET UNITYSDK_OFFSET(0x1B9B8BE0)
#define MIHOYO_SDK_OS_AGEGATELOGMANAGER_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B9B77C0)
#define MIHOYO_SDK_OS_AGEGATELOGMANAGER_SETLOGUSCHILDTLEVEL_OFFSET UNITYSDK_OFFSET(0x1B9B8BF0)
#define MIHOYO_SDK_OS_AGEGATELOGMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B9B77B0)
#define MIHOYO_SDK_OS_AGEGATELOGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B77A0)

namespace MiHoYo::SDK::OS
{
	inline static constexpr unsigned int AgeGateLogManager_TypeDefinitionIndex = 8765;

	class AgeGateLogManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::OS::AgeGateLogManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::OS::AgeGateLogManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateLogManager_TypeDefinitionIndex)->GetStaticField(0x19190);
		}
		// static const ::System::String* MINOR_LOG_STORE_TOPIC; // 0x0
		// static const ::System::String* MINOR_LOG_STORE_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OS_AGEGATELOGMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::OS::AgeGateLogManager* get_Instance()
		{
			return ((::MiHoYo::SDK::OS::AgeGateLogManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_OS_AGEGATELOGMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::OS::AgeGateLogManager* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::OS::AgeGateLogManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OS_AGEGATELOGMANAGER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void SetLogLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OS_AGEGATELOGMANAGER_SETLOGLEVEL_OFFSET))(this, a1);
		}

		::System::String* GetMinorLogStoreUrl(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OS_AGEGATELOGMANAGER_GETMINORLOGSTOREURL_OFFSET))(this, a1, a2);
		}

		::System::Void SetLogDefaultLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OS_AGEGATELOGMANAGER_SETLOGDEFAULTLEVEL_OFFSET))(this);
		}

		::System::Void SetLogUSChildtLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OS_AGEGATELOGMANAGER_SETLOGUSCHILDTLEVEL_OFFSET))(this);
		}

		::System::Void ParseLogLevel(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OS_AGEGATELOGMANAGER_PARSELOGLEVEL_OFFSET))(this, a1);
		}
	};
}
