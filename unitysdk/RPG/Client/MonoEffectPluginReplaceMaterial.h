#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialReplaceUnit.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD807CA0)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD807BE0)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_METHOD_6_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xD808350)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_METHOD_6_F77BBFBC56288301_OFFSET UNITYSDK_OFFSET(0xD807D00)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD807C20)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_TICK_OFFSET UNITYSDK_OFFSET(0xD807E30)
#define RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0xD808690)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginReplaceMaterial_TypeDefinitionIndex = 70104;

	class MonoEffectPluginReplaceMaterial : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean EnableMaterialReplace; // 0x28
		::Il2CppArray<::RPG::Client::MaterialReplaceUnit>* ReplaceUnits; // 0x30
		::System::Boolean GPJODGBCCBE; // 0x38
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* HMBAAFHNFDH; // 0x48
		::System::Boolean IOBIICPBOIH; // 0x50

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

		::System::Void Method_6_F0D9B6AAFF504D87()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_METHOD_6_F0D9B6AAFF504D87_OFFSET))(this);
		}

		::System::Void Method_6_F77BBFBC56288301()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREPLACEMATERIAL_METHOD_6_F77BBFBC56288301_OFFSET))(this);
		}
	};
}
