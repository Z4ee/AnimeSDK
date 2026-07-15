#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AudioTriggerInfo.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

class StageHarmonyAudioDemodulator;
class StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x14EC6160)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_2DD8EB2A8AB21975_OFFSET UNITYSDK_OFFSET(0x14EC6750)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x14EC6590)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x14EC6330)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_680FC076CDE6057B_OFFSET UNITYSDK_OFFSET(0x14EC6E60)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_8AC834FE1A022C85_OFFSET UNITYSDK_OFFSET(0x14EC6C70)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_ABC507DBBD207493_OFFSET UNITYSDK_OFFSET(0x14EC6970)
#define STAGEHARMONYAUDIOLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x14EC6F10)

inline static constexpr unsigned int StageHarmonyAudioLinkSlot_TypeDefinitionIndex = 45743;

class StageHarmonyAudioLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::GameObject* AudioEmitter; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6*>* _audioStates; // 0x48
	::System::Boolean _isInitialized; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_2_44AC3F3C85C7CAA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_44AC3F3C85C7CAA3_OFFSET))(this);
	}

	::System::Void Method_2_2DD8EB2A8AB21975(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_2DD8EB2A8AB21975_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABC507DBBD207493(::StageHarmonyAudioDemodulator* a1, ::AudioTriggerInfo a2, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6* a3)
	{
		return ((::System::Void(*)(::PVOID, ::StageHarmonyAudioDemodulator*, ::AudioTriggerInfo, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6*))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_ABC507DBBD207493_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_8AC834FE1A022C85(::StageHarmonyAudioDemodulator* a1, ::UnityEngine::GameObject* a2, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::StageHarmonyAudioDemodulator*, ::UnityEngine::GameObject*, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6*))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_8AC834FE1A022C85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_680FC076CDE6057B(::System::UInt32 a1, ::AkCallbackType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::System::Int32))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_680FC076CDE6057B_OFFSET))(this, a1, a2, a3);
	}
};
