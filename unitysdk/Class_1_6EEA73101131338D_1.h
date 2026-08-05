#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEF5F5E810036AF4_1;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6EEA73101131338D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x133F4A20)

inline static constexpr unsigned int Class_1_6EEA73101131338D_1_TypeDefinitionIndex = 68252;

class Class_1_6EEA73101131338D_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BEF5F5E810036AF4_1*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x18
	::UnityEngine::Transform* Field_1_7; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::System::Boolean Field_1_1; // 0x2C
	::System::Boolean Field_1_6; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EEA73101131338D_1__CTOR_OFFSET))(this);
	}
};
