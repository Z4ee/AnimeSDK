#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOUTLINE_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0x19115E00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOUTLINE_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19115E40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x191170A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropOutline_TypeDefinitionIndex = 66835;

	class MonoEffectPluginCharaPropOutline : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_OutlineWidth; // 0x40
		::System::Single _OutlineWidth; // 0x44
		::System::Boolean Toggle_PolygonOffsetFactor; // 0x48
		::System::Single _PolygonOffsetFactor; // 0x4C
		::System::Boolean Toggle_PolygonOffsetUnits; // 0x50
		::System::Single _PolygonOffsetUnits; // 0x54
		::System::Boolean Toggle_OutlinePolygonOffsetFactor; // 0x58
		::System::Single _OutlinePolygonOffsetFactor; // 0x5C
		::System::Boolean Toggle_OutlinePolygonOffsetUnits; // 0x60
		::System::Single _OutlinePolygonOffsetUnits; // 0x64
		::System::Boolean Toggle_Color0; // 0x68
		::UnityEngine::Color _OutlineColor0; // 0x6C
		::System::Boolean Toggle_Color1; // 0x7C
		::UnityEngine::Color _OutlineColor1; // 0x80
		::System::Boolean Toggle_Color2; // 0x90
		::UnityEngine::Color _OutlineColor2; // 0x94
		::System::Boolean Toggle_Color3; // 0xA4
		::UnityEngine::Color _OutlineColor3; // 0xA8
		::System::Boolean Toggle_Color4; // 0xB8
		::UnityEngine::Color _OutlineColor4; // 0xBC
		::System::Boolean Toggle_Color5; // 0xCC
		::UnityEngine::Color _OutlineColor5; // 0xD0
		::System::Boolean Toggle_Color6; // 0xE0
		::UnityEngine::Color _OutlineColor6; // 0xE4
		::System::Boolean Toggle_Color7; // 0xF4
		::UnityEngine::Color _OutlineColor7; // 0xF8
		::System::Boolean Toggle_OutlineColorIntensity; // 0x108
		::System::Single _OutlineColorIntensity; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOUTLINE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOUTLINE_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPOUTLINE_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
