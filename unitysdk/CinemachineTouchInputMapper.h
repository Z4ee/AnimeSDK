#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define CINEMACHINETOUCHINPUTMAPPER_GETINPUTAXIS_OFFSET UNITYSDK_OFFSET(0x166A6FA0)
#define CINEMACHINETOUCHINPUTMAPPER_START_OFFSET UNITYSDK_OFFSET(0x166A6F00)
#define CINEMACHINETOUCHINPUTMAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x166A7070)

inline static constexpr unsigned int CinemachineTouchInputMapper_TypeDefinitionIndex = 39713;

class CinemachineTouchInputMapper : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single TouchSensitivityX; // 0x18
	::System::Single TouchSensitivityY; // 0x1C
	::System::String* TouchXInputMapTo; // 0x20
	::System::String* TouchYInputMapTo; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER_START_OFFSET))(this);
	}

	::System::Single GetInputAxis(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CINEMACHINETOUCHINPUTMAPPER_GETINPUTAXIS_OFFSET))(this, a1);
	}
};
