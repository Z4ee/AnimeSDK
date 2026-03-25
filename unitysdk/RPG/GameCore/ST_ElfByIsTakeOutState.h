#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfTakeOutState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_5988BAF5157DD7AF_OFFSET UNITYSDK_OFFSET(0x17695DC0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_7AF2C8EF441224C1_OFFSET UNITYSDK_OFFSET(0x17695CF0)
#define RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17695D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsTakeOutState_TypeDefinitionIndex = 19723;

	class ST_ElfByIsTakeOutState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfTakeOutState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7AF2C8EF441224C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsTakeOutState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_7AF2C8EF441224C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5988BAF5157DD7AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsTakeOutState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsTakeOutState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISTAKEOUTSTATE_METHOD_4_5988BAF5157DD7AF_OFFSET))(a1, a2);
		}
	};
}
