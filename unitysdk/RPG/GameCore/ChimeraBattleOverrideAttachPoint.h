#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_METHOD_3_E07B9647DEF53986_OFFSET UNITYSDK_OFFSET(0x1C38F990)
#define RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_METHOD_3_E9DC4BB55573EEF2_OFFSET UNITYSDK_OFFSET(0x1C38DE80)
#define RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38DE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleOverrideAttachPoint_TypeDefinitionIndex = 15270;

	class ChimeraBattleOverrideAttachPoint : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* Origin; // 0x20
		::System::String* New; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E07B9647DEF53986(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleOverrideAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleOverrideAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_METHOD_3_E07B9647DEF53986_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9DC4BB55573EEF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattleOverrideAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattleOverrideAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEOVERRIDEATTACHPOINT_METHOD_3_E9DC4BB55573EEF2_OFFSET))(a1, a2);
		}
	};
}
