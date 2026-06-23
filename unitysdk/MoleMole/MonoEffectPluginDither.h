#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginDither_Enum_3_626104752F139FF0.h"
#include "unitysdk/MoleMole/MonoEffectPluginDither_Enum_3_B450F0E0409F4988.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOEFFECTPLUGINDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCD3C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginDither_TypeDefinitionIndex = 79532;

	class MonoEffectPluginDither : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::MoleMole::MonoEffectPluginDither_Enum_3_B450F0E0409F4988 mode; // 0x18
		::MoleMole::MonoEffectPluginDither_Enum_3_626104752F139FF0 effectKind; // 0x1C
		::System::String* ditherKey; // 0x20
		::System::Boolean IsIgnoreList; // 0x28
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* rendererSelectList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDITHER__CTOR_OFFSET))(this);
		}
	};
}
