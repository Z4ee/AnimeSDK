#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEOUTLINE_GETBASECHARACTERFILTER_OFFSET UNITYSDK_OFFSET(0x191134C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEOUTLINE_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19113530)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEOUTLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x19113CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropFaceOutline_TypeDefinitionIndex = 66824;

	class MonoEffectPluginCharaPropFaceOutline : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_OutlineColor; // 0x40
		::UnityEngine::Color _OutlineColor; // 0x44
		::System::Boolean Toggle_OutlineWidth; // 0x54
		::System::Single _OutlineWidth; // 0x58
		::System::Boolean Toggle_OutlineFixSide; // 0x5C
		::System::Single _OutlineFixSide; // 0x60
		::System::Boolean Toggle_OutlineFixFront; // 0x64
		::System::Single _OutlineFixFront; // 0x68
		::System::Boolean Toggle_OutlineFixRange1; // 0x6C
		::System::Single _OutlineFixRange1; // 0x70
		::System::Boolean Toggle_OutlineFixRange2; // 0x74
		::System::Single _OutlineFixRange2; // 0x78
		::System::Boolean Toggle_OutlineFixRange3; // 0x7C
		::System::Single _OutlineFixRange3; // 0x80
		::System::Boolean Toggle_OutlineFixRange4; // 0x84
		::System::Single _OutlineFixRange4; // 0x88
		::System::Boolean Toggle_FixLipOutline; // 0x8C
		::System::Single _FixLipOutline; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEOUTLINE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetBaseCharacterFilter()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEOUTLINE_GETBASECHARACTERFILTER_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPFACEOUTLINE_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
