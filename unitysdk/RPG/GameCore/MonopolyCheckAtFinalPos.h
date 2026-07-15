#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_METHOD_3_80672602EDAD93C7_OFFSET UNITYSDK_OFFSET(0x1B1B0580)
#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_METHOD_3_FB02E27215AF08B0_OFFSET UNITYSDK_OFFSET(0x1B1B0540)
#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B0570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckAtFinalPos_TypeDefinitionIndex = 20143;

	class MonopolyCheckAtFinalPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinal; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotFinal; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB02E27215AF08B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckAtFinalPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_METHOD_3_FB02E27215AF08B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_80672602EDAD93C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckAtFinalPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_METHOD_3_80672602EDAD93C7_OFFSET))(a1, a2);
		}
	};
}
