#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELPRESETCHIMERACONFIG_METHOD_2_F58A62B052BFFF17_OFFSET UNITYSDK_OFFSET(0x1CFCBE20)
#define RPG_GAMECORE_CHIMERADUELPRESETCHIMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCC090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPresetChimeraConfig_TypeDefinitionIndex = 15853;

	class ChimeraDuelPresetChimeraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChimeraID; // 0x10
		::System::Int32 ChimeraGainExp; // 0x14
		::System::Int32 ChimeraDeltaHp; // 0x18
		::System::Int32 ChimeraDeltaAtk; // 0x1C
		::Il2CppArray<::System::UInt32>* Equipments; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETCHIMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F58A62B052BFFF17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelPresetChimeraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelPresetChimeraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETCHIMERACONFIG_METHOD_2_F58A62B052BFFF17_OFFSET))(a1, a2);
		}
	};
}
