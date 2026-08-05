#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_446;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186D34A0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186D34E0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C___UPDATEREWARDS_B__12_0_OFFSET UNITYSDK_OFFSET(0x186D34F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex = 73049;

	class UIHadalZone_RewardV2_PopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHadalZone_RewardV2_PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_RewardV2_PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A430);
		}
		static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_446*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_446*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __UpdateRewards_b__12_0(::Class_1_5DA2E7556103D5A3_446* l, ::Class_1_5DA2E7556103D5A3_446* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_446*, ::Class_1_5DA2E7556103D5A3_446*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C___UPDATEREWARDS_B__12_0_OFFSET))(this, l, r);
		}
	};
}
