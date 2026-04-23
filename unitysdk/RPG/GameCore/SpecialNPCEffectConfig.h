#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationEntityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_METHOD_3_8A5BAC48951E68E8_OFFSET UNITYSDK_OFFSET(0x18E83260)
#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_METHOD_3_F543E08A2401D12D_OFFSET UNITYSDK_OFFSET(0x18E83220)
#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E83250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCEffectConfig_TypeDefinitionIndex = 16116;

	class SpecialNPCEffectConfig : public ::RPG::GameCore::MapRotationEntityEffectConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* NpcIDs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F543E08A2401D12D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialNPCEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialNPCEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_METHOD_3_F543E08A2401D12D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A5BAC48951E68E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialNPCEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialNPCEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_METHOD_3_8A5BAC48951E68E8_OFFSET))(a1, a2);
		}
	};
}
