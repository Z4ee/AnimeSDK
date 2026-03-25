#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_0F76D30B5DD42ED1_OFFSET UNITYSDK_OFFSET(0x177B9630)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_CABA0A81FE4E6F2E_OFFSET UNITYSDK_OFFSET(0x177C0B10)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x177B95E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchUnstageTarget_TypeDefinitionIndex = 22250;

	class TargetFetchUnstageTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* ReasonKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CABA0A81FE4E6F2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchUnstageTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchUnstageTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_CABA0A81FE4E6F2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F76D30B5DD42ED1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_0F76D30B5DD42ED1_OFFSET))(a1, a2);
		}
	};
}
