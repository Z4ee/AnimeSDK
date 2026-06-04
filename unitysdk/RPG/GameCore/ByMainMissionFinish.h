#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_04D42183A86F1450_OFFSET UNITYSDK_OFFSET(0x19575F60)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_724AEBA713197D9D_OFFSET UNITYSDK_OFFSET(0x19575D70)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_73E29FBDB861606F_OFFSET UNITYSDK_OFFSET(0x19575CA0)
#define RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_CF66E8547654C5C8_OFFSET UNITYSDK_OFFSET(0x19575EE0)
#define RPG_GAMECORE_BYMAINMISSIONFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19575D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByMainMissionFinish_TypeDefinitionIndex = 19337;

	class ByMainMissionFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_73E29FBDB861606F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMainMissionFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMainMissionFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_73E29FBDB861606F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_724AEBA713197D9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_724AEBA713197D9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF66E8547654C5C8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_CF66E8547654C5C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_04D42183A86F1450(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMAINMISSIONFINISH_METHOD_4_04D42183A86F1450_OFFSET))(a1, a2);
		}
	};
}
