#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/System/Object.h"

class Class_2_2661F5CE5402F421;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B5562A19776453F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B251F10)

inline static constexpr unsigned int Class_1_B5562A19776453F1_TypeDefinitionIndex = 40598;

class Class_1_B5562A19776453F1 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_2661F5CE5402F421*>* Field_1_1; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5562A19776453F1__CTOR_OFFSET))(this);
	}
};
