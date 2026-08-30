#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"

#define CLASS_3_FB249EDFE7D283C9__CTOR_OFFSET UNITYSDK_OFFSET(0x163F3870)

inline static constexpr unsigned int Class_3_FB249EDFE7D283C9_TypeDefinitionIndex = 73897;

class Class_3_FB249EDFE7D283C9 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::UnityEngine::LayerMask>
{
public:
	::System::Void _ctor(::UnityEngine::LayerMask a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_3_FB249EDFE7D283C9__CTOR_OFFSET))(this, a1);
	}
};
