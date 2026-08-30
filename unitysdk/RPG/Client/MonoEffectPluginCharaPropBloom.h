#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaPropBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0xD7959E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_UPDATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xD795A20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xD797410)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropBloom_TypeDefinitionIndex = 69916;

	class MonoEffectPluginCharaPropBloom : public ::RPG::Client::MonoEffectPluginCharaPropBase
	{
	public:
		::System::Boolean Toggle_BloomIntensity0; // 0x40
		::System::Single _BloomIntensity0; // 0x44
		::System::Boolean Toggle_BloomColor0; // 0x48
		::UnityEngine::Color _BloomColor0; // 0x4C
		::System::Boolean Toggle_BloomIntensity1; // 0x5C
		::System::Single _BloomIntensity1; // 0x60
		::System::Boolean Toggle_BloomColor1; // 0x64
		::UnityEngine::Color _BloomColor1; // 0x68
		::System::Boolean Toggle_BloomIntensity2; // 0x78
		::System::Single _BloomIntensity2; // 0x7C
		::System::Boolean Toggle_BloomColor2; // 0x80
		::UnityEngine::Color _BloomColor2; // 0x84
		::System::Boolean Toggle_BloomIntensity3; // 0x94
		::System::Single _BloomIntensity3; // 0x98
		::System::Boolean Toggle_BloomColor3; // 0x9C
		::UnityEngine::Color _BloomColor3; // 0xA0
		::System::Boolean Toggle_BloomIntensity4; // 0xB0
		::System::Single _BloomIntensity4; // 0xB4
		::System::Boolean Toggle_BloomColor4; // 0xB8
		::UnityEngine::Color _BloomColor4; // 0xBC
		::System::Boolean Toggle_BloomIntensity5; // 0xCC
		::System::Single _BloomIntensity5; // 0xD0
		::System::Boolean Toggle_BloomColor5; // 0xD4
		::UnityEngine::Color _BloomColor5; // 0xD8
		::System::Boolean Toggle_BloomIntensity6; // 0xE8
		::System::Single _BloomIntensity6; // 0xEC
		::System::Boolean Toggle_BloomColor6; // 0xF0
		::UnityEngine::Color _BloomColor6; // 0xF4
		::System::Boolean Toggle_BloomIntensity7; // 0x104
		::System::Single _BloomIntensity7; // 0x108
		::System::Boolean Toggle_BloomColor7; // 0x10C
		::UnityEngine::Color _BloomColor7; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void UpdateProperty(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBLOOM_UPDATEPROPERTY_OFFSET))(this, a1, a2);
		}
	};
}
