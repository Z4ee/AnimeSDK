#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_METHOD_3_39ED1AE5A8E3D0E0_OFFSET UNITYSDK_OFFSET(0x19604240)
#define RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_METHOD_3_E1B9F66150C003F0_OFFSET UNITYSDK_OFFSET(0x196041C0)
#define RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x19604210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeHeartDialModelByScript_TypeDefinitionIndex = 20676;

	class ChangeHeartDialModelByScript : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ScriptID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1B9F66150C003F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeHeartDialModelByScript*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeHeartDialModelByScript*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_METHOD_3_E1B9F66150C003F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_39ED1AE5A8E3D0E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeHeartDialModelByScript* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeHeartDialModelByScript*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_METHOD_3_39ED1AE5A8E3D0E0_OFFSET))(a1, a2);
		}
	};
}
