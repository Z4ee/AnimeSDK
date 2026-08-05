#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEffectPluginDestroy_StateTimeSegments; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_ANIMATORLAYERSTATES__CTOR_OFFSET UNITYSDK_OFFSET(0x191A5980)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginDestroy_AnimatorLayerStates_TypeDefinitionIndex = 62530;

	class MonoEffectPluginDestroy_AnimatorLayerStates : public ::System::Object
	{
	public:
		::System::Int32 layerIndex; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectPluginDestroy_StateTimeSegments*>* timeSegments; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_ANIMATORLAYERSTATES__CTOR_OFFSET))(this);
		}
	};
}
