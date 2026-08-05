#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D7E802D2192B688B.h"
#include "unitysdk/System/Object.h"

class Class_2_5C38134D4169B6E0;
class Class_2_B9416AD3CF7CE7E5;
namespace System { class EventArgs; }
template <typename T1, typename T2> class Class_1_D60416EB550789D9;

#define CLASS_1_58EB56AC7CF9515C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1706EB90)
#define CLASS_1_58EB56AC7CF9515C_METHOD_1_5B81D4C788C5B0B8_OFFSET UNITYSDK_OFFSET(0x1706EF70)
#define CLASS_1_58EB56AC7CF9515C_METHOD_1_6D261DEB57F6F6D6_OFFSET UNITYSDK_OFFSET(0x1706F970)
#define CLASS_1_58EB56AC7CF9515C_METHOD_1_B26C2ED75A821434_OFFSET UNITYSDK_OFFSET(0x1706EEE0)
#define CLASS_1_58EB56AC7CF9515C_METHOD_1_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x1706F240)
#define CLASS_1_58EB56AC7CF9515C__CTOR_OFFSET UNITYSDK_OFFSET(0x1706EED0)

inline static constexpr unsigned int Class_1_58EB56AC7CF9515C_TypeDefinitionIndex = 57097;

class Class_1_58EB56AC7CF9515C : public ::System::Object
{
public:
	::Class_1_D60416EB550789D9<::System::Int32, ::Class_2_B9416AD3CF7CE7E5*>* Field_1_7; // 0x10
	::Class_2_5C38134D4169B6E0* Field_1_6; // 0x18
	::Struct_2_D7E802D2192B688B Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_B26C2ED75A821434(::System::Int32 a1, ::Class_2_B9416AD3CF7CE7E5*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_2_B9416AD3CF7CE7E5*&))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_METHOD_1_B26C2ED75A821434_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B81D4C788C5B0B8(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_METHOD_1_5B81D4C788C5B0B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_METHOD_1_CB8E229BDF290D41_OFFSET))(this);
	}

	::System::Void Method_1_6D261DEB57F6F6D6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_58EB56AC7CF9515C_METHOD_1_6D261DEB57F6F6D6_OFFSET))(this, a1);
	}
};
