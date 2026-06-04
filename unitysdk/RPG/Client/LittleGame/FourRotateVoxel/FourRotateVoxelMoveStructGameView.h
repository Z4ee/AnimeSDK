#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelStructGameView.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW_METHOD_8_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBE282A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW_METHOD_8_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE280B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBE28100)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelMoveStructGameView_TypeDefinitionIndex = 71382;

	class FourRotateVoxelMoveStructGameView : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* TargetPositions; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PrivateTargetPositions; // 0xE0
		::System::Collections::Generic::List_1<::System::Single>* MoveDurations; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW_METHOD_8_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_8_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW_METHOD_8_5790A55946AA509D_OFFSET))(this);
		}
	};
}
