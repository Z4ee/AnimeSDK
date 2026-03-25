#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_SDKDISPATCHER_CHECKINVOKE_OFFSET UNITYSDK_OFFSET(0x8579710)
#define MIHOYO_SDK_SDKDISPATCHER_INITAPM_OFFSET UNITYSDK_OFFSET(0x85795E0)
#define MIHOYO_SDK_SDKDISPATCHER_INIT_OFFSET UNITYSDK_OFFSET(0x85796E0)
#define MIHOYO_SDK_SDKDISPATCHER_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x8579900)
#define MIHOYO_SDK_SDKDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x857A3F0)
#define MIHOYO_SDK_SDKDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x857A3E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDispatcher_TypeDefinitionIndex = 37020;

	class SDKDispatcher : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_supportModuleList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x15040);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x15048);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x15050);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x15058);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER__CCTOR_OFFSET))();
		}

		static ::System::Void InitAPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_INITAPM_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_INIT_OFFSET))();
		}

		static ::System::Boolean CheckInvoke(::System::String* funcName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_CHECKINVOKE_OFFSET))(funcName);
		}

		static ::System::String* SDKInvoke(::System::String* funcName, ::System::String* args, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_SDKINVOKE_OFFSET))(funcName, args, callback);
		}
	};
}
