#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActiveActivityBenefitData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB081FE0)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB082020)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C__ISSHOWNORMALREDDOT_B__3_0_OFFSET UNITYSDK_OFFSET(0xB082030)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityPanelData___c_TypeDefinitionIndex = 57577;

	class ActiveActivityPanelData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActiveActivityBenefitData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActiveActivityBenefitData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActiveActivityPanelData___c_TypeDefinitionIndex)->GetStaticField(0x4BF90);
		}
		static ::RPG::Client::ActiveActivityPanelData___c** StaticGet___9()
		{
			return (::RPG::Client::ActiveActivityPanelData___c**)Il2CppClass::FromTypeDefinitionIndex(ActiveActivityPanelData___c_TypeDefinitionIndex)->GetStaticField(0x4BF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsShowNormalRedDot_b__3_0(::RPG::Client::ActiveActivityBenefitData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActiveActivityBenefitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C__ISSHOWNORMALREDDOT_B__3_0_OFFSET))(this, a1);
		}
	};
}
