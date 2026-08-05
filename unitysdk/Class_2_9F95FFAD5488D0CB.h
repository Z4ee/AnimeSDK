#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"

class Class_0_16E4307DCC419505_207;
class Class_2_9F95FFAD5488D0CB_Class_2_8504E12A716501A1_29;
namespace MoleMole { class UIMultiInteractionTargetListChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }

#define CLASS_2_9F95FFAD5488D0CB_METHOD_2_57C6ADDE1BC3E5FE_OFFSET UNITYSDK_OFFSET(0x1584CA80)
#define CLASS_2_9F95FFAD5488D0CB_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1584C8D0)
#define CLASS_2_9F95FFAD5488D0CB_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x1584C8E0)
#define CLASS_2_9F95FFAD5488D0CB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1584CE40)
#define CLASS_2_9F95FFAD5488D0CB_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x1584C9A0)
#define CLASS_2_9F95FFAD5488D0CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1584CA70)

inline static constexpr unsigned int Class_2_9F95FFAD5488D0CB_TypeDefinitionIndex = 82044;

class Class_2_9F95FFAD5488D0CB : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_9F95FFAD5488D0CB_Class_2_8504E12A716501A1_29* Field_2_0; // 0x28
	::MoleMole::UIMultiInteractionTargetListChildWindowController* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F95FFAD5488D0CB__CTOR_OFFSET))(this);
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F95FFAD5488D0CB_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_9F95FFAD5488D0CB_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F95FFAD5488D0CB_METHOD_2_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::System::Void Method_2_57C6ADDE1BC3E5FE(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_9F95FFAD5488D0CB_METHOD_2_57C6ADDE1BC3E5FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F95FFAD5488D0CB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
