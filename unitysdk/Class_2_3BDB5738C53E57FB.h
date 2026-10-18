#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CLASS_2_3BDB5738C53E57FB_GET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xB6C3EF0)
#define CLASS_2_3BDB5738C53E57FB_SET_ENABLEAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xB6C3F00)
#define CLASS_2_3BDB5738C53E57FB__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C3F10)

inline static constexpr unsigned int Class_2_3BDB5738C53E57FB_TypeDefinitionIndex = 47866;

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
