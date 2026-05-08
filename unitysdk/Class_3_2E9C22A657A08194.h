#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_2E9C22A657A08194_Enum_3_24976845B713882E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7B8672D4F89E3D96;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class CapsuleCollider; }

#define CLASS_3_2E9C22A657A08194_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1149F480)
#define CLASS_3_2E9C22A657A08194_METHOD_3_4D978F94B6C77A60_OFFSET UNITYSDK_OFFSET(0x1149FC10)
#define CLASS_3_2E9C22A657A08194_METHOD_3_5C0658D38A69B192_OFFSET UNITYSDK_OFFSET(0x1149F560)
#define CLASS_3_2E9C22A657A08194_METHOD_3_73325761F6F6EE1A_OFFSET UNITYSDK_OFFSET(0x1149F910)
#define CLASS_3_2E9C22A657A08194_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1149FB80)
#define CLASS_3_2E9C22A657A08194_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1149F5F0)
#define CLASS_3_2E9C22A657A08194_METHOD_3_D13B6F00E7A83DA6_OFFSET UNITYSDK_OFFSET(0x1149F670)
#define CLASS_3_2E9C22A657A08194_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1149F2D0)
#define CLASS_3_2E9C22A657A08194__CCTOR_OFFSET UNITYSDK_OFFSET(0x1149F4D0)
#define CLASS_3_2E9C22A657A08194__CTOR_OFFSET UNITYSDK_OFFSET(0x1149F550)

inline static constexpr unsigned int Class_3_2E9C22A657A08194_TypeDefinitionIndex = 65137;

class Class_3_2E9C22A657A08194 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x9B; // 0x0
	::Class_1_7B8672D4F89E3D96* Field_3_1; // 0x48
	::MoleMole::Battle::Entity* Field_3_0; // 0x50
	::UnityEngine::CapsuleCollider* Field_3_5; // 0x58
	::Class_3_2E9C22A657A08194_Enum_3_24976845B713882E Field_3_4; // 0x60
	::UnityEngine::Vector3 Field_3_2; // 0x64
	::System::Single Field_3_3; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_5C0658D38A69B192(::MoleMole::Battle::Entity* a1, ::Class_1_7B8672D4F89E3D96* a2, ::UnityEngine::Vector3 a3, ::Class_3_2E9C22A657A08194_Enum_3_24976845B713882E a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_7B8672D4F89E3D96*, ::UnityEngine::Vector3, ::Class_3_2E9C22A657A08194_Enum_3_24976845B713882E))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_5C0658D38A69B192_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_2E9C22A657A08194* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_2E9C22A657A08194*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_D13B6F00E7A83DA6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_D13B6F00E7A83DA6_OFFSET))(this, a1);
	}

	::System::Void Method_3_73325761F6F6EE1A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_73325761F6F6EE1A_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_4D978F94B6C77A60(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_4D978F94B6C77A60_OFFSET))(this, a1);
	}
};
