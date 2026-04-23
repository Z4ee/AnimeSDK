#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_2_1A8148841049062A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_86D6A61A4F68A5B8__CTOR_OFFSET UNITYSDK_OFFSET(0x17E5E770)

inline static constexpr unsigned int Class_1_86D6A61A4F68A5B8_TypeDefinitionIndex = 39046;

class Class_1_86D6A61A4F68A5B8 : public ::System::Object
{
public:
	::Class_2_0C58AD91B0F4D809* Field_1_1; // 0x10
	::Class_2_0C58AD91B0F4D809* Field_1_6; // 0x18
	::Class_2_0C58AD91B0F4D809* Field_1_5; // 0x20
	::Class_2_0C58AD91B0F4D809* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>*>* Field_1_4; // 0x30
	::Class_2_0C58AD91B0F4D809* Field_1_2; // 0x38
	::System::Boolean Field_1_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86D6A61A4F68A5B8__CTOR_OFFSET))(this);
	}
};
