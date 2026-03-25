#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialReplaceUnit.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CDA7A0)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CDA6E0)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_METHOD_6_334241B7253414E6_OFFSET UNITYSDK_OFFSET(0x9CDA800)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_METHOD_6_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x9CDAE50)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CDA720)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_TICK_OFFSET UNITYSDK_OFFSET(0x9CDA910)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x9CDB180)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CDB190)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9CDB200)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginReplaceMaterial_TypeDefinitionIndex = 57367;

	class MonoEffectPluginReplaceMaterial : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean EnableMaterialReplace; // 0x28
		::Il2CppArray<::RPG::Client::MaterialReplaceUnit>* ReplaceUnits; // 0x30
		::System::Boolean Field_6_2; // 0x38
		::Il2CppArray<::UnityEngine::Renderer*>* Field_6_3; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_6_4; // 0x48
		::System::Boolean Field_6_5; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_6_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_METHOD_6_749948B663FCCCEF_OFFSET))(this);
		}

		::System::Void Method_6_334241B7253414E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_METHOD_6_334241B7253414E6_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
