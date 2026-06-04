#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D30814AA141A4846__CTOR_OFFSET UNITYSDK_OFFSET(0x18E59720)

inline static constexpr unsigned int Class_1_D30814AA141A4846_TypeDefinitionIndex = 40387;

class Class_1_D30814AA141A4846 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D30814AA141A4846__CTOR_OFFSET))(this);
	}
};
