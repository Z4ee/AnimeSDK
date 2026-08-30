#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYALLMAPCONFIG_METHOD_2_2C71B38A8ED1ED2D_OFFSET UNITYSDK_OFFSET(0x1D1C02A0)
#define RPG_GAMECORE_MONOPOLYALLMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C03A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyAllMapConfig_TypeDefinitionIndex = 16072;

	class MonopolyAllMapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonopolyMapConfig*>* MonopolyMapDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYALLMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2C71B38A8ED1ED2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyAllMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyAllMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYALLMAPCONFIG_METHOD_2_2C71B38A8ED1ED2D_OFFSET))(a1, a2);
		}
	};
}
