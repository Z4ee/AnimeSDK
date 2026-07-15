#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_E7240366C6172E24_Class_1_B93E73603F897036;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collision; }

#define CLASS_2_E7240366C6172E24_CLASS_1_B93E73603F897036___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE9750)
#define CLASS_2_E7240366C6172E24_CLASS_1_B93E73603F897036___C__DISPLAYCLASS0_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x18EE9A60)

inline static constexpr unsigned int Class_2_E7240366C6172E24_Class_1_B93E73603F897036___c__DisplayClass0_0_TypeDefinitionIndex = 71960;

class Class_2_E7240366C6172E24_Class_1_B93E73603F897036___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_2_E7240366C6172E24_Class_1_B93E73603F897036* __4__this; // 0x10
	::System::Action_2<::UnityEngine::Collision*, ::Class_2_E7240366C6172E24_Class_1_B93E73603F897036*>* onCollisionCallback; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7240366C6172E24_CLASS_1_B93E73603F897036___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _Init_b__0(::UnityEngine::Collision* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + CLASS_2_E7240366C6172E24_CLASS_1_B93E73603F897036___C__DISPLAYCLASS0_0__INIT_B__0_OFFSET))(this, a1);
	}
};
