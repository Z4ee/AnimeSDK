#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLEARALLEFFECT_METHOD_3_80BDFA9A9A954E86_OFFSET UNITYSDK_OFFSET(0x19652420)
#define RPG_GAMECORE_CLEARALLEFFECT_METHOD_3_F3A37D4E791A27F2_OFFSET UNITYSDK_OFFSET(0x19652530)
#define RPG_GAMECORE_CLEARALLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19652500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearAllEffect_TypeDefinitionIndex = 19133;

	class ClearAllEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARALLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80BDFA9A9A954E86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearAllEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearAllEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARALLEFFECT_METHOD_3_80BDFA9A9A954E86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3A37D4E791A27F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearAllEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearAllEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARALLEFFECT_METHOD_3_F3A37D4E791A27F2_OFFSET))(a1, a2);
		}
	};
}
