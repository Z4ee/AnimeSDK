#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_1_8B7E7C2DCDDA55DF;
class Class_1_AF85D707C83D7C65;
class Class_2_1A8148841049062A;
class Class_2_B8E38BF47138A2E5;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1429A4F0)
#define CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1429AD60)
#define CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x1429B0C0)
#define CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET UNITYSDK_OFFSET(0x1429B230)

inline static constexpr unsigned int Class_1_8B7E7C2DCDDA55DF___c__DisplayClass17_0_TypeDefinitionIndex = 71346;

class Class_1_8B7E7C2DCDDA55DF___c__DisplayClass17_0 : public ::System::Object
{
public:
	::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*>*>* data; // 0x10
	::Class_1_AF85D707C83D7C65* scene; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x20
	::Class_1_8B7E7C2DCDDA55DF* __4__this; // 0x28
	::Class_2_B8E38BF47138A2E5* triggerEntity; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::System::Void __Add2DBrickInteractTrigger_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void __Add2DBrickInteractTrigger_b__1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET))(this, a1);
	}

	::System::Void __Add2DBrickInteractTrigger_b__2(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET))(this, a1);
	}
};
