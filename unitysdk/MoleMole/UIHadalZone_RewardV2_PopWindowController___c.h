#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_399;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169D7E70)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169D7EB0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C___UPDATEREWARDS_B__12_0_OFFSET UNITYSDK_OFFSET(0x169D7EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex = 81901;

	class UIHadalZone_RewardV2_PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_399*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_399*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37AA0);
		}
		static ::MoleMole::UIHadalZone_RewardV2_PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_RewardV2_PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __UpdateRewards_b__12_0(::Class_1_5DA2E7556103D5A3_399* l, ::Class_1_5DA2E7556103D5A3_399* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_399*, ::Class_1_5DA2E7556103D5A3_399*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C___UPDATEREWARDS_B__12_0_OFFSET))(this, l, r);
		}
	};
}
