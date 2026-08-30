#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_0D263E10A7185BB5_OFFSET UNITYSDK_OFFSET(0x1CEBDA90)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_5F493E1CDAD32048_OFFSET UNITYSDK_OFFSET(0x1CEBDC50)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_6CCD474B8CBD914F_OFFSET UNITYSDK_OFFSET(0x1CEBDC20)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_8212BBDDB969FF50_OFFSET UNITYSDK_OFFSET(0x1CEBDA50)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBDA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareDamageTag_TypeDefinitionIndex = 23303;

	class ByCompareDamageTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DamageTagList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8212BBDDB969FF50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDamageTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDamageTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_8212BBDDB969FF50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D263E10A7185BB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_0D263E10A7185BB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6CCD474B8CBD914F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_6CCD474B8CBD914F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5F493E1CDAD32048(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_5F493E1CDAD32048_OFFSET))(a1, a2);
		}
	};
}
