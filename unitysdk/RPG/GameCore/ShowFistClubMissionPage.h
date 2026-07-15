#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1BE3EEB0)
#define RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE3EE60)
#define RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE_GET_FISTRESULT_OFFSET UNITYSDK_OFFSET(0x1BE3F040)
#define RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE_SET_FISTRESULT_OFFSET UNITYSDK_OFFSET(0x1BE3F050)
#define RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3EEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowFistClubMissionPage_TypeDefinitionIndex = 21133;

	class ShowFistClubMissionPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 FistIndex; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPageCancel; // 0x20
		::System::Boolean _FistResult_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFistClubMissionPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFistClubMissionPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowFistClubMissionPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowFistClubMissionPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

		::System::Boolean get_FistResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE_GET_FISTRESULT_OFFSET))(this);
		}

		::System::Void set_FistResult(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWFISTCLUBMISSIONPAGE_SET_FISTRESULT_OFFSET))(this, a1);
		}
	};
}
