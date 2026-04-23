#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_METHOD_3_5F9E54000F330FD1_OFFSET UNITYSDK_OFFSET(0x18E67160)
#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_METHOD_3_EFF6B3030922A488_OFFSET UNITYSDK_OFFSET(0x18E670E0)
#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB__CTOR_OFFSET UNITYSDK_OFFSET(0x18E67130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSilverWolfActivityMissionPageTab_TypeDefinitionIndex = 20548;

	class ShowSilverWolfActivityMissionPageTab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TabIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFF6B3030922A488(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_METHOD_3_EFF6B3030922A488_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F9E54000F330FD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_METHOD_3_5F9E54000F330FD1_OFFSET))(a1, a2);
		}
	};
}
