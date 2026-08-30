#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHPStanceChangeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_METHOD_3_07454D2A26F7E197_OFFSET UNITYSDK_OFFSET(0x1E811010)
#define RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_METHOD_3_EBF58E416F6D6D0E_OFFSET UNITYSDK_OFFSET(0x1E8110B0)
#define RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E811070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBossHPStanceChangeType_TypeDefinitionIndex = 23379;

	class SetBossHPStanceChangeType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::BossHPStanceChangeType ChangeType; // 0x18
		::RPG::GameCore::DynamicFloat* ChangeTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07454D2A26F7E197(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBossHPStanceChangeType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBossHPStanceChangeType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_METHOD_3_07454D2A26F7E197_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EBF58E416F6D6D0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBossHPStanceChangeType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBossHPStanceChangeType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBOSSHPSTANCECHANGETYPE_METHOD_3_EBF58E416F6D6D0E_OFFSET))(a1, a2);
		}
	};
}
