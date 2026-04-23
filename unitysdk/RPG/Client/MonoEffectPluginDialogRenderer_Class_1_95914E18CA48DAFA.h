#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class DialogRenderer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_95914E18CA48DAFA_METHOD_1_771D1B6F5DE47582_OFFSET UNITYSDK_OFFSET(0xA98B7F0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_95914E18CA48DAFA_METHOD_1_806D55EF449FEABC_OFFSET UNITYSDK_OFFSET(0xA98A740)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_95914E18CA48DAFA_METHOD_1_DFE6E6212F13CB99_OFFSET UNITYSDK_OFFSET(0xA98AFF0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_95914E18CA48DAFA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA98BFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDialogRenderer_Class_1_95914E18CA48DAFA_TypeDefinitionIndex = 64524;

	class MonoEffectPluginDialogRenderer_Class_1_95914E18CA48DAFA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::RPG::Client::DialogRenderer*>*>** StaticGet_Field_1_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::HashSet_1<::RPG::Client::DialogRenderer*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginDialogRenderer_Class_1_95914E18CA48DAFA_TypeDefinitionIndex)->GetStaticField(0x3CDE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_95914E18CA48DAFA__CCTOR_OFFSET))();
		}

		static ::System::Void Method_1_806D55EF449FEABC(::UnityEngine::GameObject* a1, ::RPG::Client::DialogRenderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_95914E18CA48DAFA_METHOD_1_806D55EF449FEABC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_DFE6E6212F13CB99(::UnityEngine::GameObject* a1, ::RPG::Client::DialogRenderer* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::Client::DialogRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_95914E18CA48DAFA_METHOD_1_DFE6E6212F13CB99_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds Method_1_771D1B6F5DE47582(::UnityEngine::GameObject* a1, ::UnityEngine::Bounds a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::GameObject*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIALOGRENDERER_CLASS_1_95914E18CA48DAFA_METHOD_1_771D1B6F5DE47582_OFFSET))(a1, a2);
		}
	};
}
