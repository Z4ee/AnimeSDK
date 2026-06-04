#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_SDKDISPATCHER_CHECKINVOKE_OFFSET UNITYSDK_OFFSET(0xA1FD9A0)
#define MIHOYO_SDK_SDKDISPATCHER_INITAPM_OFFSET UNITYSDK_OFFSET(0xA1FD810)
#define MIHOYO_SDK_SDKDISPATCHER_INIT_OFFSET UNITYSDK_OFFSET(0xA1FD970)
#define MIHOYO_SDK_SDKDISPATCHER_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0xA1FDCA0)
#define MIHOYO_SDK_SDKDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1FEB00)
#define MIHOYO_SDK_SDKDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1FEAF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDispatcher_TypeDefinitionIndex = 43667;

	class SDKDispatcher : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x13210);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_h5logFilteredFuncList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x13218);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x13220);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x13228);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_supportModuleList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x13230);
		}
		static ::System::Int32* StaticGet_initialVOXThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x7960);
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

		static ::System::Boolean CheckInvoke(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_CHECKINVOKE_OFFSET))(a1);
		}

		static ::System::String* SDKInvoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDISPATCHER_SDKINVOKE_OFFSET))(a1, a2, a3);
		}
	};
}
