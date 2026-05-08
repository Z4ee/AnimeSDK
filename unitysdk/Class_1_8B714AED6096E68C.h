#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define CLASS_1_8B714AED6096E68C_COMPARE_OFFSET UNITYSDK_OFFSET(0x1064D4F0)
#define CLASS_1_8B714AED6096E68C__CTOR_OFFSET UNITYSDK_OFFSET(0x1064D5E0)

inline static constexpr unsigned int Class_1_8B714AED6096E68C_TypeDefinitionIndex = 80676;

class Class_1_8B714AED6096E68C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B714AED6096E68C__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_8B714AED6096E68C_COMPARE_OFFSET))(this, a1, a2);
	}
};
