#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AudioTriggerInfo.h"
#include "unitysdk/StageHarmonyBaseLinkSlot.h"

class StageHarmonyAudioDemodulator;
class StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xABDA700)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_68EA3BA68D4429F2_OFFSET UNITYSDK_OFFSET(0xABDB2E0)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_8AC834FE1A022C85_OFFSET UNITYSDK_OFFSET(0xABDB100)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_9EE008B846B09278_OFFSET UNITYSDK_OFFSET(0xABDAE00)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_B15E763C95CF0A5B_OFFSET UNITYSDK_OFFSET(0xABDA8C0)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_C187F11607643D3C_OFFSET UNITYSDK_OFFSET(0xABDAC10)
#define STAGEHARMONYAUDIOLINKSLOT_METHOD_2_D95535B895BF708F_OFFSET UNITYSDK_OFFSET(0xABDAAC0)
#define STAGEHARMONYAUDIOLINKSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0xABDB3D0)

inline static constexpr unsigned int StageHarmonyAudioLinkSlot_TypeDefinitionIndex = 38396;

class StageHarmonyAudioLinkSlot : public ::StageHarmonyBaseLinkSlot
{
public:
	::UnityEngine::GameObject* AudioEmitter; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6*>* _audioStates; // 0x30
	::System::Boolean _isInitialized; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_276036CDF4BFF5A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_276036CDF4BFF5A6_OFFSET))(this);
	}

	::System::Void Method_2_B15E763C95CF0A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_B15E763C95CF0A5B_OFFSET))(this);
	}

	::System::Void Method_2_D95535B895BF708F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_D95535B895BF708F_OFFSET))(this);
	}

	::System::Void Method_2_C187F11607643D3C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_C187F11607643D3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9EE008B846B09278(::StageHarmonyAudioDemodulator* a1, ::AudioTriggerInfo a2, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6* a3)
	{
		return ((::System::Void(*)(::PVOID, ::StageHarmonyAudioDemodulator*, ::AudioTriggerInfo, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6*))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_9EE008B846B09278_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_8AC834FE1A022C85(::StageHarmonyAudioDemodulator* a1, ::UnityEngine::GameObject* a2, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::StageHarmonyAudioDemodulator*, ::UnityEngine::GameObject*, ::StageHarmonyAudioLinkSlot_Class_1_A25053F7E9949EE6*))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_8AC834FE1A022C85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_68EA3BA68D4429F2(::System::UInt32 a1, ::AkCallbackType a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::System::Int32))((::PBYTE)hIl2Cpp + STAGEHARMONYAUDIOLINKSLOT_METHOD_2_68EA3BA68D4429F2_OFFSET))(this, a1, a2, a3);
	}
};
