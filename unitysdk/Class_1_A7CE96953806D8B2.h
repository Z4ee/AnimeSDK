#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_A7CE96953806D8B2__CTOR_OFFSET UNITYSDK_OFFSET(0xC7BD500)

inline static constexpr unsigned int Class_1_A7CE96953806D8B2_TypeDefinitionIndex = 57803;

class Class_1_A7CE96953806D8B2 : public ::System::Object
{
public:
	::UnityEngine::Vector3 INFNMPEAHJN; // 0x10
	::System::Single DMMINDDMKGC; // 0x1C
	::System::Single OOFCHJHBKCD; // 0x20
	::UnityEngine::Vector3 MBOCCOCLONK; // 0x24

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A7CE96953806D8B2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
