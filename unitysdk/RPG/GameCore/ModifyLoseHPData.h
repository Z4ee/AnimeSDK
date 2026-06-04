#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYLOSEHPDATA_METHOD_3_5FE6B95FBF56BA0B_OFFSET UNITYSDK_OFFSET(0x19956D90)
#define RPG_GAMECORE_MODIFYLOSEHPDATA_METHOD_3_BB0F51DBDA5B392E_OFFSET UNITYSDK_OFFSET(0x19956EB0)
#define RPG_GAMECORE_MODIFYLOSEHPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19956E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyLoseHPData_TypeDefinitionIndex = 22288;

	class ModifyLoseHPData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ConstFinalDamage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5FE6B95FBF56BA0B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyLoseHPData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyLoseHPData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA_METHOD_3_5FE6B95FBF56BA0B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB0F51DBDA5B392E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyLoseHPData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyLoseHPData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA_METHOD_3_BB0F51DBDA5B392E_OFFSET))(a1, a2);
		}
	};
}
