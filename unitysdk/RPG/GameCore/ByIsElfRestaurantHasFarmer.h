#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_A0B8F8C76835344A_OFFSET UNITYSDK_OFFSET(0x1CD9D260)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_B7531D6468EFD717_OFFSET UNITYSDK_OFFSET(0x1CD9D220)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_CE1E4895D65475F3_OFFSET UNITYSDK_OFFSET(0x1CD9D400)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_D43EF50661A1155C_OFFSET UNITYSDK_OFFSET(0x1CD9D3D0)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD9D250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantHasFarmer_TypeDefinitionIndex = 24091;

	class ByIsElfRestaurantHasFarmer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 FarmID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B7531D6468EFD717(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_B7531D6468EFD717_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0B8F8C76835344A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_A0B8F8C76835344A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D43EF50661A1155C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_D43EF50661A1155C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE1E4895D65475F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_METHOD_4_CE1E4895D65475F3_OFFSET))(a1, a2);
		}
	};
}
