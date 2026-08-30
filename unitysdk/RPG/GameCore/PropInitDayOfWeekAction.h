#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDayOfWeekActionParamObject; }

#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION_METHOD_3_7584F3A358AC11BF_OFFSET UNITYSDK_OFFSET(0x1D368510)
#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION_METHOD_3_DE220E7E9C90040C_OFFSET UNITYSDK_OFFSET(0x1D3684D0)
#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D368500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitDayOfWeekAction_TypeDefinitionIndex = 21828;

	class PropInitDayOfWeekAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropDayOfWeekActionParamObject*>* ActionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE220E7E9C90040C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitDayOfWeekAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitDayOfWeekAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION_METHOD_3_DE220E7E9C90040C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7584F3A358AC11BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitDayOfWeekAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitDayOfWeekAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION_METHOD_3_7584F3A358AC11BF_OFFSET))(a1, a2);
		}
	};
}
