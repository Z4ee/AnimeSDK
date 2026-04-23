#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_METHOD_3_34AEC9DE8FC162A1_OFFSET UNITYSDK_OFFSET(0x18B43BC0)
#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_METHOD_3_474FE93B48DBCF1F_OFFSET UNITYSDK_OFFSET(0x18B43C40)
#define RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B43C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckHasFinishedQuiz_TypeDefinitionIndex = 19918;

	class MonopolyCheckHasFinishedQuiz : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExist; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotExist; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34AEC9DE8FC162A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_METHOD_3_34AEC9DE8FC162A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_474FE93B48DBCF1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKHASFINISHEDQUIZ_METHOD_3_474FE93B48DBCF1F_OFFSET))(a1, a2);
		}
	};
}
