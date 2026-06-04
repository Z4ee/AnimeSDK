#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }

#define RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIGLIST_METHOD_2_DBD7EF727E4D38F7_OFFSET UNITYSDK_OFFSET(0x1964FBE0)
#define RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1964FCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CinemachineVirtualCameraTemplateConfigList_TypeDefinitionIndex = 15622;

	class CinemachineVirtualCameraTemplateConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>* TemplateList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DBD7EF727E4D38F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIGLIST_METHOD_2_DBD7EF727E4D38F7_OFFSET))(a1, a2);
		}
	};
}
