#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_457D0122ED665AFE_CLASS_1_A55A17DBD171A840__CTOR_OFFSET UNITYSDK_OFFSET(0x1012B170)

inline static constexpr unsigned int Class_2_457D0122ED665AFE_Class_1_A55A17DBD171A840_TypeDefinitionIndex = 68537;

class Class_2_457D0122ED665AFE_Class_1_A55A17DBD171A840 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_5; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x24
	::System::Boolean Field_1_3; // 0x30
	::System::Single Field_1_2; // 0x34
	::System::Single Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_CLASS_1_A55A17DBD171A840__CTOR_OFFSET))(this);
	}
};
