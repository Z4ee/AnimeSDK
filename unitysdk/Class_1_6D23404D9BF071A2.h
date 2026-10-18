#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16C4955EF2FA3814;
class Class_1_E7C4615647E1695F;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointPhaseViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_6D23404D9BF071A2_METHOD_1_1EFE4E2D6F617091_OFFSET UNITYSDK_OFFSET(0xBD14C10)
#define CLASS_1_6D23404D9BF071A2__CTOR_OFFSET UNITYSDK_OFFSET(0xBD14C00)

inline static constexpr unsigned int Class_1_6D23404D9BF071A2_TypeDefinitionIndex = 79695;

class Class_1_6D23404D9BF071A2 : public ::System::Object
{
public:
	::Class_1_16C4955EF2FA3814* GKPHGLBPCKD; // 0x10

	::System::Void _ctor(::Class_1_16C4955EF2FA3814* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16C4955EF2FA3814*))((::PBYTE)hIl2Cpp + CLASS_1_6D23404D9BF071A2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1EFE4E2D6F617091(::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_E7C4615647E1695F*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*>*))((::PBYTE)hIl2Cpp + CLASS_1_6D23404D9BF071A2_METHOD_1_1EFE4E2D6F617091_OFFSET))(this, a1, a2);
	}
};
