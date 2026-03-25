#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMODIFIERCONFIG_METHOD_2_24004B55CD1C4B68_OFFSET UNITYSDK_OFFSET(0x1761DA60)
#define RPG_GAMECORE_ROGUEMODIFIERCONFIG_METHOD_2_C3038A93A49112AD_OFFSET UNITYSDK_OFFSET(0x1761DC20)
#define RPG_GAMECORE_ROGUEMODIFIERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1761DC30)
#define RPG_GAMECORE_ROGUEMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1761CA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierConfig_TypeDefinitionIndex = 16473;

	class RogueModifierConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierConfig*>*>** StaticGet__FromBinary_RogueModifierConfig_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueModifierConfig_TypeDefinitionIndex)->GetStaticField(0x353E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_24004B55CD1C4B68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG_METHOD_2_24004B55CD1C4B68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C3038A93A49112AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG_METHOD_2_C3038A93A49112AD_OFFSET))(a1, a2);
		}
	};
}
