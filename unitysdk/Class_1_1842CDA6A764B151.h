#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_63B064443652052A.h"
#include "unitysdk/System/Object.h"

class Class_1_849EE5CF9026AE9F;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_1842CDA6A764B151_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x1935E1C0)
#define CLASS_1_1842CDA6A764B151_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1935E1E0)
#define CLASS_1_1842CDA6A764B151_METHOD_1_39DDF093276259E0_OFFSET UNITYSDK_OFFSET(0x1935E320)
#define CLASS_1_1842CDA6A764B151_METHOD_1_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1935E8A0)
#define CLASS_1_1842CDA6A764B151_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1935E230)
#define CLASS_1_1842CDA6A764B151_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1935EAA0)
#define CLASS_1_1842CDA6A764B151_METHOD_1_F487A0E01DDB86EF_OFFSET UNITYSDK_OFFSET(0x1935E5C0)
#define CLASS_1_1842CDA6A764B151_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x1935E1D0)
#define CLASS_1_1842CDA6A764B151__CTOR_OFFSET UNITYSDK_OFFSET(0x1935E280)

inline static constexpr unsigned int Class_1_1842CDA6A764B151_TypeDefinitionIndex = 65858;

class Class_1_1842CDA6A764B151 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_849EE5CF9026AE9F*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::Struct_2_63B064443652052A Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean _IsEnded_k__BackingField; // 0x39

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Class_1_849EE5CF9026AE9F*>* a1, ::Struct_2_63B064443652052A a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_849EE5CF9026AE9F*>*, ::Struct_2_63B064443652052A, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_IsEnded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151_GET_ISENDED_OFFSET))(this);
	}

	::System::Void set_IsEnded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151_SET_ISENDED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::Class_1_849EE5CF9026AE9F* Method_1_F487A0E01DDB86EF(::System::Single a1)
	{
		return ((::Class_1_849EE5CF9026AE9F*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151_METHOD_1_F487A0E01DDB86EF_OFFSET))(this, a1);
	}

	::System::Void Method_1_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151_METHOD_1_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_39DDF093276259E0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1842CDA6A764B151_METHOD_1_39DDF093276259E0_OFFSET))(this);
	}
};
