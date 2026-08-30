#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BEFFF38E22C3198D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4250D0)

inline static constexpr unsigned int Class_1_BEFFF38E22C3198D_TypeDefinitionIndex = 41598;

class Class_1_BEFFF38E22C3198D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* OFHGFAJNCJE; // 0x10
	::System::Boolean LPCHCNJBNGD; // 0x18
	::System::Boolean ELFOPLGBFDK; // 0x19
	::UnityEngine::Vector3 CNCCBDOMOAO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEFFF38E22C3198D__CTOR_OFFSET))(this);
	}
};
