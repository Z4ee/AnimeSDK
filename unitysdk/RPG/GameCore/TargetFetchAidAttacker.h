#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_1343F5BC5AC52CF4_OFFSET UNITYSDK_OFFSET(0x1E16B300)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_19B3DD808F99BD41_OFFSET UNITYSDK_OFFSET(0x1E16B440)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_7D4637BDB467271D_OFFSET UNITYSDK_OFFSET(0x1E16B400)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_F29601CF457A7449_OFFSET UNITYSDK_OFFSET(0x1E16B3A0)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16B390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAidAttacker_TypeDefinitionIndex = 23732;

	class TargetFetchAidAttacker : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1343F5BC5AC52CF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidAttacker*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_1343F5BC5AC52CF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F29601CF457A7449(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_F29601CF457A7449_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D4637BDB467271D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_7D4637BDB467271D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19B3DD808F99BD41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_METHOD_4_19B3DD808F99BD41_OFFSET))(a1, a2);
		}
	};
}
