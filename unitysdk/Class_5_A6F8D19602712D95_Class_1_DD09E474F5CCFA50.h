#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14519E60)
#define CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1451A140)
#define CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1451A1A0)
#define CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1451A150)
#define CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14519E50)
#define CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50__CTOR_OFFSET UNITYSDK_OFFSET(0x14519E40)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_DD09E474F5CCFA50_TypeDefinitionIndex = 42411;

class Class_5_A6F8D19602712D95_Class_1_DD09E474F5CCFA50 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_2; // 0x10
	::System::Object* Field_1_1; // 0x18
	::Class_5_A6F8D19602712D95* Field_1_5; // 0x20
	::System::Single Field_1_8; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_7; // 0x30
	::System::Single Field_1_3; // 0x34
	::System::Single Field_1_6; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_DD09E474F5CCFA50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
