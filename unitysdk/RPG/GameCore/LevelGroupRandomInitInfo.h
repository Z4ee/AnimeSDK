#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGroupRandomInitControl; }

#define RPG_GAMECORE_LEVELGROUPRANDOMINITINFO_METHOD_2_3478711D32A4475C_OFFSET UNITYSDK_OFFSET(0x1D1D4C10)
#define RPG_GAMECORE_LEVELGROUPRANDOMINITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D5750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupRandomInitInfo_TypeDefinitionIndex = 17135;

	class LevelGroupRandomInitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupRandomInitControl*>* ControlList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPRANDOMINITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3478711D32A4475C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupRandomInitInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupRandomInitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPRANDOMINITINFO_METHOD_2_3478711D32A4475C_OFFSET))(a1, a2);
		}
	};
}
