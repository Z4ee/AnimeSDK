#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_87DF3110F2783615__CTOR_OFFSET UNITYSDK_OFFSET(0x99DA460)

inline static constexpr unsigned int Class_1_87DF3110F2783615_TypeDefinitionIndex = 38057;

class Class_1_87DF3110F2783615 : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* Field_1_4; // 0x10
	::Il2CppArray<::System::Single>* Field_1_3; // 0x18
	::System::Single Field_1_5; // 0x20
	::UnityEngine::Vector3 Field_1_0; // 0x24
	::System::Single Field_1_2; // 0x30
	::System::Int32 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87DF3110F2783615__CTOR_OFFSET))(this);
	}
};
