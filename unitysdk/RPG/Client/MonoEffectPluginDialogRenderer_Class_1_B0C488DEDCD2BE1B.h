#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class DialogRenderer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_B0C488DEDCD2BE1B_METHOD_1_090CE4DB77F9395F_OFFSET UNITYSDK_OFFSET(0x191261D0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_B0C488DEDCD2BE1B_METHOD_1_6BD8E57F306C43E2_OFFSET UNITYSDK_OFFSET(0x19125970)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_B0C488DEDCD2BE1B_METHOD_1_8CD6A77102125172_OFFSET UNITYSDK_OFFSET(0x19125010)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_B0C488DEDCD2BE1B__CCTOR_OFFSET UNITYSDK_OFFSET(0x191268B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRenderer_Class_1_B0C488DEDCD2BE1B_TypeDefinitionIndex = 66858;

	class MonoEffectPluginDialogRenderer_Class_1_B0C488DEDCD2BE1B : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::RPG::Client::DialogRenderer*>*>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::RPG::Client::DialogRenderer*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRenderer_Class_1_B0C488DEDCD2BE1B_TypeDefinitionIndex)->GetStaticField(0x556B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_B0C488DEDCD2BE1B__CCTOR_OFFSET))();
		}

		static ::System::Void Method_1_8CD6A77102125172(::UnityEngine::GameObject* a1, ::RPG::Client::DialogRenderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_B0C488DEDCD2BE1B_METHOD_1_8CD6A77102125172_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_6BD8E57F306C43E2(::UnityEngine::GameObject* a1, ::RPG::Client::DialogRenderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_B0C488DEDCD2BE1B_METHOD_1_6BD8E57F306C43E2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds Method_1_090CE4DB77F9395F(::UnityEngine::GameObject* a1, ::UnityEngine::Bounds a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_B0C488DEDCD2BE1B_METHOD_1_090CE4DB77F9395F_OFFSET))(a1, a2);
		}
	};
}
