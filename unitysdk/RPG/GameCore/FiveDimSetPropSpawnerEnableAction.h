#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_3_E4CE10F3EB0FC9C3_OFFSET UNITYSDK_OFFSET(0x1720AB30)
#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_3_E6E33D5697A24F2F_OFFSET UNITYSDK_OFFSET(0x1720AA00)
#define RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720AB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPropSpawnerEnableAction_TypeDefinitionIndex = 17138;

	class FiveDimSetPropSpawnerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enabled; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6E33D5697A24F2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_3_E6E33D5697A24F2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4CE10F3EB0FC9C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPROPSPAWNERENABLEACTION_METHOD_3_E4CE10F3EB0FC9C3_OFFSET))(a1, a2);
		}
	};
}
