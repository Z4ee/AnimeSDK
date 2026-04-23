#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSPECULARLIGHTING_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA981AF0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSPECULARLIGHTING_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xA981B30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSPECULARLIGHTING__CTOR_OFFSET UNITYSDK_OFFSET(0xA982A80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSPECULARLIGHTING___IFIXBASEPROXY_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xA982AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropSpecularLighting_TypeDefinitionIndex = 64509;

	class MonoEffectPluginCharaPropSpecularLighting : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_SpecularShininess; // 0x40
		::System::Single _SpecularShininess; // 0x44
		::System::Boolean Toggle_SpecularIntensity; // 0x48
		::System::Single _SpecularIntensity; // 0x4C
		::System::Boolean Toggle_SColor0; // 0x50
		::UnityEngine::Color _SpecularColor0; // 0x54
		::System::Boolean Toggle_SColor1; // 0x64
		::UnityEngine::Color _SpecularColor1; // 0x68
		::System::Boolean Toggle_SColor2; // 0x78
		::UnityEngine::Color _SpecularColor2; // 0x7C
		::System::Boolean Toggle_SColor3; // 0x8C
		::UnityEngine::Color _SpecularColor3; // 0x90
		::System::Boolean Toggle_SColor4; // 0xA0
		::UnityEngine::Color _SpecularColor4; // 0xA4
		::System::Boolean Toggle_SColor5; // 0xB4
		::UnityEngine::Color _SpecularColor5; // 0xB8
		::System::Boolean Toggle_SColor6; // 0xC8
		::UnityEngine::Color _SpecularColor6; // 0xCC
		::System::Boolean Toggle_SColor7; // 0xDC
		::UnityEngine::Color _SpecularColor7; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSPECULARLIGHTING__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSPECULARLIGHTING_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSPECULARLIGHTING_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Boolean __iFixBaseProxy_IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSPECULARLIGHTING___IFIXBASEPROXY_ISNEEDLUTPROPERTY_OFFSET))(this);
		}
	};
}
