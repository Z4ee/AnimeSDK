#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPREFSPECULAR_GETBASECHARACTERFILTER_OFFSET UNITYSDK_OFFSET(0xD7A5720)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPREFSPECULAR_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7A5790)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPREFSPECULAR__CTOR_OFFSET UNITYSDK_OFFSET(0xD7A5AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropRefSpecular_TypeDefinitionIndex = 69941;

	class MonoEffectPluginCharaPropRefSpecular : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean _EnableRefSpecular; // 0x40
		::System::Boolean Toggle_SpecularCubeMap; // 0x41
		::UnityEngine::Texture* _SpecularCubeMap; // 0x48
		::System::Boolean Toggle_RefRangeTex; // 0x50
		::UnityEngine::Texture2D* _RefRangeTex; // 0x58
		::System::Boolean Toggle_RefIntensity; // 0x60
		::System::Single _RefIntensity; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPREFSPECULAR__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetBaseCharacterFilter()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPREFSPECULAR_GETBASECHARACTERFILTER_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPREFSPECULAR_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
