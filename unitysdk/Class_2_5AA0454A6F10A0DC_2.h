#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_5AA0454A6F10A0DC_2_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xF1034C0)
#define CLASS_2_5AA0454A6F10A0DC_2_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xF103680)
#define CLASS_2_5AA0454A6F10A0DC_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF1037E0)
#define CLASS_2_5AA0454A6F10A0DC_2__CTOR_OFFSET UNITYSDK_OFFSET(0xF1037D0)

inline static constexpr unsigned int Class_2_5AA0454A6F10A0DC_2_TypeDefinitionIndex = 87278;

class Class_2_5AA0454A6F10A0DC_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AA0454A6F10A0DC_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5AA0454A6F10A0DC_2_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5AA0454A6F10A0DC_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AA0454A6F10A0DC_2_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
