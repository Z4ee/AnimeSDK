#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_0531CD42610DDCE4_OFFSET UNITYSDK_OFFSET(0x1C327CF0)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_0744BC5CB346AFCB_OFFSET UNITYSDK_OFFSET(0x1C327D20)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_1B06BB93480D2C61_OFFSET UNITYSDK_OFFSET(0x1C327B30)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_7E337E019A34F2E4_OFFSET UNITYSDK_OFFSET(0x1C327B70)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C327B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLastKillType_TypeDefinitionIndex = 23237;

	class ByCompareLastKillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1B06BB93480D2C61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLastKillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLastKillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_1B06BB93480D2C61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E337E019A34F2E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_7E337E019A34F2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0531CD42610DDCE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_0531CD42610DDCE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0744BC5CB346AFCB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_0744BC5CB346AFCB_OFFSET))(a1, a2);
		}
	};
}
