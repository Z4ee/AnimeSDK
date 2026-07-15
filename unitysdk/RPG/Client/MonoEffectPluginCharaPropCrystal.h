#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCRYSTAL_INIT_OFFSET UNITYSDK_OFFSET(0x19109E30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCRYSTAL_UNINIT_OFFSET UNITYSDK_OFFSET(0x1910B000)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCRYSTAL_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19109ED0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCRYSTAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1910B120)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropCrystal_TypeDefinitionIndex = 66815;

	class MonoEffectPluginCharaPropCrystal : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean _EnableCrystal; // 0x40
		::System::Boolean Toggle_CrystalTex; // 0x41
		::UnityEngine::Texture2D* _CrystalTex; // 0x48
		::System::Boolean Toggle_FlameTex; // 0x50
		::UnityEngine::Texture2D* _FlameTex; // 0x58
		::System::Boolean Toggle_FlameID; // 0x60
		::System::Single _FlameID; // 0x64
		::System::Boolean Toggle_FlameColorOut; // 0x68
		::UnityEngine::Color _FlameColorOut; // 0x6C
		::System::Boolean Toggle_FlameColorIn; // 0x7C
		::UnityEngine::Color _FlameColorIn; // 0x80
		::System::Boolean Toggle_FlameWidth; // 0x90
		::System::Single _FlameWidth; // 0x94
		::System::Boolean Toggle_FlameHeight; // 0x98
		::System::Single _FlameHeight; // 0x9C
		::System::Boolean Toggle_FlameSwirilTexScale; // 0xA0
		::System::Single _FlameSwirilTexScale; // 0xA4
		::System::Boolean Toggle_FlameSwirilScale; // 0xA8
		::System::Single _FlameSwirilScale; // 0xAC
		::System::Boolean Toggle_FlameSwirilSpeed; // 0xB0
		::System::Single _FlameSwirilSpeed; // 0xB4
		::System::Boolean Toggle_FlameSpeed; // 0xB8
		::System::Single _FlameSpeed; // 0xBC
		::System::Boolean Toggle_CrystalTransparency; // 0xC0
		::System::Single _CrystalTransparency; // 0xC4
		::System::Boolean Toggle_CrystalRange1; // 0xC8
		::System::Single _CrystalRange1; // 0xCC
		::System::Boolean Toggle_CrystalRange2; // 0xD0
		::System::Single _CrystalRange2; // 0xD4
		::System::Boolean Toggle_EColor0; // 0xD8
		::UnityEngine::Color _EffectColor0; // 0xDC
		::System::Boolean Toggle_EColor1; // 0xEC
		::UnityEngine::Color _EffectColor1; // 0xF0
		::System::Boolean Toggle_EColor2; // 0x100
		::UnityEngine::Color _EffectColor2; // 0x104
		::System::Boolean Toggle_EColor3; // 0x114
		::UnityEngine::Color _EffectColor3; // 0x118
		::System::Boolean Toggle_EColor4; // 0x128
		::UnityEngine::Color _EffectColor4; // 0x12C
		::System::Boolean Toggle_EColor5; // 0x13C
		::UnityEngine::Color _EffectColor5; // 0x140
		::System::Boolean Toggle_EColor6; // 0x150
		::UnityEngine::Color _EffectColor6; // 0x154
		::System::Boolean Toggle_EColor7; // 0x164
		::UnityEngine::Color _EffectColor7; // 0x168
		::Il2CppArray<::System::Boolean>* Field_6_45; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCRYSTAL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCRYSTAL_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCRYSTAL_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPCRYSTAL_UNINIT_OFFSET))(this, a1);
		}
	};
}
