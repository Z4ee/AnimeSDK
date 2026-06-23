#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectSerializedPluginBase.h"

namespace MoleMole { class MonoEffectPluginProgramConfig; }
namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_GET_ANIMATORLAYERSTATEDICT_OFFSET UNITYSDK_OFFSET(0x19152AA0)
#define MOLEMOLE_MONOEFFECTPLUGINDESTROY_ISVALID_OFFSET UNITYSDK_OFFSET(0x19152B00)
#define MOLEMOLE_MONOEFFECTPLUGINDESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0x19152BE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginDestroy_TypeDefinitionIndex = 56029;

	class MonoEffectPluginDestroy : public ::MoleMole::MonoEffectSerializedPluginBase
	{
	public:
		::MoleMole::MonoEffectPluginProgramConfig* _config; // 0x58
		::System::Boolean EnableHitAnimatorStateDestroy; // 0x60
		::System::Boolean EnableParryHitDestroyImmediately; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>* get_animatorLayerStateDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorStateTimeSegment*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_GET_ANIMATORLAYERSTATEDICT_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINDESTROY_ISVALID_OFFSET))(this);
		}
	};
}
