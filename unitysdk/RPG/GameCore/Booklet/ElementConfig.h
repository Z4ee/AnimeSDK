#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_METHOD_2_1D238AF472583362_OFFSET UNITYSDK_OFFSET(0x16FECB50)
#define RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_METHOD_2_E6AAB73FCC8BF803_OFFSET UNITYSDK_OFFSET(0x16FEC210)
#define RPG_GAMECORE_BOOKLET_ELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEB6A0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ElementConfig_TypeDefinitionIndex = 22795;

	class ElementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 PrefabID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_ELEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E6AAB73FCC8BF803(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ElementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ElementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_METHOD_2_E6AAB73FCC8BF803_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1D238AF472583362(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::ElementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::ElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_METHOD_2_1D238AF472583362_OFFSET))(a1, a2);
		}
	};
}
