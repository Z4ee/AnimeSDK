#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_1_AD0551E73B7C7DAE;
class Class_1_FB7D93F2E04FE1B6;
class Class_2_2661F5CE5402F421;
class Class_2_56DCA1B58073717B;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x146D6FF0)
#define CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x146D77E0)
#define CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x146D7B20)
#define CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET UNITYSDK_OFFSET(0x146D7C60)

inline static constexpr unsigned int Class_1_FB7D93F2E04FE1B6___c__DisplayClass17_0_TypeDefinitionIndex = 72871;

class Class_1_FB7D93F2E04FE1B6___c__DisplayClass17_0 : public ::System::Object
{
public:
	::Class_2_56DCA1B58073717B* triggerEntity; // 0x10
	::Class_1_AD0551E73B7C7DAE* scene; // 0x18
	::Class_1_FB7D93F2E04FE1B6* __4__this; // 0x20
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x28
	::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_2661F5CE5402F421*>*>* data; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::System::Void __Add2DBrickInteractTrigger_b__0(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET))(this, a1);
	}

	::System::Void __Add2DBrickInteractTrigger_b__1(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET))(this, a1);
	}

	::System::Void __Add2DBrickInteractTrigger_b__2(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS17_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET))(this, a1);
	}
};
