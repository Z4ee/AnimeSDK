#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieFairy.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieInputLogicType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }

#define CLASS_1_346D7AF1D5276E18_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x154A4A60)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_D173D5052EDE8B54_OFFSET UNITYSDK_OFFSET(0x154A4C40)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_D2FE384848989954_OFFSET UNITYSDK_OFFSET(0x154A4CA0)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x154A3DB0)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x154A4D20)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_F78C032061CEA1F7_OFFSET UNITYSDK_OFFSET(0x154A4D30)
#define CLASS_1_346D7AF1D5276E18_METHOD_1_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x154A4B00)
#define CLASS_1_346D7AF1D5276E18__CTOR_OFFSET UNITYSDK_OFFSET(0x154A3DA0)

inline static constexpr unsigned int Class_1_346D7AF1D5276E18_TypeDefinitionIndex = 73824;

class Class_1_346D7AF1D5276E18 : public ::System::Object
{
public:
	::MoleMole::UIGeneralNewsBubbleWidgetController* Field_1_0; // 0x10
	::MoleMole::ConfigNewbie_NewbieFairy Field_1_1; // 0x18
	::System::Int32 Field_1_4; // 0x30
	::System::Boolean Field_1_3; // 0x34
	::MoleMole::ConfigNewbie_NewbieInputLogicType Field_1_2; // 0x38

	::System::Void _ctor(::MoleMole::UIGeneralNewsBubbleWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_1_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Boolean Method_1_D173D5052EDE8B54(::MoleMole::UIGeneralNewsBubbleRowWidgetController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_D173D5052EDE8B54_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2FE384848989954(::MoleMole::ConfigNewbie_NewbieFairy a1, ::System::Boolean a2, ::MoleMole::ConfigNewbie_NewbieInputLogicType a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigNewbie_NewbieFairy, ::System::Boolean, ::MoleMole::ConfigNewbie_NewbieInputLogicType))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_D2FE384848989954_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F78C032061CEA1F7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_F78C032061CEA1F7_OFFSET))(this);
	}

	::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_346D7AF1D5276E18_METHOD_1_1A425C083DDF2BB1_OFFSET))(this, a1);
	}
};
