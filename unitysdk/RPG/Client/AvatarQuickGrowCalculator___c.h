#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarExpItemConfigRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1866CAF0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1866CB30)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C___BUILDEXPPLAN_B__34_0_OFFSET UNITYSDK_OFFSET(0x1866CB80)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C___ENSUREAVATAREXPROWS_B__18_0_OFFSET UNITYSDK_OFFSET(0x1866CB40)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarQuickGrowCalculator___c_TypeDefinitionIndex = 59708;

	class AvatarQuickGrowCalculator___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarQuickGrowCalculator___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarQuickGrowCalculator___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarQuickGrowCalculator___c_TypeDefinitionIndex)->GetStaticField(0x56FC0);
		}
		static ::System::Predicate_1<::RPG::GameCore::ItemConfig*>** StaticGet___9__34_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::ItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarQuickGrowCalculator___c_TypeDefinitionIndex)->GetStaticField(0x56FC8);
		}
		static ::System::Comparison_1<::RPG::GameCore::AvatarExpItemConfigRow*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::AvatarExpItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarQuickGrowCalculator___c_TypeDefinitionIndex)->GetStaticField(0x56FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __EnsureAvatarExpRows_b__18_0(::RPG::GameCore::AvatarExpItemConfigRow* a1, ::RPG::GameCore::AvatarExpItemConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarExpItemConfigRow*, ::RPG::GameCore::AvatarExpItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C___ENSUREAVATAREXPROWS_B__18_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __BuildExpPlan_b__34_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C___BUILDEXPPLAN_B__34_0_OFFSET))(this, a1);
		}
	};
}
