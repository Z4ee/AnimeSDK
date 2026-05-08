#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_SDKDISPATCHER_CHECKINVOKE_OFFSET UNITYSDK_OFFSET(0x1AE3DB60)
#define MIHOYO_SDK_SDKDISPATCHER_INITAPM_OFFSET UNITYSDK_OFFSET(0x1AE3D980)
#define MIHOYO_SDK_SDKDISPATCHER_INIT_OFFSET UNITYSDK_OFFSET(0x1AE3DB00)
#define MIHOYO_SDK_SDKDISPATCHER_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x1AE3DDF0)
#define MIHOYO_SDK_SDKDISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE3F250)
#define MIHOYO_SDK_SDKDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3F240)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDispatcher_TypeDefinitionIndex = 35081;

	class SDKDispatcher : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_h5logFilteredFuncList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x26B70);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x26B78);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x26B80);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_supportModuleList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x26B88);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x26B90);
		}
		static ::System::Int32* StaticGet_initialVOXThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SDKDispatcher_TypeDefinitionIndex)->GetStaticField(0x8410);
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
