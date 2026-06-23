#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PARTICLESPERFDISPLAYER_GET_SUSEDRAWSTATSBETWEENPASS_OFFSET UNITYSDK_OFFSET(0x1E890D60)
#define PARTICLESPERFDISPLAYER_SET_SUSEDRAWSTATSBETWEENPASS_OFFSET UNITYSDK_OFFSET(0x1E890DC0)
#define PARTICLESPERFDISPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E890E20)

inline static constexpr unsigned int ParticlesPerfDisplayer_TypeDefinitionIndex = 90508;

class ParticlesPerfDisplayer : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESPERFDISPLAYER__CTOR_OFFSET))(this);
	}

	static ::System::Int32 get_sUseDrawStatsBetweenPass()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + PARTICLESPERFDISPLAYER_GET_SUSEDRAWSTATSBETWEENPASS_OFFSET))();
	}

	static ::System::Void set_sUseDrawStatsBetweenPass(::System::Int32 value)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + PARTICLESPERFDISPLAYER_SET_SUSEDRAWSTATSBETWEENPASS_OFFSET))(value);
	}
};
