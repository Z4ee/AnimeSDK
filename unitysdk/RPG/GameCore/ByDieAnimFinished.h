#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_62240149679DD0CB_OFFSET UNITYSDK_OFFSET(0x1BBD54E0)
#define RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_F21E2BB5CD8B33D5_OFFSET UNITYSDK_OFFSET(0x1BBD5520)
#define RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_F8477A5EBA8DB554_OFFSET UNITYSDK_OFFSET(0x1BBD5310)
#define RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_F9663F49F15BCAD1_OFFSET UNITYSDK_OFFSET(0x1BBD52B0)
#define RPG_GAMECORE_BYDIEANIMFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD52F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDieAnimFinished_TypeDefinitionIndex = 23040;

	class ByDieAnimFinished : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x20
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F9663F49F15BCAD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDieAnimFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDieAnimFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_F9663F49F15BCAD1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8477A5EBA8DB554(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_F8477A5EBA8DB554_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_62240149679DD0CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_62240149679DD0CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F21E2BB5CD8B33D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_F21E2BB5CD8B33D5_OFFSET))(a1, a2);
		}
	};
}
