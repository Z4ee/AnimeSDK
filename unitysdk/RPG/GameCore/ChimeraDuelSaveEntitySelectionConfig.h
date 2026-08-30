#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelSaveEntitySelectionConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_METHOD_3_3D3881AA082F2369_OFFSET UNITYSDK_OFFSET(0x1E33B850)
#define RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_METHOD_3_5BDCDBF255929BD1_OFFSET UNITYSDK_OFFSET(0x1E33B8B0)
#define RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33B8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSaveEntitySelectionConfig_TypeDefinitionIndex = 15727;

	class ChimeraDuelSaveEntitySelectionConfig : public ::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig
	{
	public:
		::System::String* SaveName; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Selector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D3881AA082F2369(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSaveEntitySelectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSaveEntitySelectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_METHOD_3_3D3881AA082F2369_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5BDCDBF255929BD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelSaveEntitySelectionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelSaveEntitySelectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSAVEENTITYSELECTIONCONFIG_METHOD_3_5BDCDBF255929BD1_OFFSET))(a1, a2);
		}
	};
}
