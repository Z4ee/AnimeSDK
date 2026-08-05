#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UINewbieGuideBridgeItemWidgetController; }
namespace System { class String; }

#define CLASS_1_31489150B8B5483E_METHOD_1_BAE9D8D67C46F015_OFFSET UNITYSDK_OFFSET(0x14E4CD20)
#define CLASS_1_31489150B8B5483E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14E4CC90)
#define CLASS_1_31489150B8B5483E_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x14E4CCD0)
#define CLASS_1_31489150B8B5483E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14E4CC50)
#define CLASS_1_31489150B8B5483E__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4CD10)

inline static constexpr unsigned int Class_1_31489150B8B5483E_TypeDefinitionIndex = 51492;

class Class_1_31489150B8B5483E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::MoleMole::UINewbieGuideBridgeItemWidgetController* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31489150B8B5483E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31489150B8B5483E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31489150B8B5483E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31489150B8B5483E_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_BAE9D8D67C46F015(::MoleMole::UINewbieGuideBridgeItemWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbieGuideBridgeItemWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_31489150B8B5483E_METHOD_1_BAE9D8D67C46F015_OFFSET))(this, a1);
	}
};
