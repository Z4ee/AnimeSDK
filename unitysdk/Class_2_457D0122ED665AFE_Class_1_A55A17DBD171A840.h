#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_457D0122ED665AFE_CLASS_1_A55A17DBD171A840__CTOR_OFFSET UNITYSDK_OFFSET(0x10FB44D0)

inline static constexpr unsigned int Class_2_457D0122ED665AFE_Class_1_A55A17DBD171A840_TypeDefinitionIndex = 40130;

class Class_2_457D0122ED665AFE_Class_1_A55A17DBD171A840 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_5; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x2C
	::UnityEngine::Vector3 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_CLASS_1_A55A17DBD171A840__CTOR_OFFSET))(this);
	}
};
