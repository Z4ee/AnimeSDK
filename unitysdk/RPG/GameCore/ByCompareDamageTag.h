#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }

#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_0D263E10A7185BB5_OFFSET UNITYSDK_OFFSET(0x1872AF00)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_2EAFD2FEC7E16393_OFFSET UNITYSDK_OFFSET(0x1872AE30)
#define RPG_GAMECORE_BYCOMPAREDAMAGETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1872AEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareDamageTag_TypeDefinitionIndex = 22545;

	class ByCompareDamageTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* DamageTagList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2EAFD2FEC7E16393(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDamageTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDamageTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_2EAFD2FEC7E16393_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D263E10A7185BB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGETAG_METHOD_4_0D263E10A7185BB5_OFFSET))(a1, a2);
		}
	};
}
