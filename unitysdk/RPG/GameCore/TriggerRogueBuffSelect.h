#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_METHOD_3_65574B95C1FD16D0_OFFSET UNITYSDK_OFFSET(0x190CBCC0)
#define RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_METHOD_3_91ACE3D6152CCA70_OFFSET UNITYSDK_OFFSET(0x190CBD50)
#define RPG_GAMECORE_TRIGGERROGUEBUFFSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x190CBD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueBuffSelect_TypeDefinitionIndex = 19434;

	class TriggerRogueBuffSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEBUFFSELECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_65574B95C1FD16D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueBuffSelect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueBuffSelect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_METHOD_3_65574B95C1FD16D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91ACE3D6152CCA70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueBuffSelect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueBuffSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEBUFFSELECT_METHOD_3_91ACE3D6152CCA70_OFFSET))(a1, a2);
		}
	};
}
