#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_228F42E3541B3CD8_Class_2_657518773CBED714;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_228F42E3541B3CD8_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x10FC6D70)
#define CLASS_2_228F42E3541B3CD8_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x10FC6BE0)
#define CLASS_2_228F42E3541B3CD8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10FC6FB0)
#define CLASS_2_228F42E3541B3CD8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10FC6F60)
#define CLASS_2_228F42E3541B3CD8__CTOR_OFFSET UNITYSDK_OFFSET(0x10FC6FA0)

inline static constexpr unsigned int Class_2_228F42E3541B3CD8_TypeDefinitionIndex = 64776;

class Class_2_228F42E3541B3CD8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_228F42E3541B3CD8_Class_2_657518773CBED714*>*>* Field_2_0; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_228F42E3541B3CD8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_228F42E3541B3CD8_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_228F42E3541B3CD8_Class_2_657518773CBED714*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_228F42E3541B3CD8_Class_2_657518773CBED714*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_228F42E3541B3CD8_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_228F42E3541B3CD8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_228F42E3541B3CD8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
