#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_26.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F356FCA60006484C;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class Object; }

#define CLASS_2_DD431253EF66FA2E_METHOD_2_61010E8FCBB2BBB7_OFFSET UNITYSDK_OFFSET(0xF2337A0)
#define CLASS_2_DD431253EF66FA2E_METHOD_2_64589795D131E18E_OFFSET UNITYSDK_OFFSET(0xF233E10)
#define CLASS_2_DD431253EF66FA2E__CTOR_OFFSET UNITYSDK_OFFSET(0xF233E00)

inline static constexpr unsigned int Class_2_DD431253EF66FA2E_TypeDefinitionIndex = 62262;

class Class_2_DD431253EF66FA2E : public ::Class_1_43BD383C98B4C0C5_26
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD431253EF66FA2E__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_61010E8FCBB2BBB7(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_DD431253EF66FA2E_METHOD_2_61010E8FCBB2BBB7_OFFSET))(this, a1);
	}

	static ::Class_1_F356FCA60006484C* Method_2_64589795D131E18E(::Foundation::Unreal::FTransform3D a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD431253EF66FA2E_METHOD_2_64589795D131E18E_OFFSET))(a1, a2, a3, a4, a5);
	}
};
