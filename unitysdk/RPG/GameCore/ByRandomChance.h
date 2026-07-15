#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_06FF06254573283E_OFFSET UNITYSDK_OFFSET(0x1B2B5CB0)
#define RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_311DA5452D9B8447_OFFSET UNITYSDK_OFFSET(0x1B2B5A90)
#define RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_AADBC542D5AF7E01_OFFSET UNITYSDK_OFFSET(0x1B2B5CE0)
#define RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_F3DEF6BA0C7ADF0E_OFFSET UNITYSDK_OFFSET(0x1B2B5AD0)
#define RPG_GAMECORE_BYRANDOMCHANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B5AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRandomChance_TypeDefinitionIndex = 22162;

	class ByRandomChance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Chance; // 0x20
		::System::String* LogComment; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_311DA5452D9B8447(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandomChance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandomChance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_311DA5452D9B8447_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3DEF6BA0C7ADF0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_F3DEF6BA0C7ADF0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_06FF06254573283E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_06FF06254573283E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AADBC542D5AF7E01(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRandomChance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRandomChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOMCHANCE_METHOD_4_AADBC542D5AF7E01_OFFSET))(a1, a2);
		}
	};
}
