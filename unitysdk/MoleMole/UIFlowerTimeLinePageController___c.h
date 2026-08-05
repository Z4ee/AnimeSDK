#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_D6FEE2A35B0F262A;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AC64B0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC64F0)
#define MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__REFRESHFLOWERTEXT_B__19_0_OFFSET UNITYSDK_OFFSET(0x18AC6500)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerTimeLinePageController___c_TypeDefinitionIndex = 62488;

	class UIFlowerTimeLinePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIFlowerTimeLinePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIFlowerTimeLinePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerTimeLinePageController___c_TypeDefinitionIndex)->GetStaticField(0x4AC80);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>, ::System::String*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerTimeLinePageController___c_TypeDefinitionIndex)->GetStaticField(0x4AC88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshFlowerText_b__19_0(::System::Collections::Generic::KeyValuePair_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*> kv)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_D6FEE2A35B0F262A*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERTIMELINEPAGECONTROLLER___C__REFRESHFLOWERTEXT_B__19_0_OFFSET))(this, kv);
		}
	};
}
