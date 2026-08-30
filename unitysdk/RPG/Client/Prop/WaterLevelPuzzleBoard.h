#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzleBoard.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0x17B26F00)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_METHOD_8_D66FD197FFC5F33F_OFFSET UNITYSDK_OFFSET(0x17B28180)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x17B28270)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x17B282D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelPuzzleBoard_TypeDefinitionIndex = 78382;

	class WaterLevelPuzzleBoard : public ::RPG::Client::Prop::BoxmanPuzzleBoard
	{
	public:
		::System::Single GridHeight; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Boolean Method_8_D66FD197FFC5F33F(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_METHOD_8_D66FD197FFC5F33F_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_UPDATE_OFFSET))(this);
		}
	};
}
