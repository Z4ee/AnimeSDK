#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_1_AF85D707C83D7C65;
class Class_1_CA9A7ECA43FC8636;
class Class_2_0C58AD91B0F4D809;
class Class_2_1A8148841049062A;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12977410)
#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS14_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x12977D30)
#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS14_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x129780B0)
#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS14_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET UNITYSDK_OFFSET(0x12978240)

inline static constexpr unsigned int Class_1_CA9A7ECA43FC8636___c__DisplayClass14_0_TypeDefinitionIndex = 70529;

class Class_1_CA9A7ECA43FC8636___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_1_CA9A7ECA43FC8636* __4__this; // 0x10
	::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*>*>* data; // 0x18
	::Class_2_0C58AD91B0F4D809* triggerEntity; // 0x20
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x28
	::Class_1_AF85D707C83D7C65* scene; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __Add2DBrickInteractTrigger_b__0(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS14_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET))(this, guestEntity);
	}

	::System::Void __Add2DBrickInteractTrigger_b__1(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS14_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET))(this, guestEntity);
	}

	::System::Void __Add2DBrickInteractTrigger_b__2(::Class_2_0C58AD91B0F4D809* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS14_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET))(this, entity);
	}
};
