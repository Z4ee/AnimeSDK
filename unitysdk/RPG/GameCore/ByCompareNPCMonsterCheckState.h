#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCMonsterCheckState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_048F7EA13D1E5858_OFFSET UNITYSDK_OFFSET(0x1BBA9C40)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_0E9F44B9511C367D_OFFSET UNITYSDK_OFFSET(0x1BBA9F40)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_C2C21AF74B31389A_OFFSET UNITYSDK_OFFSET(0x1BBA9F10)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_FC7C0D04CDD2BD82_OFFSET UNITYSDK_OFFSET(0x1BBA9C00)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA9C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNPCMonsterCheckState_TypeDefinitionIndex = 21335;

	class ByCompareNPCMonsterCheckState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x20
		::RPG::GameCore::DynamicFloat* GroupMonsterID; // 0x28
		::System::String* UniqueName; // 0x30
		::RPG::GameCore::NPCMonsterCheckState CheckState; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FC7C0D04CDD2BD82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_FC7C0D04CDD2BD82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_048F7EA13D1E5858(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_048F7EA13D1E5858_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C2C21AF74B31389A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_C2C21AF74B31389A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0E9F44B9511C367D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterCheckState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterCheckState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERCHECKSTATE_METHOD_4_0E9F44B9511C367D_OFFSET))(a1, a2);
		}
	};
}
