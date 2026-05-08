#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkAudioListener;
class AkObstructionOcclusion_ObstructionOcclusionValue;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKOBSTRUCTIONOCCLUSION_CASTRAYS_OFFSET UNITYSDK_OFFSET(0x1C0945E0)
#define AKOBSTRUCTIONOCCLUSION_INITINTERVALSANDFADERATES_OFFSET UNITYSDK_OFFSET(0x1C094280)
#define AKOBSTRUCTIONOCCLUSION_UPDATEOBSTRUCTIONOCCLUSIONVALUES_OFFSET UNITYSDK_OFFSET(0x1C0942C0)
#define AKOBSTRUCTIONOCCLUSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C0949B0)
#define AKOBSTRUCTIONOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C094CF0)

inline static constexpr unsigned int AkObstructionOcclusion_TypeDefinitionIndex = 31609;

class AkObstructionOcclusion : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::AkAudioListener*>* listenersToRemove; // 0x18
	::System::Collections::Generic::List_1<::AkAudioListener*>* currentListenerList; // 0x20
	::System::Collections::Generic::Dictionary_2<::AkAudioListener*, ::AkObstructionOcclusion_ObstructionOcclusionValue*>* ObstructionOcclusionValues; // 0x28
	::System::Single fadeRate; // 0x30
	::System::Single fadeTime; // 0x34
	::UnityEngine::LayerMask LayerMask; // 0x38
	::System::Single maxDistance; // 0x3C
	::System::Single refreshInterval; // 0x40
	::System::Single refreshTime; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION__CTOR_OFFSET))(this);
	}

	::System::Void InitIntervalsAndFadeRates()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_INITINTERVALSANDFADERATES_OFFSET))(this);
	}

	::System::Void UpdateObstructionOcclusionValues()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_UPDATEOBSTRUCTIONOCCLUSIONVALUES_OFFSET))(this);
	}

	::System::Void CastRays()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_CASTRAYS_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_UPDATE_OFFSET))(this);
	}
};
