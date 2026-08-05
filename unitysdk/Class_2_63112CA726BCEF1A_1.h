#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_44.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F356FCA60006484C;
namespace System { class Object; }

#define CLASS_2_63112CA726BCEF1A_1_METHOD_2_111CDC825FE22C10_OFFSET UNITYSDK_OFFSET(0x157D8F90)
#define CLASS_2_63112CA726BCEF1A_1_METHOD_2_CB8E897420FDE444_OFFSET UNITYSDK_OFFSET(0x157D94B0)
#define CLASS_2_63112CA726BCEF1A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x157D94A0)

inline static constexpr unsigned int Class_2_63112CA726BCEF1A_1_TypeDefinitionIndex = 67343;

class Class_2_63112CA726BCEF1A_1 : public ::Class_1_43BD383C98B4C0C5_44
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63112CA726BCEF1A_1__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_111CDC825FE22C10(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_63112CA726BCEF1A_1_METHOD_2_111CDC825FE22C10_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_CB8E897420FDE444(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63112CA726BCEF1A_1_METHOD_2_CB8E897420FDE444_OFFSET))(this, a1, a2);
	}
};
