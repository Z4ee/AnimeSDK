#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_35B2372ACE0BFE56_OFFSET UNITYSDK_OFFSET(0x1CD987B0)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_855D921EFE247BE0_OFFSET UNITYSDK_OFFSET(0x1CD98970)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_90EFD448D1FEA257_OFFSET UNITYSDK_OFFSET(0x1CD98770)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_B8F421CA82767EAE_OFFSET UNITYSDK_OFFSET(0x1CD989A0)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD987A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsContainAdventureModifier_TypeDefinitionIndex = 20548;

	class ByIsContainAdventureModifier : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ModifierName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_90EFD448D1FEA257(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsContainAdventureModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsContainAdventureModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_90EFD448D1FEA257_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_35B2372ACE0BFE56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_35B2372ACE0BFE56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_855D921EFE247BE0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_855D921EFE247BE0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8F421CA82767EAE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_B8F421CA82767EAE_OFFSET))(a1, a2);
		}
	};
}
