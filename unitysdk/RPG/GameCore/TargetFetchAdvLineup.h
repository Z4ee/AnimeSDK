#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_1D16703FADC2ED58_OFFSET UNITYSDK_OFFSET(0x177BAC60)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_739C5F9466D3A02A_OFFSET UNITYSDK_OFFSET(0x177BAB50)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP__CTOR_OFFSET UNITYSDK_OFFSET(0x177BAC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLineup_TypeDefinitionIndex = 22203;

	class TargetFetchAdvLineup : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_739C5F9466D3A02A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLineup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLineup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_739C5F9466D3A02A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D16703FADC2ED58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_METHOD_4_1D16703FADC2ED58_OFFSET))(a1, a2);
		}
	};
}
