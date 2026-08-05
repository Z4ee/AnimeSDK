#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8CB6DA40816C2075.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

class Class_0_16E4307DCC419505_135;
class Class_1_2545374876B596DC;
class Class_2_A4D62D05D5EA8464;
class Class_2_AB9601BC4707463D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C56CB8B84EE1D94E_METHOD_2_012D97BA54F6E248_OFFSET UNITYSDK_OFFSET(0x18706EA0)
#define CLASS_2_C56CB8B84EE1D94E_METHOD_2_35A1A641353400E6_OFFSET UNITYSDK_OFFSET(0x18706E00)
#define CLASS_2_C56CB8B84EE1D94E_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x18706AC0)
#define CLASS_2_C56CB8B84EE1D94E_METHOD_2_9F459089AD62C6AA_OFFSET UNITYSDK_OFFSET(0x18706CD0)
#define CLASS_2_C56CB8B84EE1D94E_METHOD_2_EFACC7BE4B466134_OFFSET UNITYSDK_OFFSET(0x18705C70)
#define CLASS_2_C56CB8B84EE1D94E_METHOD_2_F29D407ED9229B14_OFFSET UNITYSDK_OFFSET(0x18706C60)
#define CLASS_2_C56CB8B84EE1D94E__CTOR_OFFSET UNITYSDK_OFFSET(0x187058F0)

inline static constexpr unsigned int Class_2_C56CB8B84EE1D94E_TypeDefinitionIndex = 70232;

class Class_2_C56CB8B84EE1D94E : public ::Class_1_8CB6DA40816C2075
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::UI::FlowerShop::ESlotType, ::MoleMole::EntityHandle>* Field_2_0; // 0x50
	::MoleMole::EntityHandle Field_2_7; // 0x58
	::Class_1_2545374876B596DC* Field_2_6; // 0x68

	::System::Void _ctor(::Class_0_16E4307DCC419505_135* a1, ::Class_2_A4D62D05D5EA8464* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*, ::Class_2_A4D62D05D5EA8464*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_C56CB8B84EE1D94E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EFACC7BE4B466134(::MoleMole::UI::FlowerShop::ESlotType a1, ::Class_2_AB9601BC4707463D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_AB9601BC4707463D*))((::PBYTE)hIl2Cpp + CLASS_2_C56CB8B84EE1D94E_METHOD_2_EFACC7BE4B466134_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56CB8B84EE1D94E_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_F29D407ED9229B14(::MoleMole::UI::FlowerShop::EFinishJudge a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::EFinishJudge))((::PBYTE)hIl2Cpp + CLASS_2_C56CB8B84EE1D94E_METHOD_2_F29D407ED9229B14_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F459089AD62C6AA(::MoleMole::UI::FlowerShop::ESlotType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C56CB8B84EE1D94E_METHOD_2_9F459089AD62C6AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_35A1A641353400E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56CB8B84EE1D94E_METHOD_2_35A1A641353400E6_OFFSET))(this);
	}

	::System::Void Method_2_012D97BA54F6E248(::MoleMole::UI::FlowerShop::ESlotType a1, ::Class_2_AB9601BC4707463D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::Class_2_AB9601BC4707463D*))((::PBYTE)hIl2Cpp + CLASS_2_C56CB8B84EE1D94E_METHOD_2_012D97BA54F6E248_OFFSET))(this, a1, a2);
	}
};
