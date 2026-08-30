#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchPuzzleEntityType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_5AC2412134CF577E_OFFSET UNITYSDK_OFFSET(0x1E1B6890)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_5C4D10484D3B0E2D_OFFSET UNITYSDK_OFFSET(0x1E1B6850)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_9CEA622D01E7DF24_OFFSET UNITYSDK_OFFSET(0x1E1B6960)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_B4B4F225D2C698DD_OFFSET UNITYSDK_OFFSET(0x1E1B6930)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B6880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPuzzleEntity_TypeDefinitionIndex = 23620;

	class TargetFetchPuzzleEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchPuzzleEntityType Type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5C4D10484D3B0E2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPuzzleEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPuzzleEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_5C4D10484D3B0E2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5AC2412134CF577E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_5AC2412134CF577E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B4B4F225D2C698DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_B4B4F225D2C698DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9CEA622D01E7DF24(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_METHOD_4_9CEA622D01E7DF24_OFFSET))(a1, a2);
		}
	};
}
