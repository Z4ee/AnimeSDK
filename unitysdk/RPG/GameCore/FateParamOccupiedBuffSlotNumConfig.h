#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_METHOD_6_E38F1C61E66B2614_OFFSET UNITYSDK_OFFSET(0x171CB190)
#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_METHOD_6_F1DBACCD8AB3C590_OFFSET UNITYSDK_OFFSET(0x171CB350)
#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171CB290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOccupiedBuffSlotNumConfig_TypeDefinitionIndex = 15238;

	class FateParamOccupiedBuffSlotNumConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E38F1C61E66B2614(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_METHOD_6_E38F1C61E66B2614_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F1DBACCD8AB3C590(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_METHOD_6_F1DBACCD8AB3C590_OFFSET))(a1, a2);
		}
	};
}
