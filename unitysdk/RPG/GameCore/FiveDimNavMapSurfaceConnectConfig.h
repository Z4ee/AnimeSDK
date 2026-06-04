#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSurfaceConnectDirection.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_METHOD_3_4F7D18970A1B338D_OFFSET UNITYSDK_OFFSET(0x1974B8C0)
#define RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_METHOD_3_8F91AF656AD36A7A_OFFSET UNITYSDK_OFFSET(0x1974B930)
#define RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1974B910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimNavMapSurfaceConnectConfig_TypeDefinitionIndex = 17919;

	class FiveDimNavMapSurfaceConnectConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSurfaceConnect; // 0x10
		::System::UInt32 ConnectEntityID; // 0x14
		::RPG::GameCore::FiveDimSurfaceConnectDirection Direction; // 0x18
		::System::Boolean HideWaypointInFace; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4F7D18970A1B338D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_METHOD_3_4F7D18970A1B338D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F91AF656AD36A7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMNAVMAPSURFACECONNECTCONFIG_METHOD_3_8F91AF656AD36A7A_OFFSET))(a1, a2);
		}
	};
}
