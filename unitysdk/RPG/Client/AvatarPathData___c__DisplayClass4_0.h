#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_11;

#define RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91528E0)
#define RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS4_0__GETSKILLTREEPOINTLEVEL_B__0_OFFSET UNITYSDK_OFFSET(0x9152A60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathData___c__DisplayClass4_0_TypeDefinitionIndex = 53916;

	class AvatarPathData___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 pointID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkillTreePointLevel_b__0(::Class_1_FA4F4A67B1C04320_11* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHDATA___C__DISPLAYCLASS4_0__GETSKILLTREEPOINTLEVEL_B__0_OFFSET))(this, item);
		}
	};
}
