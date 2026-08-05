#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_577E23085FCBCFE7__CTOR_OFFSET UNITYSDK_OFFSET(0x13E174B0)

inline static constexpr unsigned int Class_1_577E23085FCBCFE7_TypeDefinitionIndex = 61507;

class Class_1_577E23085FCBCFE7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577E23085FCBCFE7__CTOR_OFFSET))(this);
	}
};
