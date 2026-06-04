#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationIndexType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_433B4EB9322AAFC5_OFFSET UNITYSDK_OFFSET(0x19571810)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_E6A41028857FDBD2_OFFSET UNITYSDK_OFFSET(0x19571890)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_F38CD3B43677ED7F_OFFSET UNITYSDK_OFFSET(0x195715A0)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_F8A14D41C03D8219_OFFSET UNITYSDK_OFFSET(0x195714C0)
#define RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19571540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTeamLocationIndexType_TypeDefinitionIndex = 21779;

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

		static ::System::Void Method_4_F8A14D41C03D8219(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeamLocationIndexType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeamLocationIndexType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_F8A14D41C03D8219_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F38CD3B43677ED7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_F38CD3B43677ED7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_433B4EB9322AAFC5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_433B4EB9322AAFC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E6A41028857FDBD2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTeamLocationIndexType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTeamLocationIndexType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTEAMLOCATIONINDEXTYPE_METHOD_4_E6A41028857FDBD2_OFFSET))(a1, a2);
		}
	};
}
