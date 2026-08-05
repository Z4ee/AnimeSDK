#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_94550A8F72A17CCE_METHOD_2_4C9CB642EC86F4C4_OFFSET UNITYSDK_OFFSET(0x1A563060)
#define CLASS_2_94550A8F72A17CCE_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x1A562F60)
#define CLASS_2_94550A8F72A17CCE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A5631C0)
#define CLASS_2_94550A8F72A17CCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5631B0)

inline static constexpr unsigned int Class_2_94550A8F72A17CCE_TypeDefinitionIndex = 63198;

class Class_2_94550A8F72A17CCE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94550A8F72A17CCE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94550A8F72A17CCE_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94550A8F72A17CCE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_4C9CB642EC86F4C4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_94550A8F72A17CCE_METHOD_2_4C9CB642EC86F4C4_OFFSET))(this, a1, a2);
	}
};
