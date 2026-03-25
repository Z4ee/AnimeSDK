#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_METHOD_4_B24B79FA74F0EA2D_OFFSET UNITYSDK_OFFSET(0x176C3700)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_METHOD_4_D64B2D3F1633E93D_OFFSET UNITYSDK_OFFSET(0x176C3670)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x176C36D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueBuffTypeNumParam_TypeDefinitionIndex = 19941;

	class SetDynamicValueByRogueBuffTypeNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D64B2D3F1633E93D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_METHOD_4_D64B2D3F1633E93D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B24B79FA74F0EA2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNumParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueBuffTypeNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEBUFFTYPENUMPARAM_METHOD_4_B24B79FA74F0EA2D_OFFSET))(a1, a2);
		}
	};
}
