#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlockFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_73;
class Class_1_CE2AC6C9C34CBBD2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_4BC7F3E0EBEF5C7F_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x164B1D20)
#define CLASS_1_4BC7F3E0EBEF5C7F_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x164B4330)
#define CLASS_1_4BC7F3E0EBEF5C7F_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x164B1D00)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_0898E1EA323553C5_OFFSET UNITYSDK_OFFSET(0x164B28B0)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_0E7F4677FAA263BB_OFFSET UNITYSDK_OFFSET(0x164B1F40)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_1737177632F9B062_OFFSET UNITYSDK_OFFSET(0x164B44B0)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x164B2330)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x164B2110)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x164B4320)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_587E8340E24EDF05_OFFSET UNITYSDK_OFFSET(0x164B3960)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_7B13B6DC23C63F9C_OFFSET UNITYSDK_OFFSET(0x164B2520)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_7ED10847788F63EA_OFFSET UNITYSDK_OFFSET(0x164B3FA0)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x164B2390)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_CCB4431A86AEC681_OFFSET UNITYSDK_OFFSET(0x164B2E40)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x164B2720)
#define CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x164B4310)
#define CLASS_1_4BC7F3E0EBEF5C7F_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x164B1D10)
#define CLASS_1_4BC7F3E0EBEF5C7F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164B4960)
#define CLASS_1_4BC7F3E0EBEF5C7F__CTOR_OFFSET UNITYSDK_OFFSET(0x164AF0A0)
#define CLASS_1_4BC7F3E0EBEF5C7F___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164B5750)

inline static constexpr unsigned int Class_1_4BC7F3E0EBEF5C7F_TypeDefinitionIndex = 32057;

class Class_1_4BC7F3E0EBEF5C7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_73*>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Class_1_CE2AC6C9C34CBBD2*>* Field_1_10; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Int64 Field_1_6; // 0x28
	::System::Int64 Field_1_7; // 0x30
	::System::UInt32 Field_1_1; // 0x38
	::System::Int32 _SubPackId_k__BackingField; // 0x3C
	::RPG::Client::ByteHash16 Field_1_2; // 0x40
	::RPG::Client::BlockFlag Field_1_4; // 0x50
	::System::Boolean Field_1_9; // 0x52
	::System::Int32 Field_1_8; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_SET_SUBPACKID_OFFSET))(this, value);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Void Method_1_0E7F4677FAA263BB(::RPG::Client::ByteHash16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_0E7F4677FAA263BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_73* Method_1_7B13B6DC23C63F9C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_73*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_7B13B6DC23C63F9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_0898E1EA323553C5(::Class_0_16E4307DCC419505_73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_73*))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_0898E1EA323553C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCB4431A86AEC681(::Class_1_CE2AC6C9C34CBBD2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE2AC6C9C34CBBD2*))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_CCB4431A86AEC681_OFFSET))(this, a1);
	}

	::System::Void Method_1_587E8340E24EDF05(::System::IO::StreamWriter* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_587E8340E24EDF05_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_CE2AC6C9C34CBBD2*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_CE2AC6C9C34CBBD2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_GETFILESIZE_OFFSET))(this);
	}

	::System::Int32 Method_1_1737177632F9B062(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CE2AC6C9C34CBBD2*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CE2AC6C9C34CBBD2*>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CE2AC6C9C34CBBD2*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_CE2AC6C9C34CBBD2*>*))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_1737177632F9B062_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_7ED10847788F63EA(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F_METHOD_1_7ED10847788F63EA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BC7F3E0EBEF5C7F___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
