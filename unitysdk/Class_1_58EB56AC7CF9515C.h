#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"
#include "unitysdk/System/Object.h"

class Class_2_5C38134D4169B6E0;
class Class_2_F68C1397F46993E4;
namespace System { class EventArgs; }
template <typename T1, typename T2> class Class_1_6BC0A76BA49068FE;

#define CLASS_1_58EB56AC7CF9515C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138F6EA0)
#define CLASS_1_58EB56AC7CF9515C_METHOD_1_19E90D38E6EEDFBF_OFFSET UNITYSDK_OFFSET(0x138F7BE0)
#define CLASS_1_58EB56AC7CF9515C_METHOD_1_5B81D4C788C5B0B8_OFFSET UNITYSDK_OFFSET(0x138F71F0)
#define CLASS_1_58EB56AC7CF9515C_METHOD_1_B26C2ED75A821434_OFFSET UNITYSDK_OFFSET(0x138F7DE0)
#define CLASS_1_58EB56AC7CF9515C_METHOD_1_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x138F74B0)
#define CLASS_1_58EB56AC7CF9515C__CTOR_OFFSET UNITYSDK_OFFSET(0x138F71E0)

inline static constexpr unsigned int Class_1_58EB56AC7CF9515C_TypeDefinitionIndex = 64503;

class Class_1_58EB56AC7CF9515C : public ::System::Object
{
public:
	::Class_2_5C38134D4169B6E0* Field_1_2; // 0x10
	::Class_1_6BC0A76BA49068FE<::System::Int32, ::Class_2_F68C1397F46993E4*>* Field_1_1; // 0x18
	::Struct_2_D7E802D2192B688B Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5B81D4C788C5B0B8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_METHOD_1_5B81D4C788C5B0B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_METHOD_1_CB8E229BDF290D41_OFFSET))(this);
	}

	::System::Void Method_1_19E90D38E6EEDFBF(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_METHOD_1_19E90D38E6EEDFBF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B26C2ED75A821434(::System::Int32 a1, ::Class_2_F68C1397F46993E4*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_2_F68C1397F46993E4*&))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_METHOD_1_B26C2ED75A821434_OFFSET))(this, a1, a2);
	}
};
