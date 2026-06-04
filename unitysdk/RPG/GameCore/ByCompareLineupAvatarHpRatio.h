#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_32E50DDC16EB3FD4_OFFSET UNITYSDK_OFFSET(0x1951CA50)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_9D8BDBC62EB28F5D_OFFSET UNITYSDK_OFFSET(0x1951CAD0)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_AEB756966A409C43_OFFSET UNITYSDK_OFFSET(0x1951C860)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_F73344DDC5E03EB5_OFFSET UNITYSDK_OFFSET(0x1951C780)
#define RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1951C800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLineupAvatarHpRatio_TypeDefinitionIndex = 19653;

	class ByCompareLineupAvatarHpRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HpRatio; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F73344DDC5E03EB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_F73344DDC5E03EB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AEB756966A409C43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_AEB756966A409C43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_32E50DDC16EB3FD4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_32E50DDC16EB3FD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9D8BDBC62EB28F5D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLineupAvatarHpRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLineupAvatarHpRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELINEUPAVATARHPRATIO_METHOD_4_9D8BDBC62EB28F5D_OFFSET))(a1, a2);
		}
	};
}
