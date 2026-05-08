#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_9666512A8D753070.h"

class Class_1_CFC8E3321E6584C8;
class Class_2_93A9E55A4E05FAD9;
class Class_2_93A9E55A4E05FAD9_1;
class Class_2_93A9E55A4E05FAD9_2;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternMorphBase; }

#define CLASS_3_6B90C9F119FE08BB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14398E20)
#define CLASS_3_6B90C9F119FE08BB_METHOD_3_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0x14399060)
#define CLASS_3_6B90C9F119FE08BB_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14398FD0)
#define CLASS_3_6B90C9F119FE08BB_METHOD_3_FFFD00FEC6029AE6_OFFSET UNITYSDK_OFFSET(0x14398F60)
#define CLASS_3_6B90C9F119FE08BB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14398CD0)
#define CLASS_3_6B90C9F119FE08BB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14398E70)
#define CLASS_3_6B90C9F119FE08BB__CTOR_OFFSET UNITYSDK_OFFSET(0x14398EF0)

inline static constexpr unsigned int Class_3_6B90C9F119FE08BB_TypeDefinitionIndex = 78405;

class Class_3_6B90C9F119FE08BB : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_8 = 0x6; // 0x0
	::MoleMole::Battle::Entity* Field_3_7; // 0x48
	::MoleMole::Config::AttackPatternMorphBase* Field_3_1; // 0x50
	::Class_2_93A9E55A4E05FAD9_2* Field_3_4; // 0x58
	::Class_1_CFC8E3321E6584C8* Field_3_0; // 0x60
	::Class_2_93A9E55A4E05FAD9_1* Field_3_3; // 0x68
	::Class_2_93A9E55A4E05FAD9* Field_3_5; // 0x70
	::Enum_3_9666512A8D753070 Field_3_2; // 0x78
	::System::Single Field_3_6; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6B90C9F119FE08BB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B90C9F119FE08BB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B90C9F119FE08BB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B90C9F119FE08BB_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_FFFD00FEC6029AE6(::MoleMole::Config::AttackPatternMorphBase* a1, ::System::Single a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AttackPatternMorphBase*, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_6B90C9F119FE08BB_METHOD_3_FFFD00FEC6029AE6_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B90C9F119FE08BB_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_6B90C9F119FE08BB* Method_3_4AA7827CFB505DDD()
	{
		return ((::Class_3_6B90C9F119FE08BB*(*)())((::PBYTE)hIl2Cpp + CLASS_3_6B90C9F119FE08BB_METHOD_3_4AA7827CFB505DDD_OFFSET))();
	}
};
