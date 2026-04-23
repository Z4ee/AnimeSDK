#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FINISHACTIONCONDITION_METHOD_2_A463AA56A373C28A_OFFSET UNITYSDK_OFFSET(0x188E4B20)
#define RPG_GAMECORE_FINISHACTIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x188E4B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishActionCondition_TypeDefinitionIndex = 18035;

	class FinishActionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A463AA56A373C28A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishActionCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishActionCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHACTIONCONDITION_METHOD_2_A463AA56A373C28A_OFFSET))(a1, a2);
		}
	};
}
