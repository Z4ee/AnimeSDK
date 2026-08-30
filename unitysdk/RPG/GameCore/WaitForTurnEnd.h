#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITFORTURNEND_METHOD_3_30BA599FC4C8ECB6_OFFSET UNITYSDK_OFFSET(0x1D6A3B80)
#define RPG_GAMECORE_WAITFORTURNEND_METHOD_3_FA0822FCF0DA89B5_OFFSET UNITYSDK_OFFSET(0x1D6A3B40)
#define RPG_GAMECORE_WAITFORTURNEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A3B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitForTurnEnd_TypeDefinitionIndex = 23165;

	class WaitForTurnEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean GoNextImmediately; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORTURNEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FA0822FCF0DA89B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitForTurnEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitForTurnEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORTURNEND_METHOD_3_FA0822FCF0DA89B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30BA599FC4C8ECB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitForTurnEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitForTurnEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORTURNEND_METHOD_3_30BA599FC4C8ECB6_OFFSET))(a1, a2);
		}
	};
}
