#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Enum_3_BD3C09A68C53DE66.h"

class Class_0_16E4307DCC419505_199;
class Class_2_04999CCE6E77B4A2_6_Class_2_D3207C9B786FBEC5;
namespace MoleMole { class UIWindowController; }

#define CLASS_2_04999CCE6E77B4A2_6_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18EAADF0)
#define CLASS_2_04999CCE6E77B4A2_6_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x18EAAE00)
#define CLASS_2_04999CCE6E77B4A2_6__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAAEC0)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_6_TypeDefinitionIndex = 71979;

class Class_2_04999CCE6E77B4A2_6 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	::Class_2_04999CCE6E77B4A2_6_Class_2_D3207C9B786FBEC5* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_6__CTOR_OFFSET))(this);
	}

	::Enum_3_BD3C09A68C53DE66 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_BD3C09A68C53DE66(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_6_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_199* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_199*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_6_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}
};
