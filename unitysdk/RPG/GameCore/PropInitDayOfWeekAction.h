#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropDayOfWeekActionParamObject; }

#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION_METHOD_3_C8C20455C9B428D6_OFFSET UNITYSDK_OFFSET(0x1D94D910)
#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION_METHOD_3_DA10D459A1BF7FD5_OFFSET UNITYSDK_OFFSET(0x1D94D8D0)
#define RPG_GAMECORE_PROPINITDAYOFWEEKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D94D900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitDayOfWeekAction_TypeDefinitionIndex = 22076;

	class PropInitDayOfWeekAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropDayOfWeekActionParamObject*>* ActionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DA10D459A1BF7FD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitDayOfWeekAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitDayOfWeekAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION_METHOD_3_DA10D459A1BF7FD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C8C20455C9B428D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitDayOfWeekAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitDayOfWeekAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITDAYOFWEEKACTION_METHOD_3_C8C20455C9B428D6_OFFSET))(a1, a2);
		}
	};
}
