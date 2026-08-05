#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_2E9C22A657A08194_Enum_3_24976845B713882E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7B8672D4F89E3D96;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class CapsuleCollider; }

#define CLASS_3_2E9C22A657A08194_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x185D3E10)
#define CLASS_3_2E9C22A657A08194_METHOD_3_14588B9EF32611C7_OFFSET UNITYSDK_OFFSET(0x185D41E0)
#define CLASS_3_2E9C22A657A08194_METHOD_3_4D978F94B6C77A60_OFFSET UNITYSDK_OFFSET(0x185D45A0)
#define CLASS_3_2E9C22A657A08194_METHOD_3_5C0658D38A69B192_OFFSET UNITYSDK_OFFSET(0x185D4480)
#define CLASS_3_2E9C22A657A08194_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x185D4510)
#define CLASS_3_2E9C22A657A08194_METHOD_3_B82CC466E4908722_OFFSET UNITYSDK_OFFSET(0x185D3F70)
#define CLASS_3_2E9C22A657A08194_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x185D3EF0)
#define CLASS_3_2E9C22A657A08194_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x185D3C50)
#define CLASS_3_2E9C22A657A08194__CCTOR_OFFSET UNITYSDK_OFFSET(0x185D3E60)
#define CLASS_3_2E9C22A657A08194__CTOR_OFFSET UNITYSDK_OFFSET(0x185D3EE0)

inline static constexpr unsigned int Class_3_2E9C22A657A08194_TypeDefinitionIndex = 42706;

class Class_3_2E9C22A657A08194 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_10 = 0xA7; // 0x0
	::MoleMole::Battle::Entity* Field_3_0; // 0x48
	::UnityEngine::CapsuleCollider* Field_3_11; // 0x50
	::Class_1_7B8672D4F89E3D96* Field_3_7; // 0x58
	::System::Single Field_3_5; // 0x60
	::UnityEngine::Vector3 Field_3_6; // 0x64
	::Class_3_2E9C22A657A08194_Enum_3_24976845B713882E Field_3_4; // 0x70

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

	static ::Class_3_2E9C22A657A08194* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_2E9C22A657A08194*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_B82CC466E4908722(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_B82CC466E4908722_OFFSET))(this, a1);
	}

	::System::Void Method_3_14588B9EF32611C7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_14588B9EF32611C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C0658D38A69B192(::MoleMole::Battle::Entity* a1, ::Class_1_7B8672D4F89E3D96* a2, ::UnityEngine::Vector3 a3, ::Class_3_2E9C22A657A08194_Enum_3_24976845B713882E a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_7B8672D4F89E3D96*, ::UnityEngine::Vector3, ::Class_3_2E9C22A657A08194_Enum_3_24976845B713882E))((::PBYTE)hIl2Cpp + CLASS_3_2E9C22A657A08194_METHOD_3_5C0658D38A69B192_OFFSET))(this, a1, a2, a3, a4);
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
