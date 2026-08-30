#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/System/Object.h"

class Class_2_1A8148841049062A;
class Class_2_B8E38BF47138A2E5;
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayerBase_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_12717824E30066E1_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1C517BA0)
#define CLASS_1_12717824E30066E1_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1C517BF0)
#define CLASS_1_12717824E30066E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C517C50)

inline static constexpr unsigned int Class_1_12717824E30066E1_TypeDefinitionIndex = 41537;

class Class_1_12717824E30066E1 : public ::System::Object
{
public:
	::Class_2_B8E38BF47138A2E5* OFHDAHHPNPJ; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerBase_1<::Class_2_1A8148841049062A*>*>* DKMKPJDKHPP; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* JAGJDMEHJDM; // 0x20
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType LINLNNHIBAK; // 0x28
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord FOCNBOANONM; // 0x2C
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection LJDHGFECMHJ; // 0x44
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord GCGIFJAEHLP; // 0x48
	::System::Int32 MOGHLGBCKFA; // 0x60
	::System::Boolean AOCKKNBBKPB; // 0x64
	::System::Boolean HNFLBHAALCG; // 0x65
	::System::Boolean PGMNHIPKCMD; // 0x66

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12717824E30066E1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12717824E30066E1_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12717824E30066E1_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
