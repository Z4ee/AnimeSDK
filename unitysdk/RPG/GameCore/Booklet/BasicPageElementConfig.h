#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/FadeInElementConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Booklet { class ElementConfig; }

#define RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_METHOD_4_8766E6C65C1DCA36_OFFSET UNITYSDK_OFFSET(0x1A402590)
#define RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_METHOD_4_CB6E3EA3F308827C_OFFSET UNITYSDK_OFFSET(0x1A4025F0)
#define RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4025E0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int BasicPageElementConfig_TypeDefinitionIndex = 24095;

	class BasicPageElementConfig : public ::RPG::GameCore::Booklet::FadeInElementConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::ElementConfig*>* ElementList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8766E6C65C1DCA36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::BasicPageElementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::BasicPageElementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_METHOD_4_8766E6C65C1DCA36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CB6E3EA3F308827C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::BasicPageElementConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::BasicPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_METHOD_4_CB6E3EA3F308827C_OFFSET))(a1, a2);
		}
	};
}
