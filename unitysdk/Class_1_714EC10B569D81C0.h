#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlockFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;
class Class_1_C2DC5C7E8F1DFA59;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_714EC10B569D81C0_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x12E4AB00)
#define CLASS_1_714EC10B569D81C0_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x12E4CC50)
#define CLASS_1_714EC10B569D81C0_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x12E4AAE0)
#define CLASS_1_714EC10B569D81C0_METHOD_1_0E7F4677FAA263BB_OFFSET UNITYSDK_OFFSET(0x12E4AB60)
#define CLASS_1_714EC10B569D81C0_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x12E4AC40)
#define CLASS_1_714EC10B569D81C0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12E4ABC0)
#define CLASS_1_714EC10B569D81C0_METHOD_1_27C2887D49F6F6B3_OFFSET UNITYSDK_OFFSET(0x12E4AF20)
#define CLASS_1_714EC10B569D81C0_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x12E4CC40)
#define CLASS_1_714EC10B569D81C0_METHOD_1_620AA33E89FAD3FE_OFFSET UNITYSDK_OFFSET(0x12E4CAB0)
#define CLASS_1_714EC10B569D81C0_METHOD_1_868B2E9DE0F3D6BC_OFFSET UNITYSDK_OFFSET(0x12E4BFA0)
#define CLASS_1_714EC10B569D81C0_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x12E4AD70)
#define CLASS_1_714EC10B569D81C0_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12E4ACA0)
#define CLASS_1_714EC10B569D81C0_METHOD_1_B291EE15F692D478_OFFSET UNITYSDK_OFFSET(0x12E4CC90)
#define CLASS_1_714EC10B569D81C0_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x12E4B5B0)
#define CLASS_1_714EC10B569D81C0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12E4CC30)
#define CLASS_1_714EC10B569D81C0_METHOD_1_FBDF9C9525F6AD65_OFFSET UNITYSDK_OFFSET(0x12E4ACF0)
#define CLASS_1_714EC10B569D81C0_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x12E4AAF0)
#define CLASS_1_714EC10B569D81C0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12E4D1C0)
#define CLASS_1_714EC10B569D81C0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E4DCF0)

inline static constexpr unsigned int Class_1_714EC10B569D81C0_TypeDefinitionIndex = 39319;

class Class_1_714EC10B569D81C0 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_C2DC5C7E8F1DFA59*>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_91*>* Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::System::Int32 _SubPackId_k__BackingField; // 0x34
	::System::Int64 Field_1_6; // 0x38
	::RPG::Client::BlockFlag Field_1_7; // 0x40
	::System::Boolean Field_1_8; // 0x42
	::System::UInt32 Field_1_9; // 0x44
	::RPG::Client::ByteHash16 Field_1_10; // 0x48
	::System::Int64 Field_1_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_SET_SUBPACKID_OFFSET))(this, a1);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Void Method_1_0E7F4677FAA263BB(::RPG::Client::ByteHash16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_0E7F4677FAA263BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_91* Method_1_FBDF9C9525F6AD65(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_91*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_FBDF9C9525F6AD65_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_27C2887D49F6F6B3(::Class_0_16E4307DCC419505_91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_91*))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_27C2887D49F6F6B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_C2DC5C7E8F1DFA59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2DC5C7E8F1DFA59*))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_868B2E9DE0F3D6BC(::System::IO::StreamWriter* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_868B2E9DE0F3D6BC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_C2DC5C7E8F1DFA59*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C2DC5C7E8F1DFA59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_GETFILESIZE_OFFSET))(this);
	}

	::System::Int32 Method_1_B291EE15F692D478(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C2DC5C7E8F1DFA59*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C2DC5C7E8F1DFA59*>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C2DC5C7E8F1DFA59*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C2DC5C7E8F1DFA59*>*))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_B291EE15F692D478_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_620AA33E89FAD3FE(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_714EC10B569D81C0_METHOD_1_620AA33E89FAD3FE_OFFSET))(this, a1, a2, a3, a4);
	}
};
