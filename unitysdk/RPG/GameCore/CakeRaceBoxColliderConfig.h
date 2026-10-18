#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_METHOD_3_D21BE92B8358129D_OFFSET UNITYSDK_OFFSET(0x1D54C9C0)
#define RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_METHOD_3_ED934E259B622FE9_OFFSET UNITYSDK_OFFSET(0x1D54CA20)
#define RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D54CA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBoxColliderConfig_TypeDefinitionIndex = 18422;

	class CakeRaceBoxColliderConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::MVector2 Extents; // 0x10
		::System::Single Height; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D21BE92B8358129D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBoxColliderConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBoxColliderConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_METHOD_3_D21BE92B8358129D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED934E259B622FE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBoxColliderConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBoxColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBOXCOLLIDERCONFIG_METHOD_3_ED934E259B622FE9_OFFSET))(a1, a2);
		}
	};
}
