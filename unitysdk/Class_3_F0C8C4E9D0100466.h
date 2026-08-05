#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"

class Class_0_16E4307DCC419505_280;
class Class_1_D1A44554FE046F73;
class Class_3_28271F07DD4A0D2E_2;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_F0C8C4E9D0100466_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12F1DEA0)
#define CLASS_3_F0C8C4E9D0100466_METHOD_3_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x12F1E100)
#define CLASS_3_F0C8C4E9D0100466_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12F1E190)
#define CLASS_3_F0C8C4E9D0100466_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x12F1E000)
#define CLASS_3_F0C8C4E9D0100466_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12F1D9B0)
#define CLASS_3_F0C8C4E9D0100466__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F1DEF0)
#define CLASS_3_F0C8C4E9D0100466__CTOR_OFFSET UNITYSDK_OFFSET(0x12F1DF70)

inline static constexpr unsigned int Class_3_F0C8C4E9D0100466_TypeDefinitionIndex = 61379;

class Class_3_F0C8C4E9D0100466 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_14 = 0xAF; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_280*>* Field_3_1; // 0x48
	::Class_3_28271F07DD4A0D2E_2* Field_3_0; // 0x50
	::MoleMole::EntityHandle Field_3_6; // 0x58
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* Field_3_15; // 0x68
	::System::Collections::Generic::List_1<::Class_1_D1A44554FE046F73*>* Field_3_5; // 0x70
	::MoleMole::EntityHandle Field_3_7; // 0x78
	::Class_3_F41D242A20F8FE06* Field_3_2; // 0x88
	::System::Int32 Field_3_10; // 0x90
	::System::Boolean Field_3_4; // 0x94
	::System::Single Field_3_8; // 0x98
	::Struct_2_FC595D1A561D8C6F_1 Field_3_11; // 0x9C
	::System::Single Field_3_9; // 0xB8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F0C8C4E9D0100466__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C8C4E9D0100466__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C8C4E9D0100466_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C8C4E9D0100466_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_F0C8C4E9D0100466* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_F0C8C4E9D0100466*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F0C8C4E9D0100466_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::Class_1_D1A44554FE046F73* Method_3_358A144584A5DBFC()
	{
		return ((::Class_1_D1A44554FE046F73*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C8C4E9D0100466_METHOD_3_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F0C8C4E9D0100466_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
