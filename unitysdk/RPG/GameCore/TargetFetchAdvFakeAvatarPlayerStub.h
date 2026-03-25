#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_21E84F4B62FE0F92_OFFSET UNITYSDK_OFFSET(0x177BAAF0)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_8372EA235D640FC0_OFFSET UNITYSDK_OFFSET(0x177BA9C0)
#define RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB__CTOR_OFFSET UNITYSDK_OFFSET(0x177BAAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvFakeAvatarPlayerStub_TypeDefinitionIndex = 22146;

	class TargetFetchAdvFakeAvatarPlayerStub : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8372EA235D640FC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_8372EA235D640FC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_21E84F4B62FE0F92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvFakeAvatarPlayerStub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVFAKEAVATARPLAYERSTUB_METHOD_4_21E84F4B62FE0F92_OFFSET))(a1, a2);
		}
	};
}
