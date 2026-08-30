#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define CLASS_2_8FD0F520CF6CB522_GET_USEUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x1855CA10)
#define CLASS_2_8FD0F520CF6CB522_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1855CA30)
#define CLASS_2_8FD0F520CF6CB522_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1855CCF0)
#define CLASS_2_8FD0F520CF6CB522_SET_USEUI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x1855CA20)
#define CLASS_2_8FD0F520CF6CB522__CTOR_OFFSET UNITYSDK_OFFSET(0x1855CEB0)

inline static constexpr unsigned int Class_2_8FD0F520CF6CB522_TypeDefinitionIndex = 48520;

class Class_2_8FD0F520CF6CB522 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Boolean _UseUI3DCamera_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FD0F520CF6CB522__CTOR_OFFSET))(this);
	}

	::System::Boolean get_UseUI3DCamera()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FD0F520CF6CB522_GET_USEUI3DCAMERA_OFFSET))(this);
	}

	::System::Void set_UseUI3DCamera(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FD0F520CF6CB522_SET_USEUI3DCAMERA_OFFSET))(this, a1);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_8FD0F520CF6CB522_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_8FD0F520CF6CB522_ONGRAPHSTOP_OFFSET))(this, a1);
	}
};
