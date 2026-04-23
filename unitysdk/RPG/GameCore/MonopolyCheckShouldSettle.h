#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE_METHOD_3_2E3E5BB807CB57DE_OFFSET UNITYSDK_OFFSET(0x18B43E50)
#define RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE_METHOD_3_E4CCB60A53E1F5F2_OFFSET UNITYSDK_OFFSET(0x18B43DD0)
#define RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B43E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckShouldSettle_TypeDefinitionIndex = 19919;

	class MonopolyCheckShouldSettle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettle; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotSettle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E4CCB60A53E1F5F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckShouldSettle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckShouldSettle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE_METHOD_3_E4CCB60A53E1F5F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E3E5BB807CB57DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckShouldSettle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckShouldSettle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE_METHOD_3_2E3E5BB807CB57DE_OFFSET))(a1, a2);
		}
	};
}
