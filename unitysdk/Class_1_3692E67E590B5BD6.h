#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5D7E0C66569A8717_PlaceInteractState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_3692E67E590B5BD6__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF1600)

inline static constexpr unsigned int Class_1_3692E67E590B5BD6_TypeDefinitionIndex = 73932;

class Class_1_3692E67E590B5BD6 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_2; // 0x20
	::Class_1_5D7E0C66569A8717_PlaceInteractState Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3692E67E590B5BD6__CTOR_OFFSET))(this);
	}
};
