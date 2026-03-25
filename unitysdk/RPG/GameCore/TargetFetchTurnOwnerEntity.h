#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_0BE8677640A44229_OFFSET UNITYSDK_OFFSET(0x177B9290)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_F4D2547EB0CDB087_OFFSET UNITYSDK_OFFSET(0x177C0940)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x177B9240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTurnOwnerEntity_TypeDefinitionIndex = 22274;

	class TargetFetchTurnOwnerEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4D2547EB0CDB087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_F4D2547EB0CDB087_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0BE8677640A44229(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_METHOD_4_0BE8677640A44229_OFFSET))(a1, a2);
		}
	};
}
