#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/ReplaceMaterialsBlock.h"

class Class_1_9CBC71DC5240DC00;
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9541F60)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x95417E0)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_METHOD_6_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x9542120)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_METHOD_6_98190E30F74987C1_OFFSET UNITYSDK_OFFSET(0x9542170)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9542040)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_TICK_OFFSET UNITYSDK_OFFSET(0x9541820)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0x95422B0)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9542370)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x95423E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_Cutscene_ReplaceMaterials_TypeDefinitionIndex = 57673;

	class Effect_Cutscene_ReplaceMaterials : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* Target; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ReplaceMaterialsBlock>* Blocks; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_2; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* Field_6_3; // 0x40
		::Class_1_9CBC71DC5240DC00* Field_6_4; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_TICK_OFFSET))(this, a1);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void Method_6_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_METHOD_6_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void Method_6_98190E30F74987C1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_METHOD_6_98190E30F74987C1_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
