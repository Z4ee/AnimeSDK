#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_462D72BAF1343F40_Class_2_CC03AAEE6FCC732C;
class Class_2_462D72BAF1343F40_Class_2_ED75148EDFCDD026;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_462D72BAF1343F40_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0x1781FE90)
#define CLASS_2_462D72BAF1343F40_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x178200A0)
#define CLASS_2_462D72BAF1343F40_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17820170)
#define CLASS_2_462D72BAF1343F40__CTOR_OFFSET UNITYSDK_OFFSET(0x17820160)

inline static constexpr unsigned int Class_2_462D72BAF1343F40_TypeDefinitionIndex = 40218;

class Class_2_462D72BAF1343F40 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_462D72BAF1343F40_Class_2_CC03AAEE6FCC732C*>* Field_2_7; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_462D72BAF1343F40_Class_2_ED75148EDFCDD026*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462D72BAF1343F40__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_462D72BAF1343F40_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_462D72BAF1343F40_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462D72BAF1343F40_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
