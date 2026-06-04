#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/TRFCubeType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_METHOD_3_0B8EFF26C7138B34_OFFSET UNITYSDK_OFFSET(0x19CEC9E0)
#define RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_METHOD_3_C12759A364296DA0_OFFSET UNITYSDK_OFFSET(0x19CECA70)
#define RPG_GAMECORE_TRFCUBECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CECA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFCubeComponentConfig_TypeDefinitionIndex = 17979;

	class TRFCubeComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::TRFCubeType CubeType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCUBECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B8EFF26C7138B34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFCubeComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFCubeComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_METHOD_3_0B8EFF26C7138B34_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C12759A364296DA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFCubeComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFCubeComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFCUBECOMPONENTCONFIG_METHOD_3_C12759A364296DA0_OFFSET))(a1, a2);
		}
	};
}
