#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_METHOD_3_170906B64BD8CAA3_OFFSET UNITYSDK_OFFSET(0x18B439B0)
#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_METHOD_3_A37C9E106C32A9A5_OFFSET UNITYSDK_OFFSET(0x18B43A30)
#define RPG_GAMECORE_MONOPOLYCHECKATFINALPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B43A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckAtFinalPos_TypeDefinitionIndex = 19920;

	class MonopolyCheckAtFinalPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinal; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotFinal; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_170906B64BD8CAA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckAtFinalPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_METHOD_3_170906B64BD8CAA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A37C9E106C32A9A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckAtFinalPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKATFINALPOS_METHOD_3_A37C9E106C32A9A5_OFFSET))(a1, a2);
		}
	};
}
