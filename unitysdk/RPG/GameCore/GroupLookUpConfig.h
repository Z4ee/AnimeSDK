#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupValueLookUpConfig; }

#define RPG_GAMECORE_GROUPLOOKUPCONFIG_METHOD_2_C847BFE93B0A2B72_OFFSET UNITYSDK_OFFSET(0x189E1140)
#define RPG_GAMECORE_GROUPLOOKUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189E12A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupLookUpConfig_TypeDefinitionIndex = 15506;

	class GroupLookUpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Banks; // 0x10
		::Il2CppArray<::RPG::GameCore::GroupValueLookUpConfig*>* Condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPLOOKUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C847BFE93B0A2B72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupLookUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupLookUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPLOOKUPCONFIG_METHOD_2_C847BFE93B0A2B72_OFFSET))(a1, a2);
		}
	};
}
