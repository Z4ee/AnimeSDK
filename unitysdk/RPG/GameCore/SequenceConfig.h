#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SEQUENCECONFIG_METHOD_4_05479A80423B2C4C_OFFSET UNITYSDK_OFFSET(0x1769F550)
#define RPG_GAMECORE_SEQUENCECONFIG_METHOD_4_60F22371C24186DD_OFFSET UNITYSDK_OFFSET(0x1769F4D0)
#define RPG_GAMECORE_SEQUENCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1769F520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SequenceConfig_TypeDefinitionIndex = 22052;

	class SequenceConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SEQUENCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_60F22371C24186DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SequenceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SequenceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SEQUENCECONFIG_METHOD_4_60F22371C24186DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05479A80423B2C4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SequenceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SequenceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SEQUENCECONFIG_METHOD_4_05479A80423B2C4C_OFFSET))(a1, a2);
		}
	};
}
