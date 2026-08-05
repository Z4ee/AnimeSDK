#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4BDC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginProgramConfig_TypeDefinitionIndex = 59163;

	class MonoEffectPluginProgramConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>* MonoEffectPluginDestroy_animatorLayerStateDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINPROGRAMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
