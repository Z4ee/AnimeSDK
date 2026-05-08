#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_53.h"
#include "unitysdk/System/Object.h"

class Class_1_2A0117F72708B5DF;
class Class_1_555FB7E561FBF1C2;
class Class_1_9B9C6B876D15562A;
class Class_3_4666E61F66433B1E;
class Class_3_502426DEF99C8D14_1;
class Class_3_502426DEF99C8D14_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE6BF7909AD9D940_EQUALS_OFFSET UNITYSDK_OFFSET(0x179161E0)
#define CLASS_1_BE6BF7909AD9D940_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17916340)
#define CLASS_1_BE6BF7909AD9D940_METHOD_1_0F43B59E3B7133BF_OFFSET UNITYSDK_OFFSET(0x179163B0)
#define CLASS_1_BE6BF7909AD9D940_METHOD_1_8309535CC9426C2A_OFFSET UNITYSDK_OFFSET(0x179162C0)
#define CLASS_1_BE6BF7909AD9D940_METHOD_1_A9AFCE9AF0083933_OFFSET UNITYSDK_OFFSET(0x17916520)
#define CLASS_1_BE6BF7909AD9D940_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x179165D0)
#define CLASS_1_BE6BF7909AD9D940_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x17916510)
#define CLASS_1_BE6BF7909AD9D940_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x179163A0)
#define CLASS_1_BE6BF7909AD9D940__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17915E40)
#define CLASS_1_BE6BF7909AD9D940__CTOR_OFFSET UNITYSDK_OFFSET(0x17915DB0)

inline static constexpr unsigned int Class_1_BE6BF7909AD9D940_TypeDefinitionIndex = 48332;

class Class_1_BE6BF7909AD9D940 : public ::System::Object
{
public:
	::Class_3_502426DEF99C8D14_1* Field_1_14; // 0x10
	::Class_1_555FB7E561FBF1C2* Field_1_0; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_1_2A0117F72708B5DF*>* Field_1_15; // 0x28
	::System::String* Field_1_3; // 0x30
	::Class_1_9B9C6B876D15562A* Field_1_12; // 0x38
	::Class_3_502426DEF99C8D14_2* Field_1_13; // 0x40
	::Class_3_4666E61F66433B1E* Field_1_16; // 0x48
	::System::Int64 Field_1_2; // 0x50
	::System::Boolean Field_1_9; // 0x58
	::System::Boolean Field_1_5; // 0x59
	::System::Boolean Field_1_1; // 0x5A
	::System::Int32 Field_1_8; // 0x5C
	::System::Int32 Field_1_7; // 0x60
	::System::Boolean Field_1_10; // 0x64
	::System::Boolean Field_1_6; // 0x65
	::Enum_3_0A3761FE34514D6C_53 Field_1_11; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_3_4666E61F66433B1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4666E61F66433B1E*))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_0F43B59E3B7133BF(::Class_1_BE6BF7909AD9D940* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940_METHOD_1_0F43B59E3B7133BF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_A9AFCE9AF0083933(::Class_1_BE6BF7909AD9D940* a1, ::Class_1_BE6BF7909AD9D940* a2)
	{
		return ((::System::Boolean(*)(::Class_1_BE6BF7909AD9D940*, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940_METHOD_1_A9AFCE9AF0083933_OFFSET))(a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	static ::System::Boolean Method_1_8309535CC9426C2A(::Class_1_BE6BF7909AD9D940* a1, ::Class_1_BE6BF7909AD9D940* a2)
	{
		return ((::System::Boolean(*)(::Class_1_BE6BF7909AD9D940*, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + CLASS_1_BE6BF7909AD9D940_METHOD_1_8309535CC9426C2A_OFFSET))(a1, a2);
	}
};
