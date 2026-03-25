#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIDEHINTEFFECT_METHOD_3_247FDE585B2EB06E_OFFSET UNITYSDK_OFFSET(0x172A9EF0)
#define RPG_GAMECORE_HIDEHINTEFFECT_METHOD_3_67DC77A8DBBBA739_OFFSET UNITYSDK_OFFSET(0x172A9E70)
#define RPG_GAMECORE_HIDEHINTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x172A9EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideHintEffect_TypeDefinitionIndex = 18873;

	class HideHintEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 InstanceID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEHINTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_67DC77A8DBBBA739(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideHintEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideHintEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEHINTEFFECT_METHOD_3_67DC77A8DBBBA739_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_247FDE585B2EB06E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideHintEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEHINTEFFECT_METHOD_3_247FDE585B2EB06E_OFFSET))(a1, a2);
		}
	};
}
