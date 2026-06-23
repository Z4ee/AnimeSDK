#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C6F345074C0023B8.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

class Class_0_16E4307DCC419505_139;
class Class_1_9A48ACA543D73766;
class Class_2_A9A857AD270B9CE1;
class Class_2_AB9601BC4707463D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4C0064B3F317EAB1_METHOD_2_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x188624A0)
#define CLASS_2_4C0064B3F317EAB1_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x18862150)
#define CLASS_2_4C0064B3F317EAB1_METHOD_2_5F6B6215290C17D3_OFFSET UNITYSDK_OFFSET(0x18861330)
#define CLASS_2_4C0064B3F317EAB1_METHOD_2_9F459089AD62C6AA_OFFSET UNITYSDK_OFFSET(0x18862300)
#define CLASS_2_4C0064B3F317EAB1_METHOD_2_B0E07BA4B1FBAA7F_OFFSET UNITYSDK_OFFSET(0x188622F0)
#define CLASS_2_4C0064B3F317EAB1_METHOD_2_F29D407ED9229B14_OFFSET UNITYSDK_OFFSET(0x18862430)
#define CLASS_2_4C0064B3F317EAB1__CTOR_OFFSET UNITYSDK_OFFSET(0x18860FB0)

inline static constexpr unsigned int Class_2_4C0064B3F317EAB1_TypeDefinitionIndex = 84381;

class Class_2_4C0064B3F317EAB1 : public ::Class_1_C6F345074C0023B8
{
public:
	::MoleMole::EntityHandle Field_2_1; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::MoleMole::EntityHandle>* Field_2_0; // 0x60
	::Class_1_9A48ACA543D73766* Field_2_2; // 0x68

	::System::Void _ctor(::Class_0_16E4307DCC419505_139* a1, ::Class_2_A9A857AD270B9CE1* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*, ::Class_2_A9A857AD270B9CE1*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4C0064B3F317EAB1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5F6B6215290C17D3(::MoleMole::UI::FlowerShop::ESlotType a1, ::Class_2_AB9601BC4707463D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_AB9601BC4707463D*))((::PBYTE)hIl2Cpp + CLASS_2_4C0064B3F317EAB1_METHOD_2_5F6B6215290C17D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C0064B3F317EAB1_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_B0E07BA4B1FBAA7F(::MoleMole::UI::FlowerShop::ESlotType a1, ::Class_2_AB9601BC4707463D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_AB9601BC4707463D*))((::PBYTE)hIl2Cpp + CLASS_2_4C0064B3F317EAB1_METHOD_2_B0E07BA4B1FBAA7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9F459089AD62C6AA(::MoleMole::UI::FlowerShop::ESlotType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C0064B3F317EAB1_METHOD_2_9F459089AD62C6AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F29D407ED9229B14(::MoleMole::UI::FlowerShop::EFinishJudge a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::EFinishJudge))((::PBYTE)hIl2Cpp + CLASS_2_4C0064B3F317EAB1_METHOD_2_F29D407ED9229B14_OFFSET))(this, a1);
	}

	::System::Void Method_2_44AC3F3C85C7CAA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C0064B3F317EAB1_METHOD_2_44AC3F3C85C7CAA3_OFFSET))(this);
	}
};
