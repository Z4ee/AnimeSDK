#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define CLASS_1_A81CCC36AFBE5B92_CLASS_1_4A524C1CE6EB6939_METHOD_1_E5032B047EEB340F_OFFSET UNITYSDK_OFFSET(0x120686A0)
#define CLASS_1_A81CCC36AFBE5B92_CLASS_1_4A524C1CE6EB6939__CTOR_OFFSET UNITYSDK_OFFSET(0x12068690)

inline static constexpr unsigned int Class_1_A81CCC36AFBE5B92_Class_1_4A524C1CE6EB6939_TypeDefinitionIndex = 51022;

class Class_1_A81CCC36AFBE5B92_Class_1_4A524C1CE6EB6939 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::Il2CppArray<::System::String*>* Field_1_2; // 0x20
	::UnityEngine::LayerMask Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A81CCC36AFBE5B92_CLASS_1_4A524C1CE6EB6939__CTOR_OFFSET))(this);
	}

	::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 Method_1_E5032B047EEB340F(::UnityEngine::RaycastHit& a1)
	{
		return ((::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_A81CCC36AFBE5B92_CLASS_1_4A524C1CE6EB6939_METHOD_1_E5032B047EEB340F_OFFSET))(this, a1);
	}
};
