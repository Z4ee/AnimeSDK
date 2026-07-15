#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_1_86D6A61A4F68A5B8;
class Class_2_2661F5CE5402F421;
class Class_2_47C66A3BEB7A5F01;
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBB1F0)
#define CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS4_0__UPGRADENEXT2DBRICK_B__0_OFFSET UNITYSDK_OFFSET(0x16CBB200)

inline static constexpr unsigned int Class_2_47C66A3BEB7A5F01___c__DisplayClass4_0_TypeDefinitionIndex = 57698;

class Class_2_47C66A3BEB7A5F01___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_86D6A61A4F68A5B8* snapshot; // 0x10
	::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_2661F5CE5402F421*>*>* data; // 0x18
	::Class_2_47C66A3BEB7A5F01* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _UpgradeNext2DBrick_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47C66A3BEB7A5F01___C__DISPLAYCLASS4_0__UPGRADENEXT2DBRICK_B__0_OFFSET))(this);
	}
};
