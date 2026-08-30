#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_499D79B7B46B35E7_OFFSET UNITYSDK_OFFSET(0x1CF68FF0)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_6E5BDF5442C5D9D2_OFFSET UNITYSDK_OFFSET(0x1CF68FC0)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_AEE314DF378FCDA7_OFFSET UNITYSDK_OFFSET(0x1CF68E40)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_ECA3DD74D848B9EC_OFFSET UNITYSDK_OFFSET(0x1CF68E80)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF68E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTurnOwnerHasPendingOneMore_TypeDefinitionIndex = 23217;

	class ByTurnOwnerHasPendingOneMore : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AEE314DF378FCDA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_AEE314DF378FCDA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ECA3DD74D848B9EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_ECA3DD74D848B9EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E5BDF5442C5D9D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_6E5BDF5442C5D9D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_499D79B7B46B35E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_METHOD_4_499D79B7B46B35E7_OFFSET))(a1, a2);
		}
	};
}
