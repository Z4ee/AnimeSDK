#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMSHADOW_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7A73C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMSHADOW_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7A7400)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0xD7A9D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropRimShadow_TypeDefinitionIndex = 69944;

	class MonoEffectPluginCharaPropRimShadow : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_RimShadowIntensity; // 0x40
		::System::Single _RimShadowIntensity; // 0x44
		::System::Boolean Toggle_RimShadowCt; // 0x48
		::System::Single _RimShadowCt; // 0x4C
		::System::Boolean Toggle_RimShadowOffset; // 0x50
		::UnityEngine::Vector3 _RimShadowOffset; // 0x54
		::System::Boolean Toggle_RSPG0; // 0x60
		::System::Single _RimShadowWidth0; // 0x64
		::UnityEngine::Color _RimShadowColor0; // 0x68
		::System::Single _RimShadowFeather0; // 0x78
		::System::Boolean Toggle_RSPG1; // 0x7C
		::System::Single _RimShadowWidth1; // 0x80
		::UnityEngine::Color _RimShadowColor1; // 0x84
		::System::Single _RimShadowFeather1; // 0x94
		::System::Boolean Toggle_RSPG2; // 0x98
		::System::Single _RimShadowWidth2; // 0x9C
		::UnityEngine::Color _RimShadowColor2; // 0xA0
		::System::Single _RimShadowFeather2; // 0xB0
		::System::Boolean Toggle_RSPG3; // 0xB4
		::System::Single _RimShadowWidth3; // 0xB8
		::UnityEngine::Color _RimShadowColor3; // 0xBC
		::System::Single _RimShadowFeather3; // 0xCC
		::System::Boolean Toggle_RSPG4; // 0xD0
		::System::Single _RimShadowWidth4; // 0xD4
		::UnityEngine::Color _RimShadowColor4; // 0xD8
		::System::Single _RimShadowFeather4; // 0xE8
		::System::Boolean Toggle_RSPG5; // 0xEC
		::System::Single _RimShadowWidth5; // 0xF0
		::UnityEngine::Color _RimShadowColor5; // 0xF4
		::System::Single _RimShadowFeather5; // 0x104
		::System::Boolean Toggle_RSPG6; // 0x108
		::System::Single _RimShadowWidth6; // 0x10C
		::UnityEngine::Color _RimShadowColor6; // 0x110
		::System::Single _RimShadowFeather6; // 0x120
		::System::Boolean Toggle_RSPG7; // 0x124
		::System::Single _RimShadowWidth7; // 0x128
		::UnityEngine::Color _RimShadowColor7; // 0x12C
		::System::Single _RimShadowFeather7; // 0x13C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMSHADOW__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMSHADOW_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPRIMSHADOW_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
