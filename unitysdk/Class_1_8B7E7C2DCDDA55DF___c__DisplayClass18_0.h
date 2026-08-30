#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_1_8B7E7C2DCDDA55DF;
class Class_1_AF85D707C83D7C65;
class Class_2_1A8148841049062A;
class Class_2_B8E38BF47138A2E5;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1622C960)
#define CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1622D1D0)
#define CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x1622D530)
#define CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET UNITYSDK_OFFSET(0x1622D6A0)

inline static constexpr unsigned int Class_1_8B7E7C2DCDDA55DF___c__DisplayClass18_0_TypeDefinitionIndex = 76343;

class Class_1_8B7E7C2DCDDA55DF___c__DisplayClass18_0 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x10
	::Class_2_B8E38BF47138A2E5* ownerEntity; // 0x18
	::Class_2_B8E38BF47138A2E5* triggerEntity; // 0x20
	::Class_1_8B7E7C2DCDDA55DF* __4__this; // 0x28
	::RPG::GameCore::PropButtonConfig* buttonConfig; // 0x30
	::Class_1_AF85D707C83D7C65* scene; // 0x38
	::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*>*>* data; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void __Add2DBrickInteractTrigger_b__0(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void __Add2DBrickInteractTrigger_b__1(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET))(this, a1);
	}

	::System::Void __Add2DBrickInteractTrigger_b__2(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_8B7E7C2DCDDA55DF___C__DISPLAYCLASS18_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET))(this, a1);
	}
};
