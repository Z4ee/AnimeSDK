#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_05879C7AE8573B13_OFFSET UNITYSDK_OFFSET(0x195E0400)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_448D777543AE0C66_OFFSET UNITYSDK_OFFSET(0x195E0170)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_EC4AF73D73835307_OFFSET UNITYSDK_OFFSET(0x195E0380)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_ECA3DD74D848B9EC_OFFSET UNITYSDK_OFFSET(0x195E0240)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE__CTOR_OFFSET UNITYSDK_OFFSET(0x195E01F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTurnOwnerHasPendingOneMore_TypeDefinitionIndex = 22203;

	class ByTurnOwnerHasPendingOneMore : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_448D777543AE0C66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_448D777543AE0C66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ECA3DD74D848B9EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_ECA3DD74D848B9EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EC4AF73D73835307(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_EC4AF73D73835307_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05879C7AE8573B13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_05879C7AE8573B13_OFFSET))(a1, a2);
		}
	};
}
