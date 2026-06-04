#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_73853BDDDD835DA3_OFFSET UNITYSDK_OFFSET(0x19E58AA0)
#define RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_9E6D4D2D483E7AF3_OFFSET UNITYSDK_OFFSET(0x19E58A10)
#define RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E58A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitHeartDialScriptStepChange_TypeDefinitionIndex = 20048;

	class WaitHeartDialScriptStepChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E6D4D2D483E7AF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHeartDialScriptStepChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHeartDialScriptStepChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_9E6D4D2D483E7AF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73853BDDDD835DA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitHeartDialScriptStepChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitHeartDialScriptStepChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITHEARTDIALSCRIPTSTEPCHANGE_METHOD_3_73853BDDDD835DA3_OFFSET))(a1, a2);
		}
	};
}
