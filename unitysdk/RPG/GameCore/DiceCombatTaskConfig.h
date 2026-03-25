#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_METHOD_2_74916D5CE466B341_OFFSET UNITYSDK_OFFSET(0x17167EF0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_METHOD_2_A5257641A02F4D53_OFFSET UNITYSDK_OFFSET(0x171680B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x17168110)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1715E6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TypeDefinitionIndex = 14728;

	class DiceCombatTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig*>*>** StaticGet__FromBinary_DiceCombatTaskConfig_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatTaskConfig_TypeDefinitionIndex)->GetStaticField(0x2A3E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_74916D5CE466B341(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_METHOD_2_74916D5CE466B341_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A5257641A02F4D53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_METHOD_2_A5257641A02F4D53_OFFSET))(a1, a2);
		}
	};
}
