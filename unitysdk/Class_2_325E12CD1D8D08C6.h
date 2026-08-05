#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_325E12CD1D8D08C6_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x1179D8A0)
#define CLASS_2_325E12CD1D8D08C6_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1179DA10)
#define CLASS_2_325E12CD1D8D08C6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1179DAC0)
#define CLASS_2_325E12CD1D8D08C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1179DAB0)

inline static constexpr unsigned int Class_2_325E12CD1D8D08C6_TypeDefinitionIndex = 71630;

class Class_2_325E12CD1D8D08C6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F*>* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_325E12CD1D8D08C6_Class_2_7AA7F2EE83FD2D2F*>* Field_2_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325E12CD1D8D08C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_325E12CD1D8D08C6_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_325E12CD1D8D08C6_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_325E12CD1D8D08C6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
