#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"

class Class_0_16E4307DCC419505_370;
class Class_1_D1A44554FE046F73;
class Class_3_28271F07DD4A0D2E_3;
class Class_3_F41D242A20F8FE06;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DBF5783EF2C3816D_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16C20520)
#define CLASS_3_DBF5783EF2C3816D_METHOD_3_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x16C20680)
#define CLASS_3_DBF5783EF2C3816D_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16C20710)
#define CLASS_3_DBF5783EF2C3816D_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x16C207A0)
#define CLASS_3_DBF5783EF2C3816D_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16C20030)
#define CLASS_3_DBF5783EF2C3816D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C20570)
#define CLASS_3_DBF5783EF2C3816D__CTOR_OFFSET UNITYSDK_OFFSET(0x16C205F0)

inline static constexpr unsigned int Class_3_DBF5783EF2C3816D_TypeDefinitionIndex = 48574;

class Class_3_DBF5783EF2C3816D : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0xA3; // 0x0
	::MoleMole::EntityHandle Field_3_3; // 0x48
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_370*>* Field_3_1; // 0x58
	::MoleMole::EntityHandle Field_3_4; // 0x60
	::Class_3_F41D242A20F8FE06* Field_3_0; // 0x70
	::System::Collections::Generic::List_1<::Class_1_D1A44554FE046F73*>* Field_3_5; // 0x78
	::Class_3_28271F07DD4A0D2E_3* Field_3_2; // 0x80
	::System::Boolean Field_3_6; // 0x88
	::System::Single Field_3_10; // 0x8C
	::Struct_2_FC595D1A561D8C6F Field_3_7; // 0x90
	::System::Int32 Field_3_8; // 0xAC
	::System::Single Field_3_9; // 0xB0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DBF5783EF2C3816D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBF5783EF2C3816D__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBF5783EF2C3816D_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBF5783EF2C3816D_GETCLASSID_OFFSET))(this);
	}

	::Class_1_D1A44554FE046F73* Method_3_358A144584A5DBFC()
	{
		return ((::Class_1_D1A44554FE046F73*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBF5783EF2C3816D_METHOD_3_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBF5783EF2C3816D_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_DBF5783EF2C3816D* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_DBF5783EF2C3816D*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DBF5783EF2C3816D_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}
};
