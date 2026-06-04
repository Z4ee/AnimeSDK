#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_380D15BA487A90B4_OFFSET UNITYSDK_OFFSET(0x1955F700)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_B484513930E6F251_OFFSET UNITYSDK_OFFSET(0x1955F910)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_DE85DB40986C553E_OFFSET UNITYSDK_OFFSET(0x1955F7D0)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_F4D0F25C322E8B15_OFFSET UNITYSDK_OFFSET(0x1955F990)
#define RPG_GAMECORE_BYISDAMAGECRITICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1955F780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageCritical_TypeDefinitionIndex = 22211;

	class ByIsDamageCritical : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_380D15BA487A90B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageCritical*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_380D15BA487A90B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE85DB40986C553E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_DE85DB40986C553E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B484513930E6F251(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_B484513930E6F251_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4D0F25C322E8B15(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_METHOD_4_F4D0F25C322E8B15_OFFSET))(a1, a2);
		}
	};
}
