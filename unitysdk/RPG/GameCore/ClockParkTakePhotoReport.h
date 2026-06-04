#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT_METHOD_3_266338530BFF8DDA_OFFSET UNITYSDK_OFFSET(0x19662590)
#define RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT_METHOD_3_4A039404CE7EDE26_OFFSET UNITYSDK_OFFSET(0x196626A0)
#define RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x19662670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTakePhotoReport_TypeDefinitionIndex = 20425;

	class ClockParkTakePhotoReport : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_266338530BFF8DDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkTakePhotoReport*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkTakePhotoReport*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT_METHOD_3_266338530BFF8DDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A039404CE7EDE26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkTakePhotoReport* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkTakePhotoReport*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTAKEPHOTOREPORT_METHOD_3_4A039404CE7EDE26_OFFSET))(a1, a2);
		}
	};
}
