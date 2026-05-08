#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UILineupSelectPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E081FCEC8F87505A_METHOD_1_543F8938BA868A0C_OFFSET UNITYSDK_OFFSET(0x11EA2DF0)
#define CLASS_1_E081FCEC8F87505A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11EA2F70)
#define CLASS_1_E081FCEC8F87505A__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA2DA0)

inline static constexpr unsigned int Class_1_E081FCEC8F87505A_TypeDefinitionIndex = 63686;

class Class_1_E081FCEC8F87505A : public ::System::Object
{
public:
	::MoleMole::UILineupSelectPageController* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::SByte, ::Class_2_1824EF69C8E376A3*>* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::SByte, ::System::Int32>* Field_1_3; // 0x30
	::System::Int32 Field_1_1; // 0x38
	::System::Boolean Field_1_2; // 0x3C

	::System::Void _ctor(::MoleMole::UILineupSelectPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UILineupSelectPageController*))((::PBYTE)hIl2Cpp + CLASS_1_E081FCEC8F87505A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_543F8938BA868A0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E081FCEC8F87505A_METHOD_1_543F8938BA868A0C_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E081FCEC8F87505A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
