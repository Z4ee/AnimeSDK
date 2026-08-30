#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYLOSEHPDATA_METHOD_3_B48778BD0F03A442_OFFSET UNITYSDK_OFFSET(0x1D2B6080)
#define RPG_GAMECORE_MODIFYLOSEHPDATA_METHOD_3_BB0F51DBDA5B392E_OFFSET UNITYSDK_OFFSET(0x1D2B6160)
#define RPG_GAMECORE_MODIFYLOSEHPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B6100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyLoseHPData_TypeDefinitionIndex = 23306;

	class ModifyLoseHPData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ConstFinalDamage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B48778BD0F03A442(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyLoseHPData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyLoseHPData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA_METHOD_3_B48778BD0F03A442_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB0F51DBDA5B392E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyLoseHPData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyLoseHPData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYLOSEHPDATA_METHOD_3_BB0F51DBDA5B392E_OFFSET))(a1, a2);
		}
	};
}
