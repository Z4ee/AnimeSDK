#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0B84B0F93CB9CAEF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C627310)
#define CLASS_1_0B84B0F93CB9CAEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C627360)

inline static constexpr unsigned int Class_1_0B84B0F93CB9CAEF_TypeDefinitionIndex = 40479;

class Class_1_0B84B0F93CB9CAEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IPKCFNKIDMB; // 0x10
	::System::Single GCJMFBKLGHI; // 0x18
	::UnityEngine::Vector3 PGJJCGGBCKK; // 0x1C
	::System::Single ANIJFDBOIDP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B84B0F93CB9CAEF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B84B0F93CB9CAEF_CLEAR_OFFSET))(this);
	}
};
