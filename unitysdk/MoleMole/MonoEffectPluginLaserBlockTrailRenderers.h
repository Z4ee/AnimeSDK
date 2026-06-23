#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TrailRenderer; }

#define MOLEMOLE_MONOEFFECTPLUGINLASERBLOCKTRAILRENDERERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1582F880)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginLaserBlockTrailRenderers_TypeDefinitionIndex = 61687;

	class MonoEffectPluginLaserBlockTrailRenderers : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::TrailRenderer*>* TrailRenderers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERBLOCKTRAILRENDERERS__CTOR_OFFSET))(this);
		}
	};
}
