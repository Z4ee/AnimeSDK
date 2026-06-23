#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_A9A87B1F330EEE54_CLASS_1_B96B10A3FDF096C5_METHOD_1_C429BFB04C8D36DB_OFFSET UNITYSDK_OFFSET(0x126CAD40)
#define CLASS_2_A9A87B1F330EEE54_CLASS_1_B96B10A3FDF096C5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x126CB170)
#define CLASS_2_A9A87B1F330EEE54_CLASS_1_B96B10A3FDF096C5_METHOD_1_D6B1F8980285617D_OFFSET UNITYSDK_OFFSET(0x126CABF0)
#define CLASS_2_A9A87B1F330EEE54_CLASS_1_B96B10A3FDF096C5__CTOR_OFFSET UNITYSDK_OFFSET(0x126CABD0)

inline static constexpr unsigned int Class_2_A9A87B1F330EEE54_Class_1_B96B10A3FDF096C5_TypeDefinitionIndex = 64470;

class Class_2_A9A87B1F330EEE54_Class_1_B96B10A3FDF096C5 : public ::System::Object
{
public:
	::UnityEngine::Quaternion Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_CLASS_1_B96B10A3FDF096C5__CTOR_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_D6B1F8980285617D(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_CLASS_1_B96B10A3FDF096C5_METHOD_1_D6B1F8980285617D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_C429BFB04C8D36DB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_CLASS_1_B96B10A3FDF096C5_METHOD_1_C429BFB04C8D36DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_CLASS_1_B96B10A3FDF096C5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
