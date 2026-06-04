#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesBuff; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHENLINGFESBUFFCONFIG_METHOD_2_1B4A157E1F3E70F8_OFFSET UNITYSDK_OFFSET(0x19629600)
#define RPG_GAMECORE_CHENLINGFESBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19629700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesBuffConfig_TypeDefinitionIndex = 17546;

	class ChenLingFesBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChenLingFesBuff*>* BuffMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1B4A157E1F3E70F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESBUFFCONFIG_METHOD_2_1B4A157E1F3E70F8_OFFSET))(a1, a2);
		}
	};
}
