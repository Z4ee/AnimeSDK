#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_352F886FE902490D_OFFSET UNITYSDK_OFFSET(0x19D049C0)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_45915D5904B1812B_OFFSET UNITYSDK_OFFSET(0x19D0B890)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_77FD362630DAC3FD_OFFSET UNITYSDK_OFFSET(0x19D0B950)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_DD5041FD1D1DA4DD_OFFSET UNITYSDK_OFFSET(0x19CF7B00)
#define RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchBattleEventEntityList_TypeDefinitionIndex = 22688;

	class TargetFetchBattleEventEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_45915D5904B1812B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBattleEventEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_45915D5904B1812B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD5041FD1D1DA4DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_DD5041FD1D1DA4DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_352F886FE902490D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_352F886FE902490D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77FD362630DAC3FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBattleEventEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBattleEventEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBATTLEEVENTENTITYLIST_METHOD_4_77FD362630DAC3FD_OFFSET))(a1, a2);
		}
	};
}
