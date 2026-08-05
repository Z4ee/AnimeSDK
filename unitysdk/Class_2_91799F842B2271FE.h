#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_44.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F356FCA60006484C;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class Object; }

#define CLASS_2_91799F842B2271FE_METHOD_2_542B7BBB6C8A42D3_OFFSET UNITYSDK_OFFSET(0x15EE4E50)
#define CLASS_2_91799F842B2271FE_METHOD_2_83456EA322484C78_OFFSET UNITYSDK_OFFSET(0x15EE4610)
#define CLASS_2_91799F842B2271FE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE4E40)

inline static constexpr unsigned int Class_2_91799F842B2271FE_TypeDefinitionIndex = 78567;

class Class_2_91799F842B2271FE : public ::Class_1_43BD383C98B4C0C5_44
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91799F842B2271FE__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_83456EA322484C78(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_91799F842B2271FE_METHOD_2_83456EA322484C78_OFFSET))(this, a1);
	}

	static ::Class_1_F356FCA60006484C* Method_2_542B7BBB6C8A42D3(::Foundation::Unreal::FTransform3D a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_91799F842B2271FE_METHOD_2_542B7BBB6C8A42D3_OFFSET))(a1, a2, a3, a4, a5);
	}
};
