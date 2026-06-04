#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/EntityType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKVISIONAXIS_METHOD_3_3FBF01CEC2D999E0_OFFSET UNITYSDK_OFFSET(0x19619E30)
#define RPG_GAMECORE_CHECKVISIONAXIS_METHOD_3_C72160262CE66467_OFFSET UNITYSDK_OFFSET(0x19619E70)
#define RPG_GAMECORE_CHECKVISIONAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x19619E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckVisionAxis_TypeDefinitionIndex = 14747;

	class CheckVisionAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::EntityType TargetType; // 0x10
		::System::Single VisionDistance; // 0x14
		::System::Single VisionAngle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKVISIONAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FBF01CEC2D999E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckVisionAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckVisionAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKVISIONAXIS_METHOD_3_3FBF01CEC2D999E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C72160262CE66467(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckVisionAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckVisionAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKVISIONAXIS_METHOD_3_C72160262CE66467_OFFSET))(a1, a2);
		}
	};
}
