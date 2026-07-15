#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_16FA4AABDA466FD1_OFFSET UNITYSDK_OFFSET(0x1A8D4F10)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_75AC6D813C1B44CE_OFFSET UNITYSDK_OFFSET(0x1A8D4EE0)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_C28E1B515F24D79D_OFFSET UNITYSDK_OFFSET(0x1A8D4D30)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_F6D63E59267DFFA4_OFFSET UNITYSDK_OFFSET(0x1A8D4D70)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D4D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsActivityInSchedule_TypeDefinitionIndex = 20165;

	class ByIsActivityInSchedule : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 ActivityPanelID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C28E1B515F24D79D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsActivityInSchedule*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsActivityInSchedule*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_C28E1B515F24D79D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6D63E59267DFFA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_F6D63E59267DFFA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_75AC6D813C1B44CE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_75AC6D813C1B44CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_16FA4AABDA466FD1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_METHOD_4_16FA4AABDA466FD1_OFFSET))(a1, a2);
		}
	};
}
