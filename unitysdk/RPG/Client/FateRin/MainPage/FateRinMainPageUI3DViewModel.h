#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5060AE803DAE1512;

#define RPG_CLIENT_FATERIN_MAINPAGE_FATERINMAINPAGEUI3DVIEWMODEL_GET_GRAILSTATE_OFFSET UNITYSDK_OFFSET(0xD00DA10)
#define RPG_CLIENT_FATERIN_MAINPAGE_FATERINMAINPAGEUI3DVIEWMODEL_GET_ISMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xD00DA00)
#define RPG_CLIENT_FATERIN_MAINPAGE_FATERINMAINPAGEUI3DVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD00D960)

namespace RPG::Client::FateRin::MainPage
{
	inline static constexpr unsigned int FateRinMainPageUI3DViewModel_TypeDefinitionIndex = 79313;

	class FateRinMainPageUI3DViewModel : public ::System::Object
	{
	public:
		::System::UInt32 _GrailState_k__BackingField; // 0x10
		::System::Boolean _IsMainMissionFinished_k__BackingField; // 0x14

		::System::Void _ctor(::Class_1_5060AE803DAE1512* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5060AE803DAE1512*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_MAINPAGE_FATERINMAINPAGEUI3DVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMainMissionFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_MAINPAGE_FATERINMAINPAGEUI3DVIEWMODEL_GET_ISMAINMISSIONFINISHED_OFFSET))(this);
		}

		::System::UInt32 get_GrailState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_MAINPAGE_FATERINMAINPAGEUI3DVIEWMODEL_GET_GRAILSTATE_OFFSET))(this);
		}
	};
}
