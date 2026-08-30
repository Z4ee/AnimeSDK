#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_METHOD_3_7D1D6A84BFA7A05D_OFFSET UNITYSDK_OFFSET(0x1D1C11C0)
#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_METHOD_3_9FA63C637B40C2EA_OFFSET UNITYSDK_OFFSET(0x1D1C1180)
#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C11B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckHasFinishedQuiz_TypeDefinitionIndex = 20691;

	class MonopolyCheckHasFinishedQuiz : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExist; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotExist; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FA63C637B40C2EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_METHOD_3_9FA63C637B40C2EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D1D6A84BFA7A05D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_METHOD_3_7D1D6A84BFA7A05D_OFFSET))(a1, a2);
		}
	};
}
