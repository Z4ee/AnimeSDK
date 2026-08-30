#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ContainerConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Booklet { class ElementConfig; }

#define RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_METHOD_4_4631F8F506A3FEDA_OFFSET UNITYSDK_OFFSET(0x1CE8AC50)
#define RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_METHOD_4_916E0FF76881A405_OFFSET UNITYSDK_OFFSET(0x1CE8B430)
#define RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8AC40)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int DecorativeContainerConfig_TypeDefinitionIndex = 24688;

	class DecorativeContainerConfig : public ::RPG::GameCore::Booklet::ContainerConfig
	{
	public:
		::RPG::GameCore::Booklet::ElementConfig* Content; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_916E0FF76881A405(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::DecorativeContainerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::DecorativeContainerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_METHOD_4_916E0FF76881A405_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4631F8F506A3FEDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::DecorativeContainerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::DecorativeContainerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_METHOD_4_4631F8F506A3FEDA_OFFSET))(a1, a2);
		}
	};
}
