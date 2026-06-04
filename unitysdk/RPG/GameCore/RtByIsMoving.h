#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISMOVING_METHOD_4_3BF1B745A528F6A0_OFFSET UNITYSDK_OFFSET(0x19BE2480)
#define RPG_GAMECORE_RTBYISMOVING_METHOD_4_5C5C04989F0516DD_OFFSET UNITYSDK_OFFSET(0x19BE2230)
#define RPG_GAMECORE_RTBYISMOVING_METHOD_4_68D62C683D922391_OFFSET UNITYSDK_OFFSET(0x19BE2500)
#define RPG_GAMECORE_RTBYISMOVING_METHOD_4_F4695B58E5E83BB3_OFFSET UNITYSDK_OFFSET(0x19BE2300)
#define RPG_GAMECORE_RTBYISMOVING__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE22B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsMoving_TypeDefinitionIndex = 22797;

	class RtByIsMoving : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5C5C04989F0516DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsMoving*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsMoving*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_METHOD_4_5C5C04989F0516DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4695B58E5E83BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_METHOD_4_F4695B58E5E83BB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3BF1B745A528F6A0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_METHOD_4_3BF1B745A528F6A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_68D62C683D922391(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsMoving* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsMoving*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISMOVING_METHOD_4_68D62C683D922391_OFFSET))(a1, a2);
		}
	};
}
