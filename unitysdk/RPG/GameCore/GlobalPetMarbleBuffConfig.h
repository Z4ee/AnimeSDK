#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleBuffConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALPETMARBLEBUFFCONFIG_METHOD_2_0749AE1A7A86604B_OFFSET UNITYSDK_OFFSET(0x1D71F3C0)
#define RPG_GAMECORE_GLOBALPETMARBLEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D71F4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalPetMarbleBuffConfig_TypeDefinitionIndex = 16906;

	class GlobalPetMarbleBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MarbleBuffConfig*>* BuffDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALPETMARBLEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0749AE1A7A86604B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalPetMarbleBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalPetMarbleBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALPETMARBLEBUFFCONFIG_METHOD_2_0749AE1A7A86604B_OFFSET))(a1, a2);
		}
	};
}
