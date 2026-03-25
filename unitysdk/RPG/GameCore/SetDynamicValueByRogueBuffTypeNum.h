#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_METHOD_3_1F830E8907A04CBA_OFFSET UNITYSDK_OFFSET(0x176C35F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_METHOD_3_2F53D63F69446965_OFFSET UNITYSDK_OFFSET(0x176C3660)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x176C3630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffTypeNum_TypeDefinitionIndex = 19940;

	class SetDynamicValueByRogueBuffTypeNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F830E8907A04CBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_METHOD_3_1F830E8907A04CBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F53D63F69446965(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUM_METHOD_3_2F53D63F69446965_OFFSET))(a1, a2);
		}
	};
}
