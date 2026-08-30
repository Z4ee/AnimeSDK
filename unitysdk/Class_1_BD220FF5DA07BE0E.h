#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD220FF5DA07BE0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AB300)

inline static constexpr unsigned int Class_1_BD220FF5DA07BE0E_TypeDefinitionIndex = 42086;

class Class_1_BD220FF5DA07BE0E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EONKAJJFGNP; // 0x10
	::UnityEngine::Vector3 LLLMGKILJPF; // 0x18
	::System::Boolean MKELNFDKKJK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD220FF5DA07BE0E__CTOR_OFFSET))(this);
	}
};
