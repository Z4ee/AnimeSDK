#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_21E84F4B62FE0F92_OFFSET UNITYSDK_OFFSET(0x1E1674D0)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_3371DB6E2AEFCEEE_OFFSET UNITYSDK_OFFSET(0x1E167530)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_37BE0359D84CEEAA_OFFSET UNITYSDK_OFFSET(0x1E167570)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_3918ECB7A81E2993_OFFSET UNITYSDK_OFFSET(0x1E167430)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1674C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvFakeAvatarPlayerStub_TypeDefinitionIndex = 23605;

	class TargetFetchAdvFakeAvatarPlayerStub : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3918ECB7A81E2993(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_3918ECB7A81E2993_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_21E84F4B62FE0F92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_21E84F4B62FE0F92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3371DB6E2AEFCEEE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_3371DB6E2AEFCEEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37BE0359D84CEEAA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_37BE0359D84CEEAA_OFFSET))(a1, a2);
		}
	};
}
