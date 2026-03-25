#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyConditionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYCONDITIONEXTENDPARAM_METHOD_2_0D26B86779257F3C_OFFSET UNITYSDK_OFFSET(0x16F6EB90)
#define RPG_GAMECORE_ALLEYCONDITIONEXTENDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6EC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyConditionExtendParam_TypeDefinitionIndex = 14369;

	class AlleyConditionExtendParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AlleyConditionType Type; // 0x10
		::System::UInt32 Param; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYCONDITIONEXTENDPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0D26B86779257F3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyConditionExtendParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyConditionExtendParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYCONDITIONEXTENDPARAM_METHOD_2_0D26B86779257F3C_OFFSET))(a1, a2);
		}
	};
}
