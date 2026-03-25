#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFDECORATORCONFIG_METHOD_3_0796C7F8F5EA2B1D_OFFSET UNITYSDK_OFFSET(0x1718D920)
#define RPG_GAMECORE_ELFDECORATORCONFIG_METHOD_3_A921478E76A52486_OFFSET UNITYSDK_OFFSET(0x1718D800)
#define RPG_GAMECORE_ELFDECORATORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1718D900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfDecoratorConfig_TypeDefinitionIndex = 16956;

	class ElfDecoratorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 Level; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDECORATORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A921478E76A52486(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDecoratorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDecoratorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDECORATORCONFIG_METHOD_3_A921478E76A52486_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0796C7F8F5EA2B1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfDecoratorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfDecoratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDECORATORCONFIG_METHOD_3_0796C7F8F5EA2B1D_OFFSET))(a1, a2);
		}
	};
}
