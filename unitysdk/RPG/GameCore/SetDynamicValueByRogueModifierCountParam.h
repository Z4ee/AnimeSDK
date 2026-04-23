#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNTPARAM_METHOD_4_D60A4E28BC00EF24_OFFSET UNITYSDK_OFFSET(0x18E26FD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNTPARAM_METHOD_4_E58DDD937AD6D7A4_OFFSET UNITYSDK_OFFSET(0x18E27060)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E27030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueModifierCountParam_TypeDefinitionIndex = 20644;

	class SetDynamicValueByRogueModifierCountParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNTPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D60A4E28BC00EF24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueModifierCountParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueModifierCountParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNTPARAM_METHOD_4_D60A4E28BC00EF24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E58DDD937AD6D7A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueModifierCountParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueModifierCountParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEMODIFIERCOUNTPARAM_METHOD_4_E58DDD937AD6D7A4_OFFSET))(a1, a2);
		}
	};
}
