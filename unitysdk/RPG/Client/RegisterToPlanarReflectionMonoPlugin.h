#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class RegisterToPlanarReflectionBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_ADDRENDERERS_OFFSET UNITYSDK_OFFSET(0xDE69250)
#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_ADDRENDERER_OFFSET UNITYSDK_OFFSET(0xDE691C0)
#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_CLEARRENDERERS_OFFSET UNITYSDK_OFFSET(0xDE69400)
#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_GET_CURRENTRENDERERS_OFFSET UNITYSDK_OFFSET(0xDE69540)
#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_REFRESHREGISTER_OFFSET UNITYSDK_OFFSET(0xDE69490)
#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_REMOVERENDERERS_OFFSET UNITYSDK_OFFSET(0xDE69370)
#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_REMOVERENDERER_OFFSET UNITYSDK_OFFSET(0xDE692E0)
#define RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xDE695D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RegisterToPlanarReflectionMonoPlugin_TypeDefinitionIndex = 70709;

	class RegisterToPlanarReflectionMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::RegisterToPlanarReflectionBehavior*>
	{
	public:
		::System::String* NameKey; // 0x30
		::System::Boolean IfNeedRegisterLate; // 0x38
		::Il2CppArray<::UnityEngine::Renderer*>* SpecifiedRenderers; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean AddRenderer(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_ADDRENDERER_OFFSET))(this, a1);
		}

		::System::Void AddRenderers(::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_ADDRENDERERS_OFFSET))(this, a1);
		}

		::System::Boolean RemoveRenderer(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_REMOVERENDERER_OFFSET))(this, a1);
		}

		::System::Void RemoveRenderers(::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_REMOVERENDERERS_OFFSET))(this, a1);
		}

		::System::Void ClearRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_CLEARRENDERERS_OFFSET))(this);
		}

		::System::Void RefreshRegister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_REFRESHREGISTER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* get_CurrentRenderers()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGISTERTOPLANARREFLECTIONMONOPLUGIN_GET_CURRENTRENDERERS_OFFSET))(this);
		}
	};
}
