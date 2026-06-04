#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_47A9420B7D9791F5_OFFSET UNITYSDK_OFFSET(0x19D155F0)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_8A8E39DE2173D4F3_OFFSET UNITYSDK_OFFSET(0x19D15550)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_C1AAD4CD4025279E_OFFSET UNITYSDK_OFFSET(0x19D15490)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_D45CECD33879AACA_OFFSET UNITYSDK_OFFSET(0x19D155B0)
#define RPG_GAMECORE_TARGETMAPTEAMENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19D15530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapTeamEntity_TypeDefinitionIndex = 22627;

	class TargetMapTeamEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1AAD4CD4025279E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapTeamEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_C1AAD4CD4025279E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A8E39DE2173D4F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_8A8E39DE2173D4F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D45CECD33879AACA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_D45CECD33879AACA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47A9420B7D9791F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMENTITY_METHOD_3_47A9420B7D9791F5_OFFSET))(a1, a2);
		}
	};
}
