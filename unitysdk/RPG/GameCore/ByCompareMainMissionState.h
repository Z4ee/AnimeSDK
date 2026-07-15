#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_03B5A7C3B2008004_OFFSET UNITYSDK_OFFSET(0x19CF1E10)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_3771C9D992A84AD1_OFFSET UNITYSDK_OFFSET(0x19CF1E60)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_5DFB2EA4490E523D_OFFSET UNITYSDK_OFFSET(0x19CF20C0)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_6756FED1A145C75A_OFFSET UNITYSDK_OFFSET(0x19CF2080)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF1E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMainMissionState_TypeDefinitionIndex = 19530;

	class ByCompareMainMissionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::RPG::GameCore::MainMissionState MainMissionState; // 0x24
		::System::Boolean AllStoryLine; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_03B5A7C3B2008004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMainMissionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMainMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_03B5A7C3B2008004_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3771C9D992A84AD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_3771C9D992A84AD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6756FED1A145C75A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_6756FED1A145C75A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5DFB2EA4490E523D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_METHOD_4_5DFB2EA4490E523D_OFFSET))(a1, a2);
		}
	};
}
