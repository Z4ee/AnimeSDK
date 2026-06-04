#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_2268F759788FF74B_OFFSET UNITYSDK_OFFSET(0x19CF7CB0)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_239A10FDAAAA42B4_OFFSET UNITYSDK_OFFSET(0x19D0B960)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_50FEDB8A1096C41D_OFFSET UNITYSDK_OFFSET(0x19D0BA70)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_F4F24B3F4FDFF9FC_OFFSET UNITYSDK_OFFSET(0x19D04A50)
#define RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchBloodLinkTargets_TypeDefinitionIndex = 22618;

	class TargetFetchBloodLinkTargets : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_239A10FDAAAA42B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBloodLinkTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_239A10FDAAAA42B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2268F759788FF74B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_2268F759788FF74B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4F24B3F4FDFF9FC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_F4F24B3F4FDFF9FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_50FEDB8A1096C41D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchBloodLinkTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchBloodLinkTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBLOODLINKTARGETS_METHOD_4_50FEDB8A1096C41D_OFFSET))(a1, a2);
		}
	};
}
