#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SUMMONUNITINTERACTIONDESTROYRULE_METHOD_2_4A63DB98F804D3BC_OFFSET UNITYSDK_OFFSET(0x18EB7000)
#define RPG_GAMECORE_SUMMONUNITINTERACTIONDESTROYRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB7260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitInteractionDestroyRule_TypeDefinitionIndex = 16705;

	class SummonUnitInteractionDestroyRule : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropType>* PropTypes; // 0x10
		::Il2CppArray<::System::UInt32>* IDList; // 0x18
		::System::Boolean Destroy; // 0x20
		::System::Boolean Immediately; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITINTERACTIONDESTROYRULE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4A63DB98F804D3BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitInteractionDestroyRule*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitInteractionDestroyRule*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITINTERACTIONDESTROYRULE_METHOD_2_4A63DB98F804D3BC_OFFSET))(a1, a2);
		}
	};
}
