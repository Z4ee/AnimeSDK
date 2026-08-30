#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_4B899A9B80CAD443_OFFSET UNITYSDK_OFFSET(0x1CDCA850)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_7C298BF2F944EFD5_OFFSET UNITYSDK_OFFSET(0x1CDCA880)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_7DB2933E07769D56_OFFSET UNITYSDK_OFFSET(0x1CDCA650)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_D1C297B7355CB37F_OFFSET UNITYSDK_OFFSET(0x1CDCA690)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCA680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetLockStance_TypeDefinitionIndex = 23354;

	class ByTargetLockStance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* LockKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7DB2933E07769D56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetLockStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetLockStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_7DB2933E07769D56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1C297B7355CB37F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_D1C297B7355CB37F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B899A9B80CAD443(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_4B899A9B80CAD443_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C298BF2F944EFD5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_7C298BF2F944EFD5_OFFSET))(a1, a2);
		}
	};
}
