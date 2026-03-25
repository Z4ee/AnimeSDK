#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
#include "unitysdk/System/Object.h"

class Class_1_9B467A75B352C0A6;
class Class_2_9C2F1FCEC1A75FFD;
class Class_3_79A4F66B82C02A5E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AF85D707C83D7C65_METHOD_1_5BD54ACACE8B2D70_OFFSET UNITYSDK_OFFSET(0x169E0AF0)
#define CLASS_1_AF85D707C83D7C65_METHOD_1_A0160E598AC4DBB4_OFFSET UNITYSDK_OFFSET(0x169E0A60)
#define CLASS_1_AF85D707C83D7C65__CTOR_OFFSET UNITYSDK_OFFSET(0x169E0BB0)

inline static constexpr unsigned int Class_1_AF85D707C83D7C65_TypeDefinitionIndex = 33240;

class Class_1_AF85D707C83D7C65 : public ::System::Object
{
public:
	::Class_1_9B467A75B352C0A6* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_2_9C2F1FCEC1A75FFD*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::Class_3_79A4F66B82C02A5E*>* Field_1_1; // 0x20
	::UnityEngine::GameObject* Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*>* Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF85D707C83D7C65__CTOR_OFFSET))(this);
	}

	::Class_3_79A4F66B82C02A5E* Method_1_A0160E598AC4DBB4(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1)
	{
		return ((::Class_3_79A4F66B82C02A5E*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType))((::PBYTE)hIl2Cpp + CLASS_1_AF85D707C83D7C65_METHOD_1_A0160E598AC4DBB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BD54ACACE8B2D70(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::Class_3_79A4F66B82C02A5E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::Class_3_79A4F66B82C02A5E*))((::PBYTE)hIl2Cpp + CLASS_1_AF85D707C83D7C65_METHOD_1_5BD54ACACE8B2D70_OFFSET))(this, a1, a2);
	}
};
