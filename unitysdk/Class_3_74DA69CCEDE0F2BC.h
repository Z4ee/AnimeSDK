#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_2A5C64D57FF4F5FE.h"
#include "unitysdk/Struct_2_11FD83788053949F.h"
#include "unitysdk/Struct_2_1484FDDE4E3691EB_1.h"
#include "unitysdk/Struct_2_23357730042A2DE8.h"
#include "unitysdk/Struct_2_7D9908C3EA3882B7.h"

class Class_1_66C4D81440373C6E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_74DA69CCEDE0F2BC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16328AA0)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13C96DD0)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_6CAA7A4328C9EF2F_OFFSET UNITYSDK_OFFSET(0x13C95E80)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_896E8AC9A159E5D7_OFFSET UNITYSDK_OFFSET(0x13C96670)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_8E66B82298267DC3_OFFSET UNITYSDK_OFFSET(0x13C967C0)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x13C96930)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_9C6D834536617F48_OFFSET UNITYSDK_OFFSET(0x13C960A0)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13C965B0)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_BF508D80265F8A02_OFFSET UNITYSDK_OFFSET(0x13C96350)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13C96E70)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_D39DC7CE639D9F1F_OFFSET UNITYSDK_OFFSET(0x13C963C0)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x13C96020)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x13C96640)
#define CLASS_3_74DA69CCEDE0F2BC_METHOD_3_F69D8CFEEEA4AED8_OFFSET UNITYSDK_OFFSET(0x13C969A0)
#define CLASS_3_74DA69CCEDE0F2BC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x163289B0)
#define CLASS_3_74DA69CCEDE0F2BC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16328AF0)
#define CLASS_3_74DA69CCEDE0F2BC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C95E70)

inline static constexpr unsigned int Class_3_74DA69CCEDE0F2BC_TypeDefinitionIndex = 76411;

class Class_3_74DA69CCEDE0F2BC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::Int32 Field_3_9 = 0x98; // 0x0
	::System::Collections::Generic::List_1<::Struct_2_23357730042A2DE8>* Field_3_4; // 0x48
	::System::Collections::Generic::List_1<::Struct_2_1484FDDE4E3691EB_1>* Field_3_5; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_7; // 0x58
	::Class_1_66C4D81440373C6E* Field_3_1; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_3_6; // 0x68
	::Struct_2_7D9908C3EA3882B7 Field_3_2; // 0x70
	::System::Boolean Field_3_3; // 0x7C
	::Struct_2_11FD83788053949F Field_3_8; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_6CAA7A4328C9EF2F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_6CAA7A4328C9EF2F_OFFSET))(this, a1);
	}

	::System::Void Method_3_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_3_9C6D834536617F48(::System::Int32 a1, ::Enum_3_2A5C64D57FF4F5FE a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_2A5C64D57FF4F5FE, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_9C6D834536617F48_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::Enum_3_2A5C64D57FF4F5FE Method_3_BF508D80265F8A02()
	{
		return ((::Enum_3_2A5C64D57FF4F5FE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_BF508D80265F8A02_OFFSET))(this);
	}

	::System::Void Method_3_896E8AC9A159E5D7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_896E8AC9A159E5D7_OFFSET))(this, a1);
	}

	::System::Void Method_3_8E66B82298267DC3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_8E66B82298267DC3_OFFSET))(this, a1);
	}

	::System::Void Method_3_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_93190E731E31C79A_OFFSET))(this);
	}

	::System::Void Method_3_F69D8CFEEEA4AED8(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_F69D8CFEEEA4AED8_OFFSET))(this, a1);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_D39DC7CE639D9F1F(::Enum_3_2A5C64D57FF4F5FE a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2A5C64D57FF4F5FE))((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_D39DC7CE639D9F1F_OFFSET))(this, a1);
	}

	static ::Class_3_74DA69CCEDE0F2BC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_74DA69CCEDE0F2BC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_74DA69CCEDE0F2BC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
