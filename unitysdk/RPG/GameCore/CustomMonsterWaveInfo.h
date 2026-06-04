#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_METHOD_3_38C4923D84540706_OFFSET UNITYSDK_OFFSET(0x19687A80)
#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_METHOD_3_F60A0C1D9490FE0D_OFFSET UNITYSDK_OFFSET(0x19687A00)
#define RPG_GAMECORE_CUSTOMMONSTERWAVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19687A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomMonsterWaveInfo_TypeDefinitionIndex = 22405;

	class CustomMonsterWaveInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CurrentWave; // 0x18
		::RPG::GameCore::DynamicFloat* MaxWave; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F60A0C1D9490FE0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomMonsterWaveInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomMonsterWaveInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_METHOD_3_F60A0C1D9490FE0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38C4923D84540706(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CustomMonsterWaveInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CustomMonsterWaveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMONSTERWAVEINFO_METHOD_3_38C4923D84540706_OFFSET))(a1, a2);
		}
	};
}
