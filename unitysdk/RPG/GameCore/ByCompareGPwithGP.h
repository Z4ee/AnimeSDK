#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_35533B5561424EE2_OFFSET UNITYSDK_OFFSET(0x19514860)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_A4F54B15AC2CE4B0_OFFSET UNITYSDK_OFFSET(0x19514B80)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_BFB9F6C35F78F334_OFFSET UNITYSDK_OFFSET(0x19514940)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_CAB8E1BF5765FA2D_OFFSET UNITYSDK_OFFSET(0x19514B00)
#define RPG_GAMECORE_BYCOMPAREGPWITHGP__CTOR_OFFSET UNITYSDK_OFFSET(0x195148E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGPwithGP_TypeDefinitionIndex = 19302;

	class ByCompareGPwithGP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* LeftName; // 0x20
		::RPG::GameCore::DynamicString* RightName; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_35533B5561424EE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGPwithGP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGPwithGP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_35533B5561424EE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFB9F6C35F78F334(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_BFB9F6C35F78F334_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CAB8E1BF5765FA2D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_CAB8E1BF5765FA2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A4F54B15AC2CE4B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGPwithGP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGPwithGP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGPWITHGP_METHOD_4_A4F54B15AC2CE4B0_OFFSET))(a1, a2);
		}
	};
}
