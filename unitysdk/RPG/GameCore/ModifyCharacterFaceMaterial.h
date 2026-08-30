#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_METHOD_3_B65E5FA17BCCE81D_OFFSET UNITYSDK_OFFSET(0x1D1B56D0)
#define RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_METHOD_3_CA0DC2CC25EF50DC_OFFSET UNITYSDK_OFFSET(0x1D1B5720)
#define RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B5710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCharacterFaceMaterial_TypeDefinitionIndex = 22172;

	class ModifyCharacterFaceMaterial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Single ExpressionCheekIntensity; // 0x1C
		::System::Single ExpressionShyIntensity; // 0x20
		::System::Single ExpressionShadowIntensity; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B65E5FA17BCCE81D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCharacterFaceMaterial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCharacterFaceMaterial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_METHOD_3_B65E5FA17BCCE81D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CA0DC2CC25EF50DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyCharacterFaceMaterial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyCharacterFaceMaterial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYCHARACTERFACEMATERIAL_METHOD_3_CA0DC2CC25EF50DC_OFFSET))(a1, a2);
		}
	};
}
