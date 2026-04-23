#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CF6E14C556788FD1_CLASS_1_A892449D4D5DEE32__CTOR_OFFSET UNITYSDK_OFFSET(0xAA46F90)

inline static constexpr unsigned int Class_1_CF6E14C556788FD1_Class_1_A892449D4D5DEE32_TypeDefinitionIndex = 47854;

class Class_1_CF6E14C556788FD1_Class_1_A892449D4D5DEE32 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* Field_1_1; // 0x10
	::UnityEngine::Vector3Int Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF6E14C556788FD1_CLASS_1_A892449D4D5DEE32__CTOR_OFFSET))(this);
	}
};
