#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_7C06B45C208A25D4.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define CLASS_3_3B7E3EEB5846C75F_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x190BB1F0)
#define CLASS_3_3B7E3EEB5846C75F_METHOD_3_627734491883CD35_OFFSET UNITYSDK_OFFSET(0x190BB2F0)
#define CLASS_3_3B7E3EEB5846C75F_METHOD_3_699E0D9B164B60CD_OFFSET UNITYSDK_OFFSET(0x190BB710)
#define CLASS_3_3B7E3EEB5846C75F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x190BB5E0)
#define CLASS_3_3B7E3EEB5846C75F_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x190BB670)
#define CLASS_3_3B7E3EEB5846C75F_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x190BB0D0)
#define CLASS_3_3B7E3EEB5846C75F__CCTOR_OFFSET UNITYSDK_OFFSET(0x190BB240)
#define CLASS_3_3B7E3EEB5846C75F__CTOR_OFFSET UNITYSDK_OFFSET(0x190BB2C0)

inline static constexpr unsigned int Class_3_3B7E3EEB5846C75F_TypeDefinitionIndex = 45655;

class Class_3_3B7E3EEB5846C75F : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_14 = 0xF; // 0x0
	::UnityEngine::Rigidbody* Field_3_0; // 0x48
	::UnityEngine::Vector3 Field_3_7; // 0x50
	::Enum_3_7C06B45C208A25D4 Field_3_4; // 0x5C
	::System::Single Field_3_1; // 0x60
	::System::Boolean Field_3_10; // 0x64
	::System::Boolean Field_3_6; // 0x65
	::System::Boolean Field_3_11; // 0x66
	::UnityEngine::Vector3 Field_3_2; // 0x68
	::UnityEngine::Vector3 Field_3_5; // 0x74
	::System::Single Field_3_12; // 0x80
	::MoleMole::Vector2Int Field_3_13; // 0x84
	::UnityEngine::Vector3 Field_3_3; // 0x8C
	::System::Single Field_3_9; // 0x98
	::System::Single Field_3_8; // 0x9C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_627734491883CD35()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_METHOD_3_627734491883CD35_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_3B7E3EEB5846C75F* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3B7E3EEB5846C75F*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_699E0D9B164B60CD(::Enum_3_7C06B45C208A25D4 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::UnityEngine::Vector3 a10, ::System::Single a11)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7C06B45C208A25D4, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_METHOD_3_699E0D9B164B60CD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
};
