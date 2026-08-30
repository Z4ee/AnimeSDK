#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_0CAE9F18734E7A0E_OFFSET UNITYSDK_OFFSET(0x1D5ACD80)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_6E1E6B1A12101A2D_OFFSET UNITYSDK_OFFSET(0x1D5ACD40)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_B9A5DE81B3798810_OFFSET UNITYSDK_OFFSET(0x1D5ACEA0)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_F2DD0CAD531F8229_OFFSET UNITYSDK_OFFSET(0x1D5ACE70)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ACD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNpcMonsterWithMazeBuff_TypeDefinitionIndex = 23617;

	class TargetFetchNpcMonsterWithMazeBuff : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::System::String* ModifierName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6E1E6B1A12101A2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_6E1E6B1A12101A2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0CAE9F18734E7A0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_0CAE9F18734E7A0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F2DD0CAD531F8229(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_F2DD0CAD531F8229_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B9A5DE81B3798810(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_B9A5DE81B3798810_OFFSET))(a1, a2);
		}
	};
}
