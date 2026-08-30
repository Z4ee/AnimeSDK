#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_724AEBA713197D9D_OFFSET UNITYSDK_OFFSET(0x1CDB73E0)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_77CA0793CFBEA70E_OFFSET UNITYSDK_OFFSET(0x1CDB7580)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_D7464AD26ABF75E4_OFFSET UNITYSDK_OFFSET(0x1CDB73A0)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_FAE11127B79763C1_OFFSET UNITYSDK_OFFSET(0x1CDB7550)
#define RPG_GAMECORE_BYMAINMISSIONFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB73D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByMainMissionFinish_TypeDefinitionIndex = 20239;

	class ByMainMissionFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D7464AD26ABF75E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMainMissionFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMainMissionFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_D7464AD26ABF75E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_724AEBA713197D9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_724AEBA713197D9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAE11127B79763C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_FAE11127B79763C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77CA0793CFBEA70E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_77CA0793CFBEA70E_OFFSET))(a1, a2);
		}
	};
}
