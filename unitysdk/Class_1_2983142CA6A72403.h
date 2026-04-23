#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/System/Object.h"

class Class_2_1A8148841049062A;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_2983142CA6A72403__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8AC40)

inline static constexpr unsigned int Class_1_2983142CA6A72403_TypeDefinitionIndex = 39021;

class Class_1_2983142CA6A72403 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>* Field_1_2; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2983142CA6A72403__CTOR_OFFSET))(this);
	}
};
