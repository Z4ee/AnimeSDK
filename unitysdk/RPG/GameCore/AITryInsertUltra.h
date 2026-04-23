#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AITRYINSERTULTRA_METHOD_3_2A92F54FEFA198A7_OFFSET UNITYSDK_OFFSET(0x185F2AD0)
#define RPG_GAMECORE_AITRYINSERTULTRA_METHOD_3_7D951C722113EBD6_OFFSET UNITYSDK_OFFSET(0x185F2B50)
#define RPG_GAMECORE_AITRYINSERTULTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x185F2B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITryInsertUltra_TypeDefinitionIndex = 21747;

	class AITryInsertUltra : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ContinuousInsert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A92F54FEFA198A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AITryInsertUltra*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITryInsertUltra*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA_METHOD_3_2A92F54FEFA198A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D951C722113EBD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AITryInsertUltra* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITryInsertUltra*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA_METHOD_3_7D951C722113EBD6_OFFSET))(a1, a2);
		}
	};
}
