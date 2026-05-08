#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_DISPATCHER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A49BEB0)
#define MIHOYO_SDK_DISPATCHER_RUNASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A49BCD0)
#define MIHOYO_SDK_DISPATCHER_RUNASYNC_OFFSET UNITYSDK_OFFSET(0x1A49BC40)
#define MIHOYO_SDK_DISPATCHER_RUNONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1A49BD60)
#define MIHOYO_SDK_DISPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A49C100)
#define MIHOYO_SDK_DISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A49C4A0)
#define MIHOYO_SDK_DISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49C450)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dispatcher_TypeDefinitionIndex = 35112;

	class Dispatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet__actions()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x26920);
		}
		static ::MiHoYo::SDK::Dispatcher** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Dispatcher**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x26928);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet__backlog()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x26930);
		}
		static ::System::Boolean* StaticGet__queued()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x8390);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER__CCTOR_OFFSET))();
		}

		static ::System::Void RunAsync(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_RUNASYNC_OFFSET))(action);
		}

		static ::System::Void RunAsync_1(::System::Action_1<::System::Object*>* action, ::System::Object* state)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_RUNASYNC_1_OFFSET))(action, state);
		}

		static ::System::Void RunOnMainThread(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_RUNONMAINTHREAD_OFFSET))(action);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_INITIALIZE_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_UPDATE_OFFSET))(this);
		}
	};
}
