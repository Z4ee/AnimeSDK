#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_EEF876199B63DFBA_CLASS_1_5438E1172F1F1434_COMPARE_OFFSET UNITYSDK_OFFSET(0x8FBD2D0)
#define CLASS_2_EEF876199B63DFBA_CLASS_1_5438E1172F1F1434__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FBD370)
#define CLASS_2_EEF876199B63DFBA_CLASS_1_5438E1172F1F1434__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBD360)

inline static constexpr unsigned int Class_2_EEF876199B63DFBA_Class_1_5438E1172F1F1434_TypeDefinitionIndex = 70460;

class Class_2_EEF876199B63DFBA_Class_1_5438E1172F1F1434 : public ::System::Object
{
public:
	static ::Class_2_EEF876199B63DFBA_Class_1_5438E1172F1F1434** StaticGet_Field_1_0()
	{
		return (::Class_2_EEF876199B63DFBA_Class_1_5438E1172F1F1434**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EEF876199B63DFBA_Class_1_5438E1172F1F1434_TypeDefinitionIndex)->GetStaticField(0x61360);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_CLASS_1_5438E1172F1F1434__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_CLASS_1_5438E1172F1F1434__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_2_EEF876199B63DFBA_CLASS_1_5438E1172F1F1434_COMPARE_OFFSET))(this, a1, a2);
	}
};
