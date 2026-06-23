#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_GraphSaveDataBase.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_167BB37617B940E3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_034E96628B18700D_FINISH_OFFSET UNITYSDK_OFFSET(0xD46AA50)
#define CLASS_2_034E96628B18700D_METHOD_2_082B4FE067083CB0_OFFSET UNITYSDK_OFFSET(0xD46B0A0)
#define CLASS_2_034E96628B18700D_METHOD_2_777BF1CBBAB18C3E_OFFSET UNITYSDK_OFFSET(0xD46ADF0)
#define CLASS_2_034E96628B18700D_METHOD_2_9999F3E4D60BFCCC_OFFSET UNITYSDK_OFFSET(0xD46AC20)
#define CLASS_2_034E96628B18700D_METHOD_2_BFC40B221EFB2027_OFFSET UNITYSDK_OFFSET(0xD46B000)
#define CLASS_2_034E96628B18700D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD46AF70)
#define CLASS_2_034E96628B18700D_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xD46AAA0)
#define CLASS_2_034E96628B18700D__CTOR_OFFSET UNITYSDK_OFFSET(0xD46A970)

inline static constexpr unsigned int Class_2_034E96628B18700D_TypeDefinitionIndex = 58691;

class Class_2_034E96628B18700D : public ::MoleMole::VOPerformSubSystem_GraphSaveDataBase
{
public:
	::System::String* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_2_6; // 0x28
	::System::String* Field_2_8; // 0x30
	::System::String* Field_2_9; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_2_10; // 0x40
	::System::String* Field_2_7; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x50
	::Class_2_167BB37617B940E3* Field_2_0; // 0x58
	::MoleMole::BubbleType Field_2_4; // 0x60
	::System::Boolean Field_2_3; // 0x64
	::MoleMole::FairyTextUpdateType Field_2_5; // 0x68

	::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_034E96628B18700D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Finish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_034E96628B18700D_FINISH_OFFSET))(this);
	}

	::System::Void Method_2_9999F3E4D60BFCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_034E96628B18700D_METHOD_2_9999F3E4D60BFCCC_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_034E96628B18700D_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Int32 Method_2_777BF1CBBAB18C3E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_034E96628B18700D_METHOD_2_777BF1CBBAB18C3E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_034E96628B18700D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_2_BFC40B221EFB2027(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_034E96628B18700D_METHOD_2_BFC40B221EFB2027_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType> Method_2_082B4FE067083CB0()
	{
		return ((::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_034E96628B18700D_METHOD_2_082B4FE067083CB0_OFFSET))(this);
	}
};
