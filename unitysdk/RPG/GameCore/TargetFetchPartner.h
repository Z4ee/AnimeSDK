#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_5E69928AAD604E30_OFFSET UNITYSDK_OFFSET(0x1E1B61C0)
#define RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_6219CF2F539B9F0B_OFFSET UNITYSDK_OFFSET(0x1E1B6090)
#define RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_A22D8A1262A37AFC_OFFSET UNITYSDK_OFFSET(0x1E1B60D0)
#define RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_A652AA9E18AE14DE_OFFSET UNITYSDK_OFFSET(0x1E1B61F0)
#define RPG_GAMECORE_TARGETFETCHPARTNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B60C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPartner_TypeDefinitionIndex = 23659;

	class TargetFetchPartner : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6219CF2F539B9F0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPartner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPartner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_6219CF2F539B9F0B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A22D8A1262A37AFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPartner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_A22D8A1262A37AFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E69928AAD604E30(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_5E69928AAD604E30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A652AA9E18AE14DE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPartner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPartner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARTNER_METHOD_4_A652AA9E18AE14DE_OFFSET))(a1, a2);
		}
	};
}
