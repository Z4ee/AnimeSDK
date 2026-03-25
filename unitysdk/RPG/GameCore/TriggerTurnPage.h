#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERTURNPAGE_METHOD_3_DAA618FA14AE3BC3_OFFSET UNITYSDK_OFFSET(0x178CF690)
#define RPG_GAMECORE_TRIGGERTURNPAGE_METHOD_3_DCBB455CC140C12F_OFFSET UNITYSDK_OFFSET(0x178CF580)
#define RPG_GAMECORE_TRIGGERTURNPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x178CF660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerTurnPage_TypeDefinitionIndex = 20880;

	class TriggerTurnPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTURNPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCBB455CC140C12F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerTurnPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerTurnPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTURNPAGE_METHOD_3_DCBB455CC140C12F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAA618FA14AE3BC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerTurnPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerTurnPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERTURNPAGE_METHOD_3_DAA618FA14AE3BC3_OFFSET))(a1, a2);
		}
	};
}
