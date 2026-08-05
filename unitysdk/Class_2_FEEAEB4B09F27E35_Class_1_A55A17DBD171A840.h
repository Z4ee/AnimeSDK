#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FEEAEB4B09F27E35_CLASS_1_A55A17DBD171A840__CTOR_OFFSET UNITYSDK_OFFSET(0x14D6CBA0)

inline static constexpr unsigned int Class_2_FEEAEB4B09F27E35_Class_1_A55A17DBD171A840_TypeDefinitionIndex = 74502;

class Class_2_FEEAEB4B09F27E35_Class_1_A55A17DBD171A840 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_4; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Single Field_1_5; // 0x1C
	::UnityEngine::Vector3 Field_1_0; // 0x20
	::UnityEngine::Vector3 Field_1_1; // 0x2C
	::System::Single Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEEAEB4B09F27E35_CLASS_1_A55A17DBD171A840__CTOR_OFFSET))(this);
	}
};
