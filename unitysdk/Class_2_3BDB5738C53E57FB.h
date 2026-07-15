#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CLASS_2_3BDB5738C53E57FB_GET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0x152F0400)
#define CLASS_2_3BDB5738C53E57FB_SET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0x152F0410)
#define CLASS_2_3BDB5738C53E57FB__CTOR_OFFSET UNITYSDK_OFFSET(0x152F0420)

inline static constexpr unsigned int Class_2_3BDB5738C53E57FB_TypeDefinitionIndex = 46093;

class Class_2_3BDB5738C53E57FB : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean _EnableAutoBlink_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BDB5738C53E57FB__CTOR_OFFSET))(this);
	}

	::System::Boolean get_EnableAutoBlink()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BDB5738C53E57FB_GET_ENABLEAUTOBLINK_OFFSET))(this);
	}

	::System::Void set_EnableAutoBlink(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3BDB5738C53E57FB_SET_ENABLEAUTOBLINK_OFFSET))(this, a1);
	}
};
