#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_6B60059019300BAD;
namespace System { class Action; }

#define CLASS_1_A586B0412DA176B4_METHOD_1_286433C614DA721A_OFFSET UNITYSDK_OFFSET(0x160A8EE0)
#define CLASS_1_A586B0412DA176B4_METHOD_1_929FA7D48F492FAD_OFFSET UNITYSDK_OFFSET(0x16076330)
#define CLASS_1_A586B0412DA176B4_METHOD_1_E61BD11D06C0F28D_OFFSET UNITYSDK_OFFSET(0x160A8D70)
#define CLASS_1_A586B0412DA176B4__CTOR_OFFSET UNITYSDK_OFFSET(0x160A9130)

inline static constexpr unsigned int Class_1_A586B0412DA176B4_TypeDefinitionIndex = 73858;

class Class_1_A586B0412DA176B4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A586B0412DA176B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_929FA7D48F492FAD(::Class_2_6B60059019300BAD* a1, ::Class_2_6B60059019300BAD* a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::Class_2_6B60059019300BAD*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A586B0412DA176B4_METHOD_1_929FA7D48F492FAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E61BD11D06C0F28D(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A586B0412DA176B4_METHOD_1_E61BD11D06C0F28D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_286433C614DA721A(::Class_2_6B60059019300BAD* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*, ::UnityEngine::Vector3, ::System::Action*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A586B0412DA176B4_METHOD_1_286433C614DA721A_OFFSET))(this, a1, a2, a3, a4);
	}
};
