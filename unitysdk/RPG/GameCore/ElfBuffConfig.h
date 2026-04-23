#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfBuff; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELFBUFFCONFIG_METHOD_2_BF55DB325F9D2759_OFFSET UNITYSDK_OFFSET(0x1889A5F0)
#define RPG_GAMECORE_ELFBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1889A700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfBuffConfig_TypeDefinitionIndex = 17557;

	class ElfBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ElfBuff*>* BuffMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BF55DB325F9D2759(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFBUFFCONFIG_METHOD_2_BF55DB325F9D2759_OFFSET))(a1, a2);
		}
	};
}
