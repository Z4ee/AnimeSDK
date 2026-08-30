#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTOCK_INIT_OFFSET UNITYSDK_OFFSET(0x116C21A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTOCK_UNINIT_OFFSET UNITYSDK_OFFSET(0x116C2B30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTOCK_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x116C2240)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x116C2C50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropStock_TypeDefinitionIndex = 69949;

	class MonoEffectPluginCharaPropStock : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean _EnableStock; // 0x40
		::System::Boolean Toggle_StockRangeTex; // 0x41
		::UnityEngine::Texture2D* _StockRangeTex; // 0x48
		::System::Boolean Toggle_StockRangeTexScale; // 0x50
		::UnityEngine::Vector2 _StockRangeTexScale; // 0x54
		::System::Boolean Toggle_StockRangeTexOffset; // 0x5C
		::UnityEngine::Vector2 _StockRangeTexOffset; // 0x60
		::System::Boolean Toggle_StockTransparency; // 0x68
		::System::Boolean Toggle_Stockcolor; // 0x69
		::UnityEngine::Color _Stockcolor; // 0x6C
		::System::Boolean Toggle_StockDarkcolor; // 0x7C
		::UnityEngine::Color _StockDarkcolor; // 0x80
		::System::Boolean Toggle_StockPower; // 0x90
		::System::Single _StockPower; // 0x94
		::System::Boolean Toggle_StockDarkWidth; // 0x98
		::System::Single _StockDarkWidth; // 0x9C
		::System::Boolean Toggle_StockSP; // 0xA0
		::System::Single _StockSP; // 0xA4
		::System::Boolean Toggle_StockPower1; // 0xA8
		::System::Single _StockPower1; // 0xAC
		::System::Boolean Toggle_StockRoughness; // 0xB0
		::System::Single _StockRoughness; // 0xB4
		::System::Boolean Toggle_StockThickness; // 0xB8
		::System::Single _StockThickness; // 0xBC
		::System::Boolean KMGIHDHMBJB; // 0xC0
		::Il2CppArray<::System::Boolean>* LKIKPHKAFJB; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTOCK__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTOCK_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTOCK_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Void UnInit(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPSTOCK_UNINIT_OFFSET))(this, a1);
		}
	};
}
