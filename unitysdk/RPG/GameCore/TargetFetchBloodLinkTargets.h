#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_2268F759788FF74B_OFFSET UNITYSDK_OFFSET(0x1E16D120)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_C6D4CC439835ED0E_OFFSET UNITYSDK_OFFSET(0x1E16D1F0)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_CCE3E26F0E4D5035_OFFSET UNITYSDK_OFFSET(0x1E16D1C0)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_DCEB9E4404DE874E_OFFSET UNITYSDK_OFFSET(0x1E16D060)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16D110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchBloodLinkTargets_TypeDefinitionIndex = 23661;

	class TargetFetchBloodLinkTargets : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DCEB9E4404DE874E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBloodLinkTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_DCEB9E4404DE874E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2268F759788FF74B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_2268F759788FF74B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CCE3E26F0E4D5035(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_CCE3E26F0E4D5035_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C6D4CC439835ED0E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_C6D4CC439835ED0E_OFFSET))(a1, a2);
		}
	};
}
