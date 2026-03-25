#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DC01FF708B3C70CD__CTOR_OFFSET UNITYSDK_OFFSET(0x115232A0)

inline static constexpr unsigned int Class_1_DC01FF708B3C70CD_TypeDefinitionIndex = 44161;

class Class_1_DC01FF708B3C70CD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_3; // 0x18
	::UnityEngine::Vector2Int Field_1_4; // 0x20
	::UnityEngine::Vector2Int Field_1_5; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Boolean Field_1_0; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC01FF708B3C70CD__CTOR_OFFSET))(this);
	}
};
