#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_F5486EF13585A6C7_2.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define CLASS_3_3B7E3EEB5846C75F_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11BA8870)
#define CLASS_3_3B7E3EEB5846C75F_METHOD_3_627734491883CD35_OFFSET UNITYSDK_OFFSET(0x11BA8BC0)
#define CLASS_3_3B7E3EEB5846C75F_METHOD_3_699E0D9B164B60CD_OFFSET UNITYSDK_OFFSET(0x11BA8A00)
#define CLASS_3_3B7E3EEB5846C75F_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11BA8970)
#define CLASS_3_3B7E3EEB5846C75F_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11BA8EB0)
#define CLASS_3_3B7E3EEB5846C75F_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11BA8740)
#define CLASS_3_3B7E3EEB5846C75F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BA88C0)
#define CLASS_3_3B7E3EEB5846C75F__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA8940)

inline static constexpr unsigned int Class_3_3B7E3EEB5846C75F_TypeDefinitionIndex = 74138;

class Class_3_3B7E3EEB5846C75F : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_14 = 0xD; // 0x0
	::UnityEngine::Rigidbody* Field_3_0; // 0x48
	::System::Boolean Field_3_10; // 0x50
	::System::Boolean Field_3_6; // 0x51
	::System::Boolean Field_3_11; // 0x52
	::System::Single Field_3_8; // 0x54
	::MoleMole::Vector2Int Field_3_13; // 0x58
	::UnityEngine::Vector3 Field_3_7; // 0x60
	::UnityEngine::Vector3 Field_3_2; // 0x6C
	::System::Single Field_3_1; // 0x78
	::UnityEngine::Vector3 Field_3_3; // 0x7C
	::System::Single Field_3_12; // 0x88
	::System::Single Field_3_9; // 0x8C
	::UnityEngine::Vector3 Field_3_5; // 0x90
	::Enum_3_F5486EF13585A6C7_2 Field_3_4; // 0x9C

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

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_699E0D9B164B60CD(::Enum_3_F5486EF13585A6C7_2 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::UnityEngine::Vector3 a10, ::System::Single a11)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F5486EF13585A6C7_2, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_METHOD_3_699E0D9B164B60CD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::UnityEngine::Rigidbody* Method_3_627734491883CD35()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_METHOD_3_627734491883CD35_OFFSET))(this);
	}

	static ::Class_3_3B7E3EEB5846C75F* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3B7E3EEB5846C75F*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3B7E3EEB5846C75F_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
