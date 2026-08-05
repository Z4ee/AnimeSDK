#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0DD6A2EC32BA181A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoSlidingGround; }

#define CLASS_1_8C2E35844D27D183_METHOD_1_1BE106CE645448CD_OFFSET UNITYSDK_OFFSET(0x1C11F8D0)
#define CLASS_1_8C2E35844D27D183_METHOD_1_22F20E316E942B56_OFFSET UNITYSDK_OFFSET(0x1C11EFD0)
#define CLASS_1_8C2E35844D27D183_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C11F1A0)
#define CLASS_1_8C2E35844D27D183_METHOD_1_63E8F19CFED33AB3_OFFSET UNITYSDK_OFFSET(0x1C11FAA0)
#define CLASS_1_8C2E35844D27D183_METHOD_1_BA5F4E1E27941DD5_OFFSET UNITYSDK_OFFSET(0x1C11F280)
#define CLASS_1_8C2E35844D27D183_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C11F210)
#define CLASS_1_8C2E35844D27D183__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C11EEA0)
#define CLASS_1_8C2E35844D27D183__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11EE90)

inline static constexpr unsigned int Class_1_8C2E35844D27D183_TypeDefinitionIndex = 78581;

class Class_1_8C2E35844D27D183 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C2E35844D27D183_TypeDefinitionIndex)->GetStaticField(0x411D0);
	}
	static ::UnityEngine::LayerMask* StaticGet_Field_1_0()
	{
		return (::UnityEngine::LayerMask*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C2E35844D27D183_TypeDefinitionIndex)->GetStaticField(0xF2E0);
	}
	// static const ::System::Single Field_1_7; // 0x0
	::MoleMole::MonoSlidingGround* Field_1_11; // 0x10
	::UnityEngine::Vector3 Field_1_5; // 0x18
	::System::Single Field_1_4; // 0x24
	::UnityEngine::Vector3 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C2E35844D27D183__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C2E35844D27D183__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_22F20E316E942B56(::MoleMole::MonoSlidingGround*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoSlidingGround*&))((::PBYTE)hIl2Cpp + CLASS_1_8C2E35844D27D183_METHOD_1_22F20E316E942B56_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C2E35844D27D183_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C2E35844D27D183_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_BA5F4E1E27941DD5(::UnityEngine::Vector3 a1, ::System::Single a2, ::Struct_2_0DD6A2EC32BA181A& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Struct_2_0DD6A2EC32BA181A&))((::PBYTE)hIl2Cpp + CLASS_1_8C2E35844D27D183_METHOD_1_BA5F4E1E27941DD5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_63E8F19CFED33AB3(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_8C2E35844D27D183_METHOD_1_63E8F19CFED33AB3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1BE106CE645448CD(::Struct_2_0DD6A2EC32BA181A& a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0DD6A2EC32BA181A&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_8C2E35844D27D183_METHOD_1_1BE106CE645448CD_OFFSET))(this, a1, a2);
	}
};
