#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"

#define CLASS_1_49711CDB46CFD3AE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8D6D7C0)
#define CLASS_1_49711CDB46CFD3AE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8D6D770)
#define CLASS_1_49711CDB46CFD3AE_NAVIGATIONFAILPROCESS_OFFSET UNITYSDK_OFFSET(0x8D6D700)
#define CLASS_1_49711CDB46CFD3AE_PLAYNAVIGATIONAUDIO_OFFSET UNITYSDK_OFFSET(0x8D6D5E0)
#define CLASS_1_49711CDB46CFD3AE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6D800)

inline static constexpr unsigned int Class_1_49711CDB46CFD3AE_TypeDefinitionIndex = 49708;

class Class_1_49711CDB46CFD3AE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49711CDB46CFD3AE__CTOR_OFFSET))(this);
	}

	::System::Void PlayNavigationAudio()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49711CDB46CFD3AE_PLAYNAVIGATIONAUDIO_OFFSET))(this);
	}

	::System::Void NavigationFailProcess(::UnityEngine::EventSystems::MoveDirection a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_49711CDB46CFD3AE_NAVIGATIONFAILPROCESS_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49711CDB46CFD3AE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49711CDB46CFD3AE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
