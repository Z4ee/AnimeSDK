#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_METHOD_3_059ADB58E5FB3D0F_OFFSET UNITYSDK_OFFSET(0x1E822490)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_METHOD_3_FCD1975E7210BCD3_OFFSET UNITYSDK_OFFSET(0x1E8224E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8224D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSelectAeon_TypeDefinitionIndex = 21537;

	class SetDynamicValueByRogueSelectAeon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_059ADB58E5FB3D0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_METHOD_3_059ADB58E5FB3D0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FCD1975E7210BCD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSelectAeon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESELECTAEON_METHOD_3_FCD1975E7210BCD3_OFFSET))(a1, a2);
		}
	};
}
