#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B61F7879B44C046D_Class_2_A8551DB78FCCDD55_1;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_B61F7879B44C046D_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x181409B0)
#define CLASS_2_B61F7879B44C046D_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x18140850)
#define CLASS_2_B61F7879B44C046D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18140A40)
#define CLASS_2_B61F7879B44C046D__CTOR_OFFSET UNITYSDK_OFFSET(0x18140A30)

inline static constexpr unsigned int Class_2_B61F7879B44C046D_TypeDefinitionIndex = 77677;

class Class_2_B61F7879B44C046D : public ::Class_1_EEA0111A28582B57
{
public:
	::UIControllerExtensionData* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_B61F7879B44C046D_Class_2_A8551DB78FCCDD55_1*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B61F7879B44C046D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B61F7879B44C046D_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B61F7879B44C046D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B61F7879B44C046D_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
