#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_3EE46A03CDF5D8BB_OFFSET UNITYSDK_OFFSET(0x195DD100)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_AB71BCBB5A32B64F_OFFSET UNITYSDK_OFFSET(0x195DD390)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_D1C297B7355CB37F_OFFSET UNITYSDK_OFFSET(0x195DD1D0)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_E43F06BC184447F4_OFFSET UNITYSDK_OFFSET(0x195DD410)
#define RPG_GAMECORE_BYTARGETLOCKSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x195DD180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetLockStance_TypeDefinitionIndex = 22334;

	class ByTargetLockStance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* LockKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3EE46A03CDF5D8BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetLockStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetLockStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_3EE46A03CDF5D8BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1C297B7355CB37F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_D1C297B7355CB37F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AB71BCBB5A32B64F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_AB71BCBB5A32B64F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E43F06BC184447F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetLockStance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetLockStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKSTANCE_METHOD_4_E43F06BC184447F4_OFFSET))(a1, a2);
		}
	};
}
