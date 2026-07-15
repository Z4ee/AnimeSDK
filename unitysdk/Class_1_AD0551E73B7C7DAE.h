#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
#include "unitysdk/System/Object.h"

class Class_1_47046CCF05D86867;
class Class_2_2661F5CE5402F421;
class Class_3_565AF2729F18922B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AD0551E73B7C7DAE_METHOD_1_3CC817B2D5B3D3CB_OFFSET UNITYSDK_OFFSET(0x19CAFA50)
#define CLASS_1_AD0551E73B7C7DAE_METHOD_1_D32673B1F447E230_OFFSET UNITYSDK_OFFSET(0x19CAF9F0)
#define CLASS_1_AD0551E73B7C7DAE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAFAF0)

inline static constexpr unsigned int Class_1_AD0551E73B7C7DAE_TypeDefinitionIndex = 40607;

class Class_1_AD0551E73B7C7DAE : public ::System::Object
{
public:
	::Class_1_47046CCF05D86867* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::Class_3_565AF2729F18922B*>* Field_1_2; // 0x20
	::UnityEngine::GameObject* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::Class_2_2661F5CE5402F421*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD0551E73B7C7DAE__CTOR_OFFSET))(this);
	}

	::Class_3_565AF2729F18922B* Method_1_D32673B1F447E230(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1)
	{
		return ((::Class_3_565AF2729F18922B*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType))((::PBYTE)hIl2Cpp + CLASS_1_AD0551E73B7C7DAE_METHOD_1_D32673B1F447E230_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CC817B2D5B3D3CB(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::Class_3_565AF2729F18922B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::Class_3_565AF2729F18922B*))((::PBYTE)hIl2Cpp + CLASS_1_AD0551E73B7C7DAE_METHOD_1_3CC817B2D5B3D3CB_OFFSET))(this, a1, a2);
	}
};
