#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT_METHOD_3_4A039404CE7EDE26_OFFSET UNITYSDK_OFFSET(0x1CFEA570)
#define RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT_METHOD_3_CE8B2CD67B77B523_OFFSET UNITYSDK_OFFSET(0x1CFEA4A0)
#define RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEA560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTakePhotoReport_TypeDefinitionIndex = 21396;

	class ClockParkTakePhotoReport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE8B2CD67B77B523(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkTakePhotoReport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkTakePhotoReport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT_METHOD_3_CE8B2CD67B77B523_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A039404CE7EDE26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkTakePhotoReport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkTakePhotoReport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT_METHOD_3_4A039404CE7EDE26_OFFSET))(a1, a2);
		}
	};
}
