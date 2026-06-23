#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BD3EF046502B972.h"
#include "unitysdk/MoleMole/CustomDamperUtility_DampingType.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_8DAE432B7A7755CD_METHOD_2_0CB6682FCE4DE912_OFFSET UNITYSDK_OFFSET(0x18068FB0)
#define CLASS_2_8DAE432B7A7755CD__CTOR_OFFSET UNITYSDK_OFFSET(0x18068F50)

inline static constexpr unsigned int Class_2_8DAE432B7A7755CD_TypeDefinitionIndex = 44337;

class Class_2_8DAE432B7A7755CD : public ::Class_1_5BD3EF046502B972
{
public:
	::System::Func_1<::UnityEngine::Vector3>* Field_2_3; // 0x20
	::UnityEngine::Vector3 Field_2_4; // 0x28
	::MoleMole::CustomDamperUtility_DampingType Field_2_0; // 0x34
	::System::Single Field_2_2; // 0x38
	::UnityEngine::Vector3 Field_2_5; // 0x3C
	::System::Single Field_2_1; // 0x48

	::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::MoleMole::UICameraAtom a3, ::MoleMole::CustomDamperUtility_DampingType a4, ::System::Func_1<::UnityEngine::Vector3>* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::MoleMole::UICameraAtom, ::MoleMole::CustomDamperUtility_DampingType, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DAE432B7A7755CD__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::MoleMole::UICameraAtom Method_2_0CB6682FCE4DE912(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_8DAE432B7A7755CD_METHOD_2_0CB6682FCE4DE912_OFFSET))(this, a1, a2, a3);
	}
};
