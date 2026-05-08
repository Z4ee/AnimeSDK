#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D6DA183EF60F02C8;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_BFAF74AAE58D768D_CLASS_1_F3B8E87D5DC46ECB__CTOR_OFFSET UNITYSDK_OFFSET(0x12ED1660)

inline static constexpr unsigned int Class_2_BFAF74AAE58D768D_Class_1_F3B8E87D5DC46ECB_TypeDefinitionIndex = 65702;

class Class_2_BFAF74AAE58D768D_Class_1_F3B8E87D5DC46ECB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_3_D6DA183EF60F02C8*>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_3_D6DA183EF60F02C8*>* Field_1_3; // 0x18
	::UnityEngine::GameObject* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::Class_3_D6DA183EF60F02C8*>* Field_1_0; // 0x28
	::System::Single Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFAF74AAE58D768D_CLASS_1_F3B8E87D5DC46ECB__CTOR_OFFSET))(this);
	}
};
