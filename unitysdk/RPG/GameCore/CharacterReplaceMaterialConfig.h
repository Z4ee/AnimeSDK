#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterReplaceMaterialOriginProperty; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALCONFIG_METHOD_2_EAFD494236C19D4A_OFFSET UNITYSDK_OFFSET(0x17071B40)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17071CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialConfig_TypeDefinitionIndex = 16023;

	class CharacterReplaceMaterialConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*>* ReplaceConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialOriginProperty*>* OriginProperty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EAFD494236C19D4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceMaterialConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceMaterialConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALCONFIG_METHOD_2_EAFD494236C19D4A_OFFSET))(a1, a2);
		}
	};
}
