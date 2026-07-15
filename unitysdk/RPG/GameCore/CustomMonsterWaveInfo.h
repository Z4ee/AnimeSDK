#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_METHOD_3_38C4923D84540706_OFFSET UNITYSDK_OFFSET(0x1BC3F880)
#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_METHOD_3_FCE3155CB5DC51EB_OFFSET UNITYSDK_OFFSET(0x1BC3F840)
#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3F870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomMonsterWaveInfo_TypeDefinitionIndex = 22847;

	class CustomMonsterWaveInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CurrentWave; // 0x18
		::RPG::GameCore::DynamicFloat* MaxWave; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FCE3155CB5DC51EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomMonsterWaveInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomMonsterWaveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_METHOD_3_FCE3155CB5DC51EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38C4923D84540706(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomMonsterWaveInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomMonsterWaveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_METHOD_3_38C4923D84540706_OFFSET))(a1, a2);
		}
	};
}
