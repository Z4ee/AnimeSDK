#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG_METHOD_3_5876CD01423DDCA3_OFFSET UNITYSDK_OFFSET(0x172605E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG_METHOD_3_AC4936E90CC9EA5A_OFFSET UNITYSDK_OFFSET(0x172606B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17260660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddNpcAndDressEquipConfig_TypeDefinitionIndex = 17831;

	class GridFightModifierAddNpcAndDressEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5876CD01423DDCA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddNpcAndDressEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddNpcAndDressEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG_METHOD_3_5876CD01423DDCA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC4936E90CC9EA5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddNpcAndDressEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddNpcAndDressEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDNPCANDDRESSEQUIPCONFIG_METHOD_3_AC4936E90CC9EA5A_OFFSET))(a1, a2);
		}
	};
}
