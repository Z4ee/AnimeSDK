#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfSuperEventTypeConfig; }

#define RPG_GAMECORE_ELFSUPEREVENTCONFIG_METHOD_2_CA62F3211A7C6B77_OFFSET UNITYSDK_OFFSET(0x17190E00)
#define RPG_GAMECORE_ELFSUPEREVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17192090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSuperEventConfig_TypeDefinitionIndex = 16940;

	class ElfSuperEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfSuperEventTypeConfig*>* SuperEventTypeConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSUPEREVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA62F3211A7C6B77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSuperEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSuperEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSUPEREVENTCONFIG_METHOD_2_CA62F3211A7C6B77_OFFSET))(a1, a2);
		}
	};
}
