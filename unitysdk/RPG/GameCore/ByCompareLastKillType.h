#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_2A0B508E308DEE44_OFFSET UNITYSDK_OFFSET(0x1951C5A0)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_7E337E019A34F2E4_OFFSET UNITYSDK_OFFSET(0x1951C3A0)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_834E1C82A4817779_OFFSET UNITYSDK_OFFSET(0x1951C520)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_BEC87B772EA6309A_OFFSET UNITYSDK_OFFSET(0x1951C2D0)
#define RPG_GAMECORE_BYCOMPARELASTKILLTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1951C350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareLastKillType_TypeDefinitionIndex = 22220;

	class ByCompareLastKillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillType SkillType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BEC87B772EA6309A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLastKillType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLastKillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_BEC87B772EA6309A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E337E019A34F2E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_7E337E019A34F2E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_834E1C82A4817779(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_834E1C82A4817779_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2A0B508E308DEE44(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLTYPE_METHOD_4_2A0B508E308DEE44_OFFSET))(a1, a2);
		}
	};
}
