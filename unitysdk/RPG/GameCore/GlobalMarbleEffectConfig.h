#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMARBLEEFFECTCONFIG_METHOD_2_268699C4022635F2_OFFSET UNITYSDK_OFFSET(0x1722F970)
#define RPG_GAMECORE_GLOBALMARBLEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172488D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalMarbleEffectConfig_TypeDefinitionIndex = 15478;

	class GlobalMarbleEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MarbleEffectConfig*>* EffectDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_268699C4022635F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalMarbleEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalMarbleEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMARBLEEFFECTCONFIG_METHOD_2_268699C4022635F2_OFFSET))(a1, a2);
		}
	};
}
