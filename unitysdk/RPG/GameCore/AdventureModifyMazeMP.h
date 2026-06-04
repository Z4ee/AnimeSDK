#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_METHOD_3_3F3E8F94B17E7A8C_OFFSET UNITYSDK_OFFSET(0x19450510)
#define RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_METHOD_3_57A992A38412BF09_OFFSET UNITYSDK_OFFSET(0x19450590)
#define RPG_GAMECORE_ADVENTUREMODIFYMAZEMP__CTOR_OFFSET UNITYSDK_OFFSET(0x19450560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifyMazeMP_TypeDefinitionIndex = 20531;

	class AdventureModifyMazeMP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x18
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Boolean ClientUseGMCommand; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYMAZEMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F3E8F94B17E7A8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifyMazeMP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifyMazeMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_METHOD_3_3F3E8F94B17E7A8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57A992A38412BF09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureModifyMazeMP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureModifyMazeMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_METHOD_3_57A992A38412BF09_OFFSET))(a1, a2);
		}
	};
}
