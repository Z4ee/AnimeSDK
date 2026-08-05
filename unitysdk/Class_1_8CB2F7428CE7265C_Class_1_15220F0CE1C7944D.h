#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define CLASS_1_8CB2F7428CE7265C_CLASS_1_15220F0CE1C7944D_METHOD_1_CF6B56C69B1E534E_OFFSET UNITYSDK_OFFSET(0x145F7B30)
#define CLASS_1_8CB2F7428CE7265C_CLASS_1_15220F0CE1C7944D__CTOR_OFFSET UNITYSDK_OFFSET(0x145F7B20)

inline static constexpr unsigned int Class_1_8CB2F7428CE7265C_Class_1_15220F0CE1C7944D_TypeDefinitionIndex = 62557;

class Class_1_8CB2F7428CE7265C_Class_1_15220F0CE1C7944D : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_7; // 0x10
	::System::String* Field_1_1; // 0x18
	::Il2CppArray<::System::String*>* Field_1_0; // 0x20
	::UnityEngine::LayerMask Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_1_15220F0CE1C7944D__CTOR_OFFSET))(this);
	}

	::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 Method_1_CF6B56C69B1E534E(::UnityEngine::RaycastHit& a1)
	{
		return ((::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_1_15220F0CE1C7944D_METHOD_1_CF6B56C69B1E534E_OFFSET))(this, a1);
	}
};
