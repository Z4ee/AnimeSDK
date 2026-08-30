#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A59080F652920B7A;

#define CLASS_1_FB3E5A82A5AF3C69___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157D2040)
#define CLASS_1_FB3E5A82A5AF3C69___C__DISPLAYCLASS30_0__REFRESHFIRETARGETS_B__0_OFFSET UNITYSDK_OFFSET(0x157D5850)

inline static constexpr unsigned int Class_1_FB3E5A82A5AF3C69___c__DisplayClass30_0_TypeDefinitionIndex = 75498;

class Class_1_FB3E5A82A5AF3C69___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_2_A59080F652920B7A* context; // 0x10
	::UnityEngine::Vector3 ownerPos; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB3E5A82A5AF3C69___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _RefreshFireTargets_b__0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB3E5A82A5AF3C69___C__DISPLAYCLASS30_0__REFRESHFIRETARGETS_B__0_OFFSET))(this, a1, a2);
	}
};
