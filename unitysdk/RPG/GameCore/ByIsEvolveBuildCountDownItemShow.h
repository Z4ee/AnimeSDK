#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_052045DD246B29C5_OFFSET UNITYSDK_OFFSET(0x1CD9F560)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_798E80042F263BF1_OFFSET UNITYSDK_OFFSET(0x1CD9F710)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_8B2F13FB53C16346_OFFSET UNITYSDK_OFFSET(0x1CD9F5A0)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_C90BBF36A91466D0_OFFSET UNITYSDK_OFFSET(0x1CD9F6E0)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9F590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEvolveBuildCountDownItemShow_TypeDefinitionIndex = 24087;

	class ByIsEvolveBuildCountDownItemShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_052045DD246B29C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_052045DD246B29C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B2F13FB53C16346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_8B2F13FB53C16346_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C90BBF36A91466D0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_C90BBF36A91466D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_798E80042F263BF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_798E80042F263BF1_OFFSET))(a1, a2);
		}
	};
}
