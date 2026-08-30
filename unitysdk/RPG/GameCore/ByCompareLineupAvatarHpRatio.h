#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_7C3BB26E5214C1C2_OFFSET UNITYSDK_OFFSET(0x1C328130)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_AEB756966A409C43_OFFSET UNITYSDK_OFFSET(0x1C328180)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_C33017A79ABA3005_OFFSET UNITYSDK_OFFSET(0x1C328370)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_EDA583FD403FCE42_OFFSET UNITYSDK_OFFSET(0x1C3283B0)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C328170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLineupAvatarHpRatio_TypeDefinitionIndex = 20559;

	class ByCompareLineupAvatarHpRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HpRatio; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C3BB26E5214C1C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_7C3BB26E5214C1C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AEB756966A409C43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_AEB756966A409C43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C33017A79ABA3005(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_C33017A79ABA3005_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDA583FD403FCE42(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_EDA583FD403FCE42_OFFSET))(a1, a2);
		}
	};
}
