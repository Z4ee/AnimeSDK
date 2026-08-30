#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_33B5A0122F8538F8_OFFSET UNITYSDK_OFFSET(0x1D5A9810)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_77FD362630DAC3FD_OFFSET UNITYSDK_OFFSET(0x1D5A9910)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_B0904F63D3FE31F0_OFFSET UNITYSDK_OFFSET(0x1D5A98F0)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_DD5041FD1D1DA4DD_OFFSET UNITYSDK_OFFSET(0x1D5A9890)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchBattleEventEntityList_TypeDefinitionIndex = 23731;

	class TargetFetchBattleEventEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_33B5A0122F8538F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBattleEventEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_33B5A0122F8538F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD5041FD1D1DA4DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_DD5041FD1D1DA4DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B0904F63D3FE31F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_B0904F63D3FE31F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77FD362630DAC3FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_77FD362630DAC3FD_OFFSET))(a1, a2);
		}
	};
}
