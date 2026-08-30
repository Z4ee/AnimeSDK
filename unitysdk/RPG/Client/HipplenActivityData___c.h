#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_HIPPLENACTIVITYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3DA9D0)
#define RPG_CLIENT_HIPPLENACTIVITYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3DAA10)
#define RPG_CLIENT_HIPPLENACTIVITYDATA___C___HASRESIDENTREWARDSTOTAKE_B__5_0_OFFSET UNITYSDK_OFFSET(0xD3DAA20)

namespace RPG::Client
{
	inline static constexpr unsigned int HipplenActivityData___c_TypeDefinitionIndex = 61625;

	class HipplenActivityData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HipplenActivityData___c** StaticGet___9()
		{
			return (::RPG::Client::HipplenActivityData___c**)Il2CppClass::FromTypeDefinitionIndex(HipplenActivityData___c_TypeDefinitionIndex)->GetStaticField(0x5B8E0);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(HipplenActivityData___c_TypeDefinitionIndex)->GetStaticField(0x5B8E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __HasResidentRewardsToTake_b__5_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HIPPLENACTIVITYDATA___C___HASRESIDENTREWARDSTOTAKE_B__5_0_OFFSET))(this, a1);
		}
	};
}
