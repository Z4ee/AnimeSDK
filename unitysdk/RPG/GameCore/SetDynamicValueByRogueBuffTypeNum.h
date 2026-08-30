#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_METHOD_3_2F53D63F69446965_OFFSET UNITYSDK_OFFSET(0x1E821E70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_METHOD_3_BAB44E7B0D7C4AD8_OFFSET UNITYSDK_OFFSET(0x1E821E30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E821E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffTypeNum_TypeDefinitionIndex = 21527;

	class SetDynamicValueByRogueBuffTypeNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BAB44E7B0D7C4AD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_METHOD_3_BAB44E7B0D7C4AD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F53D63F69446965(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_METHOD_3_2F53D63F69446965_OFFSET))(a1, a2);
		}
	};
}
