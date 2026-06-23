#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_F15E7592281CED74_SERIALIZEDVECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x131B1D40)
#define CLASS_1_F15E7592281CED74_SERIALIZEDVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x131B1DE0)

inline static constexpr unsigned int Class_1_F15E7592281CED74_SerializedVector3_TypeDefinitionIndex = 69001;

class Class_1_F15E7592281CED74_SerializedVector3 : public ::System::Object
{
public:
	::System::Single x; // 0x10
	::System::Single y; // 0x14
	::System::Single z; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15E7592281CED74_SERIALIZEDVECTOR3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F15E7592281CED74_SERIALIZEDVECTOR3__CTOR_1_OFFSET))(this, a1);
	}
};
