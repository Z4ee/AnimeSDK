#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_METHOD_2_C486126AFC9A2677_OFFSET UNITYSDK_OFFSET(0x194BEC20)
#define RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_METHOD_2_F76E5798A1C5AD31_OFFSET UNITYSDK_OFFSET(0x194BEDB0)
#define RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194BEE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelSaveEntitySelectionConfig_TypeDefinitionIndex = 15125;

	class BaseChimeraDuelSaveEntitySelectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C486126AFC9A2677(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_METHOD_2_C486126AFC9A2677_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F76E5798A1C5AD31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG_METHOD_2_F76E5798A1C5AD31_OFFSET))(a1, a2);
		}
	};
}
