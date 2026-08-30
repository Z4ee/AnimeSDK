#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETSCENETVMENU_METHOD_3_D4A342F7A7819275_OFFSET UNITYSDK_OFFSET(0x1D182570)
#define RPG_GAMECORE_PROPSETSCENETVMENU_METHOD_3_EA861CC247F51F5B_OFFSET UNITYSDK_OFFSET(0x1D1824F0)
#define RPG_GAMECORE_PROPSETSCENETVMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x1D182540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetSceneTVMenu_TypeDefinitionIndex = 21726;

	class PropSetSceneTVMenu : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* MenuID; // 0x20
		::RPG::GameCore::DynamicString* TVKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETSCENETVMENU__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA861CC247F51F5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetSceneTVMenu*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetSceneTVMenu*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETSCENETVMENU_METHOD_3_EA861CC247F51F5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D4A342F7A7819275(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetSceneTVMenu* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetSceneTVMenu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETSCENETVMENU_METHOD_3_D4A342F7A7819275_OFFSET))(a1, a2);
		}
	};
}
