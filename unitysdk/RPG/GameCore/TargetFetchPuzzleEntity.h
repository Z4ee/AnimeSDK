#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchPuzzleEntityType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_5AC2412134CF577E_OFFSET UNITYSDK_OFFSET(0x177B8050)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_7316D8AFB06EC79A_OFFSET UNITYSDK_OFFSET(0x177C0110)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x177B8000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPuzzleEntity_TypeDefinitionIndex = 22163;

	class TargetFetchPuzzleEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchPuzzleEntityType Type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7316D8AFB06EC79A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPuzzleEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPuzzleEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_7316D8AFB06EC79A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5AC2412134CF577E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_5AC2412134CF577E_OFFSET))(a1, a2);
		}
	};
}
