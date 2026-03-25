#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzleBoard.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xA17C770)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_METHOD_8_104BCF7E2C06B7C3_OFFSET UNITYSDK_OFFSET(0xA17DB60)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_METHOD_8_D66FD197FFC5F33F_OFFSET UNITYSDK_OFFSET(0xA17D980)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xA17DA80)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA17DAE0)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD___IFIXBASEPROXY_INITITEMS_OFFSET UNITYSDK_OFFSET(0xA17DB50)
#define RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xA17DB90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WaterLevelPuzzleBoard_TypeDefinitionIndex = 64303;

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

		::System::Void __iFixBaseProxy_InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD___IFIXBASEPROXY_INITITEMS_OFFSET))(this);
		}

		::System::Boolean Method_8_104BCF7E2C06B7C3(::UnityEngine::Vector3 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD_METHOD_8_104BCF7E2C06B7C3_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WATERLEVELPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}
	};
}
