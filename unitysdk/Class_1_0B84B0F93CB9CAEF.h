#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0B84B0F93CB9CAEF_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E4F5C0)
#define CLASS_1_0B84B0F93CB9CAEF__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4F610)

inline static constexpr unsigned int Class_1_0B84B0F93CB9CAEF_TypeDefinitionIndex = 38797;

class Class_1_0B84B0F93CB9CAEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x24
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B84B0F93CB9CAEF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B84B0F93CB9CAEF_CLEAR_OFFSET))(this);
	}
};
