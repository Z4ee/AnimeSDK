#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ConditionParam; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATEACTIVITYPANELDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x966BF40)
#define RPG_CLIENT_FATEACTIVITYPANELDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x966BF80)
#define RPG_CLIENT_FATEACTIVITYPANELDATA___C__ISLOCKEDBYPRECONDITIONS_B__8_0_OFFSET UNITYSDK_OFFSET(0x966BF90)

namespace RPG::Client
{
	inline static constexpr unsigned int FateActivityPanelData___c_TypeDefinitionIndex = 49989;

	class FateActivityPanelData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateActivityPanelData___c** StaticGet___9()
		{
			return (::RPG::Client::FateActivityPanelData___c**)Il2CppClass::FromTypeDefinitionIndex(FateActivityPanelData___c_TypeDefinitionIndex)->GetStaticField(0x47B70);
		}
		static ::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::ConditionParam*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateActivityPanelData___c_TypeDefinitionIndex)->GetStaticField(0x47B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsLockedByPreConditions_b__8_0(::RPG::GameCore::ConditionParam* condition)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEACTIVITYPANELDATA___C__ISLOCKEDBYPRECONDITIONS_B__8_0_OFFSET))(this, condition);
		}
	};
}
