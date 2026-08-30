#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkObstructionOcclusion.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class AkAudioListener;
class AkObstructionOcclusion_ObstructionOcclusionValue;
class AkRoomPortal;

#define AKROOMPORTALOBSTRUCTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EEF7890)
#define AKROOMPORTALOBSTRUCTION_SETOBSTRUCTIONOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1EEF7AA0)
#define AKROOMPORTALOBSTRUCTION_UPDATECURRENTLISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1EEF79C0)
#define AKROOMPORTALOBSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7CB0)

inline static constexpr unsigned int AkRoomPortalObstruction_TypeDefinitionIndex = 43757;

class AkRoomPortalObstruction : public ::AkObstructionOcclusion
{
public:
	::AkRoomPortal* m_portal; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_AWAKE_OFFSET))(this);
	}

	::System::Void UpdateCurrentListenerList()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_UPDATECURRENTLISTENERLIST_OFFSET))(this);
	}

	::System::Void SetObstructionOcclusion(::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::AkObstructionOcclusion_ObstructionOcclusionValue*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::AkObstructionOcclusion_ObstructionOcclusionValue*>))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_SETOBSTRUCTIONOCCLUSION_OFFSET))(this, a1);
	}
};
