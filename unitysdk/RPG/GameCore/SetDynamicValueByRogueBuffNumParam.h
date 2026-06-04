#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_METHOD_4_6C633578394B33C5_OFFSET UNITYSDK_OFFSET(0x19C433D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_METHOD_4_6EC86CA88B115FF5_OFFSET UNITYSDK_OFFSET(0x19C43340)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19C433A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffNumParam_TypeDefinitionIndex = 20550;

	class SetDynamicValueByRogueBuffNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6EC86CA88B115FF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_METHOD_4_6EC86CA88B115FF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6C633578394B33C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffNumParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFNUMPARAM_METHOD_4_6C633578394B33C5_OFFSET))(a1, a2);
		}
	};
}
