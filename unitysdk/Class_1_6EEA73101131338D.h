#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEF5F5E810036AF4;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6EEA73101131338D__CTOR_OFFSET UNITYSDK_OFFSET(0x18C59280)

inline static constexpr unsigned int Class_1_6EEA73101131338D_TypeDefinitionIndex = 46511;

class Class_1_6EEA73101131338D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::UnityEngine::Transform* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Class_1_BEF5F5E810036AF4*>* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_0; // 0x2C
	::System::Boolean Field_1_5; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EEA73101131338D__CTOR_OFFSET))(this);
	}
};
