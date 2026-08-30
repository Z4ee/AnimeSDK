#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AITRYINSERTULTRA_METHOD_3_7D951C722113EBD6_OFFSET UNITYSDK_OFFSET(0x1D3250C0)
#define RPG_GAMECORE_AITRYINSERTULTRA_METHOD_3_8EE3EC75F91F42D5_OFFSET UNITYSDK_OFFSET(0x1D325070)
#define RPG_GAMECORE_AITRYINSERTULTRA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3250B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITryInsertUltra_TypeDefinitionIndex = 22579;

	class AITryInsertUltra : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ContinuousInsert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EE3EC75F91F42D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AITryInsertUltra*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITryInsertUltra*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA_METHOD_3_8EE3EC75F91F42D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D951C722113EBD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AITryInsertUltra* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AITryInsertUltra*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITRYINSERTULTRA_METHOD_3_7D951C722113EBD6_OFFSET))(a1, a2);
		}
	};
}
