#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_METHOD_3_90E882C00D3D340B_OFFSET UNITYSDK_OFFSET(0x18D7BC00)
#define RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_METHOD_3_DECA6AA79939952D_OFFSET UNITYSDK_OFFSET(0x18D7BC80)
#define RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7BC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournSetCollectionBoothPrefab_TypeDefinitionIndex = 20977;

	class RogueTournSetCollectionBoothPrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BoothID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90E882C00D3D340B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_METHOD_3_90E882C00D3D340B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DECA6AA79939952D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNSETCOLLECTIONBOOTHPREFAB_METHOD_3_DECA6AA79939952D_OFFSET))(a1, a2);
		}
	};
}
