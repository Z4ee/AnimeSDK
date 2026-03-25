#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_METHOD_5_C5D283FC185236E8_OFFSET UNITYSDK_OFFSET(0x173AA720)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_METHOD_5_E0D61D1743B8F5FF_OFFSET UNITYSDK_OFFSET(0x173A8920)
#define RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x173A88A0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TagApplyCondition_TypeDefinitionIndex = 22769;

	class Match3TagApplyCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::BombType>* AvoidBombTypes; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* AvoidPieceTags; // 0x20
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* AvoidGridTags; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C5D283FC185236E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_METHOD_5_C5D283FC185236E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E0D61D1743B8F5FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3TagApplyCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3TagApplyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3TAGAPPLYCONDITION_METHOD_5_E0D61D1743B8F5FF_OFFSET))(a1, a2);
		}
	};
}
