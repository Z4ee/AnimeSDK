#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_BB6216C790BD451C_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x15585270)
#define CLASS_2_BB6216C790BD451C_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x155853D0)
#define CLASS_2_BB6216C790BD451C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155854C0)
#define CLASS_2_BB6216C790BD451C__CTOR_OFFSET UNITYSDK_OFFSET(0x155854B0)

inline static constexpr unsigned int Class_2_BB6216C790BD451C_TypeDefinitionIndex = 49394;

class Class_2_BB6216C790BD451C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB6216C790BD451C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB6216C790BD451C_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB6216C790BD451C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB6216C790BD451C_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
