#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlockFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_91;
class Class_1_C2DC5C7E8F1DFA59;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_E1BAB16E47F2B8E6_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1408ED00)
#define CLASS_1_E1BAB16E47F2B8E6_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x14090DF0)
#define CLASS_1_E1BAB16E47F2B8E6_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1408ECE0)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_0E7F4677FAA263BB_OFFSET UNITYSDK_OFFSET(0x1408ED60)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1408EE40)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1408EDC0)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_27C2887D49F6F6B3_OFFSET UNITYSDK_OFFSET(0x1408F120)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x14090DE0)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_620AA33E89FAD3FE_OFFSET UNITYSDK_OFFSET(0x14090C50)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_868B2E9DE0F3D6BC_OFFSET UNITYSDK_OFFSET(0x14090140)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x1408EF70)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1408EEA0)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_B291EE15F692D478_OFFSET UNITYSDK_OFFSET(0x14090E30)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14090DD0)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x1408F7B0)
#define CLASS_1_E1BAB16E47F2B8E6_METHOD_1_FBDF9C9525F6AD65_OFFSET UNITYSDK_OFFSET(0x1408EEF0)
#define CLASS_1_E1BAB16E47F2B8E6_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1408ECF0)
#define CLASS_1_E1BAB16E47F2B8E6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14091360)
#define CLASS_1_E1BAB16E47F2B8E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1408EC30)

inline static constexpr unsigned int Class_1_E1BAB16E47F2B8E6_TypeDefinitionIndex = 40192;

class Class_1_E1BAB16E47F2B8E6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C2DC5C7E8F1DFA59*>* OCAMOHAHPKD; // 0x10
	::System::String* BJGGJIAADCE; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_91*>* OJNILOIOECI; // 0x20
	::System::String* ACGAHHLNDLP; // 0x28
	::System::Int64 EEBBDOKAKOM; // 0x30
	::System::Boolean KKKIONIDKFA; // 0x38
	::RPG::Client::BlockFlag LBBMHPMFHBK; // 0x3A
	::RPG::Client::DesignDataShortNameHash FDAPIHJNIEL; // 0x40
	::System::Int64 IEEKAABDCED; // 0x48
	::System::Int32 _SubPackId_k__BackingField; // 0x50
	::System::UInt32 HICNADDJCGL; // 0x54
	::System::Int32 EJHEFKLCEBO; // 0x58
	::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6__CTOR_OFFSET))(this);
	}

	::System::Int32 get_SubPackId()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_GET_SUBPACKID_OFFSET))(this);
	}

	::System::Void set_SubPackId(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_SET_SUBPACKID_OFFSET))(this, a1);
	}

	::RPG::Client::ByteHash16 GetContentHash()
	{
		return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_GETCONTENTHASH_OFFSET))(this);
	}

	::System::Void Method_1_0E7F4677FAA263BB(::RPG::Client::ByteHash16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_0E7F4677FAA263BB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_91* Method_1_FBDF9C9525F6AD65(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_91*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_FBDF9C9525F6AD65_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_27C2887D49F6F6B3(::Class_0_16E4307DCC419505_91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_91*))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_27C2887D49F6F6B3_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77(::Class_1_C2DC5C7E8F1DFA59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2DC5C7E8F1DFA59*))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_F8D1399F1CCCBB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_868B2E9DE0F3D6BC(::System::IO::StreamWriter* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_868B2E9DE0F3D6BC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_C2DC5C7E8F1DFA59*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C2DC5C7E8F1DFA59*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Int64 GetFileSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_GETFILESIZE_OFFSET))(this);
	}

	::System::Int32 Method_1_B291EE15F692D478(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C2DC5C7E8F1DFA59*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C2DC5C7E8F1DFA59*>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C2DC5C7E8F1DFA59*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C2DC5C7E8F1DFA59*>*))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_B291EE15F692D478_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_620AA33E89FAD3FE(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E1BAB16E47F2B8E6_METHOD_1_620AA33E89FAD3FE_OFFSET))(this, a1, a2, a3, a4);
	}
};
