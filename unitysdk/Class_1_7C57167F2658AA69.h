#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2661F5CE5402F421;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7C57167F2658AA69__CTOR_OFFSET UNITYSDK_OFFSET(0x1B254EE0)

inline static constexpr unsigned int Class_1_7C57167F2658AA69_TypeDefinitionIndex = 40627;

class Class_1_7C57167F2658AA69 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_1; // 0x18
	::Class_2_2661F5CE5402F421* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C57167F2658AA69__CTOR_OFFSET))(this);
	}
};
