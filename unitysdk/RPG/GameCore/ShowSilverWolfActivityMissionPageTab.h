#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_METHOD_3_2BDBC8F7A7D5DC12_OFFSET UNITYSDK_OFFSET(0x1D09A780)
#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_METHOD_3_5F9E54000F330FD1_OFFSET UNITYSDK_OFFSET(0x1D09A7C0)
#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09A7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSilverWolfActivityMissionPageTab_TypeDefinitionIndex = 21455;

	class ShowSilverWolfActivityMissionPageTab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TabIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2BDBC8F7A7D5DC12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_METHOD_3_2BDBC8F7A7D5DC12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F9E54000F330FD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_METHOD_3_5F9E54000F330FD1_OFFSET))(a1, a2);
		}
	};
}
