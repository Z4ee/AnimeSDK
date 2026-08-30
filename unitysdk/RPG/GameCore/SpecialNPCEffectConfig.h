#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationEntityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_METHOD_3_2DE22C5499B5E436_OFFSET UNITYSDK_OFFSET(0x1D54ADB0)
#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_METHOD_3_69122D3048D1417B_OFFSET UNITYSDK_OFFSET(0x1D54AD70)
#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D54ADA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCEffectConfig_TypeDefinitionIndex = 16837;

	class SpecialNPCEffectConfig : public ::RPG::GameCore::MapRotationEntityEffectConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* NpcIDs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69122D3048D1417B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialNPCEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialNPCEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_METHOD_3_69122D3048D1417B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2DE22C5499B5E436(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialNPCEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialNPCEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_METHOD_3_2DE22C5499B5E436_OFFSET))(a1, a2);
		}
	};
}
