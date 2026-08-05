#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_C3A540A242C97856_METHOD_2_2A2EF76C634BC935_OFFSET UNITYSDK_OFFSET(0x145C8010)
#define CLASS_2_C3A540A242C97856_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x145C8170)
#define CLASS_2_C3A540A242C97856_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x145C7F30)
#define CLASS_2_C3A540A242C97856__CTOR_OFFSET UNITYSDK_OFFSET(0x145C8160)

inline static constexpr unsigned int Class_2_C3A540A242C97856_TypeDefinitionIndex = 47939;

class Class_2_C3A540A242C97856 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_7; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3A540A242C97856__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3A540A242C97856_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_2A2EF76C634BC935(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3A540A242C97856_METHOD_2_2A2EF76C634BC935_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3A540A242C97856_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
