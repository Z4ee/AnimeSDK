#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_0CAE9F18734E7A0E_OFFSET UNITYSDK_OFFSET(0x18EDEA40)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_85C9865B84FF2EA0_OFFSET UNITYSDK_OFFSET(0x18EE51B0)
#define RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDE9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNpcMonsterWithMazeBuff_TypeDefinitionIndex = 22879;

	class TargetFetchNpcMonsterWithMazeBuff : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::System::String* ModifierName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_85C9865B84FF2EA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_85C9865B84FF2EA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0CAE9F18734E7A0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNpcMonsterWithMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNPCMONSTERWITHMAZEBUFF_METHOD_4_0CAE9F18734E7A0E_OFFSET))(a1, a2);
		}
	};
}
