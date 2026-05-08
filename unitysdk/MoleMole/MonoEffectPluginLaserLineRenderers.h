#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"

namespace MoleMole { class LaserSegments; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINLASERLINERENDERERS__CTOR_OFFSET UNITYSDK_OFFSET(0x170E3410)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginLaserLineRenderers_TypeDefinitionIndex = 38632;

	class MonoEffectPluginLaserLineRenderers : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>* LaserRays; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERLINERENDERERS__CTOR_OFFSET))(this);
		}
	};
}
