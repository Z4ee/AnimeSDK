#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/ReplaceMaterialsBlock.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDD3320)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xCDD2B90)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_METHOD_6_454FB4A3C7EA73DD_OFFSET UNITYSDK_OFFSET(0xCDD3570)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_METHOD_6_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xCDD3520)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDD3420)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_TICK_OFFSET UNITYSDK_OFFSET(0xCDD2BD0)
#define RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS__CTOR_OFFSET UNITYSDK_OFFSET(0xCDD36D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_Cutscene_ReplaceMaterials_TypeDefinitionIndex = 70402;

	class Effect_Cutscene_ReplaceMaterials : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* Target; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ReplaceMaterialsBlock>* Blocks; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* NPONPIKGOII; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* GIPHDOMCKPI; // 0x40
		::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0x48

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

		::System::Void Method_6_454FB4A3C7EA73DD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CUTSCENE_REPLACEMATERIALS_METHOD_6_454FB4A3C7EA73DD_OFFSET))(this, a1);
		}
	};
}
