#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_METHOD_2_A375176172C657A9_OFFSET UNITYSDK_OFFSET(0x1D013860)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_METHOD_2_CBF4DDF5E2F7867F_OFFSET UNITYSDK_OFFSET(0x1D013940)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_METHOD_2_FCE39163DF7C033F_OFFSET UNITYSDK_OFFSET(0x1D013770)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0139B0)
#define RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D013850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageBehaviorTemplateListConfig_TypeDefinitionIndex = 15474;

	class DamageBehaviorTemplateListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::RPG::GameCore::DamageBehaviorTemplate** StaticGet_S_Default()
		{
			return (::RPG::GameCore::DamageBehaviorTemplate**)Il2CppClass::FromTypeDefinitionIndex(DamageBehaviorTemplateListConfig_TypeDefinitionIndex)->GetStaticField(0xBA60);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DamageBehaviorTemplate*>* ConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_FCE39163DF7C033F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageBehaviorTemplateListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageBehaviorTemplateListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_METHOD_2_FCE39163DF7C033F_OFFSET))(a1, a2);
		}

		::RPG::GameCore::DamageBehaviorTemplate* Method_2_A375176172C657A9(::System::String* a1)
		{
			return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_METHOD_2_A375176172C657A9_OFFSET))(this, a1);
		}

		::RPG::GameCore::DamageBehaviorTemplate* Method_2_CBF4DDF5E2F7867F(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEBEHAVIORTEMPLATELISTCONFIG_METHOD_2_CBF4DDF5E2F7867F_OFFSET))(this, a1);
		}
	};
}
