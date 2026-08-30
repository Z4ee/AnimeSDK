#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ConditionParam; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATEACTIVITYPANELDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF28E80)
#define RPG_CLIENT_FATEACTIVITYPANELDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCF28EC0)
#define RPG_CLIENT_FATEACTIVITYPANELDATA___C__ISLOCKEDBYPRECONDITIONS_B__8_0_OFFSET UNITYSDK_OFFSET(0xCF28ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateActivityPanelData___c_TypeDefinitionIndex = 61712;

	class FateActivityPanelData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateActivityPanelData___c_TypeDefinitionIndex)->GetStaticField(0x66880);
		}
		static ::RPG::Client::FateActivityPanelData___c** StaticGet___9()
		{
			return (::RPG::Client::FateActivityPanelData___c**)Il2CppClass::FromTypeDefinitionIndex(FateActivityPanelData___c_TypeDefinitionIndex)->GetStaticField(0x66888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsLockedByPreConditions_b__8_0(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA___C__ISLOCKEDBYPRECONDITIONS_B__8_0_OFFSET))(this, a1);
		}
	};
}
