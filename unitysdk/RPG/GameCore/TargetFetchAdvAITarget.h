#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_2FF3F5180B061BCC_OFFSET UNITYSDK_OFFSET(0x18ED82B0)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_EDD1718D71B64B8E_OFFSET UNITYSDK_OFFSET(0x18EE1AD0)
#define RPG_GAMECORE_TARGETFETCHADVAITARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED8260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvAITarget_TypeDefinitionIndex = 22909;

	class TargetFetchAdvAITarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EDD1718D71B64B8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAITarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAITarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_EDD1718D71B64B8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2FF3F5180B061BCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAITarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAITarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVAITARGET_METHOD_4_2FF3F5180B061BCC_OFFSET))(a1, a2);
		}
	};
}
