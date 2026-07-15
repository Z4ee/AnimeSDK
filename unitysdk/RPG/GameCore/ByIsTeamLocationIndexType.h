#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationIndexType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_1894044532957ECF_OFFSET UNITYSDK_OFFSET(0x1B2A9720)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_88F4577B07813A49_OFFSET UNITYSDK_OFFSET(0x1B2A96E0)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_BF35E0F40517425A_OFFSET UNITYSDK_OFFSET(0x1B2A9420)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_F38CD3B43677ED7F_OFFSET UNITYSDK_OFFSET(0x1B2A9470)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A9460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeamLocationIndexType_TypeDefinitionIndex = 22205;

	class ByIsTeamLocationIndexType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TeamType TeamType; // 0x28
		::RPG::GameCore::TeamLocationIndexType Type; // 0x2C
		::System::Boolean IgnoreServant; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BF35E0F40517425A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeamLocationIndexType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeamLocationIndexType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_BF35E0F40517425A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F38CD3B43677ED7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_F38CD3B43677ED7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88F4577B07813A49(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_88F4577B07813A49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1894044532957ECF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_1894044532957ECF_OFFSET))(a1, a2);
		}
	};
}
