#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UILineupSelectPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E081FCEC8F87505A_METHOD_1_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0x185FCB20)
#define CLASS_1_E081FCEC8F87505A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x185FCAE0)
#define CLASS_1_E081FCEC8F87505A__CTOR_OFFSET UNITYSDK_OFFSET(0x185FCA90)

inline static constexpr unsigned int Class_1_E081FCEC8F87505A_TypeDefinitionIndex = 50673;

class Class_1_E081FCEC8F87505A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::SByte, ::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::SByte, ::Class_2_1824EF69C8E376A3*>* Field_1_4; // 0x20
	::MoleMole::UILineupSelectPageController* Field_1_6; // 0x28
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Int32 Field_1_1; // 0x3C

	::System::Void _ctor(::MoleMole::UILineupSelectPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UILineupSelectPageController*))((::PBYTE)hIl2Cpp + CLASS_1_E081FCEC8F87505A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E081FCEC8F87505A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_00D9C214C63942A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E081FCEC8F87505A_METHOD_1_00D9C214C63942A7_OFFSET))(this);
	}
};
