#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFTABLECONFIG_METHOD_3_AC3E11657E1DED23_OFFSET UNITYSDK_OFFSET(0x171924B0)
#define RPG_GAMECORE_ELFTABLECONFIG_METHOD_3_DAF835FE23AA7DA0_OFFSET UNITYSDK_OFFSET(0x171925D0)
#define RPG_GAMECORE_ELFTABLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171925B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfTableConfig_TypeDefinitionIndex = 16955;

	class ElfTableConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 Level; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTABLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AC3E11657E1DED23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfTableConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfTableConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTABLECONFIG_METHOD_3_AC3E11657E1DED23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DAF835FE23AA7DA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfTableConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfTableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFTABLECONFIG_METHOD_3_DAF835FE23AA7DA0_OFFSET))(a1, a2);
		}
	};
}
