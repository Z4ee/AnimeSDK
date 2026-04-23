#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }

#define RPG_GAMECORE_LOCATIONCONFIG_METHOD_2_09290BFB0D83795C_OFFSET UNITYSDK_OFFSET(0x18A77030)
#define RPG_GAMECORE_LOCATIONCONFIG_METHOD_2_BAE9EAF11BB67243_OFFSET UNITYSDK_OFFSET(0x18A76A00)
#define RPG_GAMECORE_LOCATIONCONFIG_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x18A77060)
#define RPG_GAMECORE_LOCATIONCONFIG_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x18A77080)
#define RPG_GAMECORE_LOCATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A77020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LocationConfig_TypeDefinitionIndex = 15615;

	class LocationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Width; // 0x10
		::System::Single WidthMin; // 0x14
		::System::Single LocalZOffsetFixed; // 0x18
		::System::Single LocalZOffsetMin; // 0x1C
		::System::Single LocalZOffsetMax; // 0x20
		::System::Single CentralXOffset; // 0x24
		::System::Single TeamDistanceOffset; // 0x28
		::System::Boolean DisableEnemyFaceTo; // 0x2C
		::System::Boolean DisableFaceToActionEntity; // 0x2D
		::System::Boolean RotateWithOtherTeammate; // 0x2E
		::RPG::MVector3 RootOffset; // 0x30
		::System::Boolean RotateByRootOffset; // 0x3C
		::System::Boolean AlignTeamCenter; // 0x3D
		::RPG::MVector3 FormationFollowOffset; // 0x40
		::System::Single FormationFollowAngleOffset; // 0x4C
		::System::Single CloseToSummonerRatio; // 0x50
		::System::Boolean PreferLowerFormationIndex; // 0x54
		::RPG::MVector3 PuppetCustomFormationOffset; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BAE9EAF11BB67243(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LocationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LocationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_METHOD_2_BAE9EAF11BB67243_OFFSET))(a1, a2);
		}

		::System::Single Method_2_09290BFB0D83795C(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_METHOD_2_09290BFB0D83795C_OFFSET))(this, a1);
		}

		::System::Single Method_2_FB4BE762B6186C23()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_SHAREBYCOPY_OFFSET))(this);
		}
	};
}
