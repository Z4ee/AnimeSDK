#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrepTutorialPopupPanelType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALPOPUPPANELVISIBLEPARAM_METHOD_2_256A1032F10B7042_OFFSET UNITYSDK_OFFSET(0x1D15FF90)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALPOPUPPANELVISIBLEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D160390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialPopupPanelVisibleParam_TypeDefinitionIndex = 19738;

	class GridFightPrepTutorialPopupPanelVisibleParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::GridFightPrepTutorialPopupPanelType PopupPanelType; // 0x10
		::System::Boolean Visible; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALPOPUPPANELVISIBLEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_256A1032F10B7042(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrepTutorialPopupPanelVisibleParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrepTutorialPopupPanelVisibleParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALPOPUPPANELVISIBLEPARAM_METHOD_2_256A1032F10B7042_OFFSET))(a1, a2);
		}
	};
}
