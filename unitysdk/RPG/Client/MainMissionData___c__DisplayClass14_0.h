#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09B5AE4A49F8C191;

#define RPG_CLIENT_MAINMISSIONDATA___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9AB2DB0)
#define RPG_CLIENT_MAINMISSIONDATA___C__DISPLAYCLASS14_0__ONHOYOGROUPACTIVECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x9ABF500)

namespace RPG::Client
{
	inline static constexpr unsigned int MainMissionData___c__DisplayClass14_0_TypeDefinitionIndex = 53753;

	class MainMissionData___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnHoYoGroupActiveChange_b__0(::Class_1_09B5AE4A49F8C191* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_09B5AE4A49F8C191*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___C__DISPLAYCLASS14_0__ONHOYOGROUPACTIVECHANGE_B__0_OFFSET))(this, item);
		}
	};
}
