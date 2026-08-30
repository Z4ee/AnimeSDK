#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B0C50D0F8BAB7BA3_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_5_EA16995B33A1DEFF_1_CLONE_OFFSET UNITYSDK_OFFSET(0x16EC42F0)
#define CLASS_5_EA16995B33A1DEFF_1_METHOD_5_76C20C1C1323A406_OFFSET UNITYSDK_OFFSET(0x16EC40D0)
#define CLASS_5_EA16995B33A1DEFF_1_METHOD_5_A121432BC80DD093_OFFSET UNITYSDK_OFFSET(0x16EC3E80)
#define CLASS_5_EA16995B33A1DEFF_1_METHOD_5_C34A0F1A8A1B4952_OFFSET UNITYSDK_OFFSET(0x16EC3F30)
#define CLASS_5_EA16995B33A1DEFF_1_REVERSE_OFFSET UNITYSDK_OFFSET(0x16EC4360)
#define CLASS_5_EA16995B33A1DEFF_1_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x16EC4190)
#define CLASS_5_EA16995B33A1DEFF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC40B0)

inline static constexpr unsigned int Class_5_EA16995B33A1DEFF_1_TypeDefinitionIndex = 73420;

class Class_5_EA16995B33A1DEFF_1 : public ::Class_4_B0C50D0F8BAB7BA3_2
{
public:
	::UnityEngine::Vector3 HHMKIEGCIOG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_1__CTOR_OFFSET))(this);
	}

	static ::Class_5_EA16995B33A1DEFF_1* Method_5_A121432BC80DD093(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::Class_5_EA16995B33A1DEFF_1*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_1_METHOD_5_A121432BC80DD093_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_5_EA16995B33A1DEFF_1* Method_5_C34A0F1A8A1B4952(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_5_EA16995B33A1DEFF_1*(*)(::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_1_METHOD_5_C34A0F1A8A1B4952_OFFSET))(a1, a2);
	}

	::System::Boolean Method_5_76C20C1C1323A406(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_1_METHOD_5_76C20C1C1323A406_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_1_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_1_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EA16995B33A1DEFF_1_REVERSE_OFFSET))(this);
	}
};
