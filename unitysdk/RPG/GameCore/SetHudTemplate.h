#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETHUDTEMPLATE_METHOD_3_21C5F4774A346A06_OFFSET UNITYSDK_OFFSET(0x18E34D70)
#define RPG_GAMECORE_SETHUDTEMPLATE_METHOD_3_2783C47DAC898D42_OFFSET UNITYSDK_OFFSET(0x18E34DF0)
#define RPG_GAMECORE_SETHUDTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E34DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHudTemplate_TypeDefinitionIndex = 19887;

	class SetHudTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TemplateID; // 0x18
		::System::Boolean EnableTemplate; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHUDTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21C5F4774A346A06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHudTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHudTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHUDTEMPLATE_METHOD_3_21C5F4774A346A06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2783C47DAC898D42(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetHudTemplate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetHudTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHUDTEMPLATE_METHOD_3_2783C47DAC898D42_OFFSET))(a1, a2);
		}
	};
}
