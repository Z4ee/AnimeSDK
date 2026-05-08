#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMonsterHudWidgetChildWindowController; }
namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C9D60C1B332EDA68_CLASS_1_9B1ECC8F2E5B63C1_METHOD_1_A3E1A72D7D619419_OFFSET UNITYSDK_OFFSET(0x1346BF90)
#define CLASS_1_C9D60C1B332EDA68_CLASS_1_9B1ECC8F2E5B63C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1346BF80)

inline static constexpr unsigned int Class_1_C9D60C1B332EDA68_Class_1_9B1ECC8F2E5B63C1_TypeDefinitionIndex = 63657;

class Class_1_C9D60C1B332EDA68_Class_1_9B1ECC8F2E5B63C1 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_CLASS_1_9B1ECC8F2E5B63C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A3E1A72D7D619419(::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_CLASS_1_9B1ECC8F2E5B63C1_METHOD_1_A3E1A72D7D619419_OFFSET))(this, a1);
	}
};
