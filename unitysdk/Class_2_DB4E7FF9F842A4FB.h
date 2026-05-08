#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_DB4E7FF9F842A4FB_Class_2_6775686266A4D734_1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_DB4E7FF9F842A4FB_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0x179F6B50)
#define CLASS_2_DB4E7FF9F842A4FB_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x179F6CF0)
#define CLASS_2_DB4E7FF9F842A4FB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x179F6E00)
#define CLASS_2_DB4E7FF9F842A4FB__CTOR_OFFSET UNITYSDK_OFFSET(0x179F6DF0)

inline static constexpr unsigned int Class_2_DB4E7FF9F842A4FB_TypeDefinitionIndex = 77799;

class Class_2_DB4E7FF9F842A4FB : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_DB4E7FF9F842A4FB_Class_2_6775686266A4D734_1*>* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB4E7FF9F842A4FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DB4E7FF9F842A4FB_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DB4E7FF9F842A4FB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DB4E7FF9F842A4FB_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
