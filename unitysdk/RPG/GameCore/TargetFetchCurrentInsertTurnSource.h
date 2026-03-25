#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_C46C96AAA9CDFCE8_OFFSET UNITYSDK_OFFSET(0x177B49D0)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_F4AAEFED5B26427A_OFFSET UNITYSDK_OFFSET(0x177BE380)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x177B4980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentInsertTurnSource_TypeDefinitionIndex = 22305;

	class TargetFetchCurrentInsertTurnSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4AAEFED5B26427A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_F4AAEFED5B26427A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C46C96AAA9CDFCE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_C46C96AAA9CDFCE8_OFFSET))(a1, a2);
		}
	};
}
