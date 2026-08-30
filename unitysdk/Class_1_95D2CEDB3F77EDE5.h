#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define CLASS_1_95D2CEDB3F77EDE5_METHOD_1_9D9DC0B956875839_OFFSET UNITYSDK_OFFSET(0x1C7011C0)
#define CLASS_1_95D2CEDB3F77EDE5_METHOD_1_DEC52E86EF8602CE_OFFSET UNITYSDK_OFFSET(0x1C703210)
#define CLASS_1_95D2CEDB3F77EDE5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C707060)
#define CLASS_1_95D2CEDB3F77EDE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C706C80)

inline static constexpr unsigned int Class_1_95D2CEDB3F77EDE5_TypeDefinitionIndex = 42219;

class Class_1_95D2CEDB3F77EDE5 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_JNAMGBBBNII()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_95D2CEDB3F77EDE5_TypeDefinitionIndex)->GetStaticField(0x1230);
	}
	// static const ::System::Int32 LIKDOPMKGCO = 0x1000; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95D2CEDB3F77EDE5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_95D2CEDB3F77EDE5__CCTOR_OFFSET))();
	}

	::System::Int32 Method_1_9D9DC0B956875839(::System::IO::Stream* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_95D2CEDB3F77EDE5_METHOD_1_9D9DC0B956875839_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DEC52E86EF8602CE(::System::IO::Stream* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_95D2CEDB3F77EDE5_METHOD_1_DEC52E86EF8602CE_OFFSET))(this, a1, a2);
	}
};
