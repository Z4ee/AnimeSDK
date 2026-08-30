#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_1_86D6A61A4F68A5B8;
class Class_2_1A8148841049062A;
class Class_2_4EEAD21E873B5A41;
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170CD7F0)
#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS4_0__UPGRADENEXT2DBRICK_B__0_OFFSET UNITYSDK_OFFSET(0x170D8140)

inline static constexpr unsigned int Class_2_4EEAD21E873B5A41___c__DisplayClass4_0_TypeDefinitionIndex = 60515;

class Class_2_4EEAD21E873B5A41___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_1A8148841049062A*>*>* data; // 0x10
	::Class_1_86D6A61A4F68A5B8* snapshot; // 0x18
	::Class_2_4EEAD21E873B5A41* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _UpgradeNext2DBrick_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS4_0__UPGRADENEXT2DBRICK_B__0_OFFSET))(this);
	}
};
