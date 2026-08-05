#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_145D6BB04DC5351F_Class_2_EF16346D79C18F15_10;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_145D6BB04DC5351F_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x157F6150)
#define CLASS_2_145D6BB04DC5351F_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x157F5FF0)
#define CLASS_2_145D6BB04DC5351F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x157F61E0)
#define CLASS_2_145D6BB04DC5351F__CTOR_OFFSET UNITYSDK_OFFSET(0x157F61D0)

inline static constexpr unsigned int Class_2_145D6BB04DC5351F_TypeDefinitionIndex = 69233;

class Class_2_145D6BB04DC5351F : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_7; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_145D6BB04DC5351F_Class_2_EF16346D79C18F15_10*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_145D6BB04DC5351F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_145D6BB04DC5351F_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_145D6BB04DC5351F_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_145D6BB04DC5351F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
