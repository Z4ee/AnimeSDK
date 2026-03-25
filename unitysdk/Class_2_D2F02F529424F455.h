#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_170.h"

class Class_2_D2F02F529424F455_Class_1_92ED1115BA8A04F4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D2F02F529424F455_METHOD_2_45F554E506CE4638_OFFSET UNITYSDK_OFFSET(0xD1B0B90)
#define CLASS_2_D2F02F529424F455_METHOD_2_FD97730C562BB210_1_OFFSET UNITYSDK_OFFSET(0xD1B0DF0)
#define CLASS_2_D2F02F529424F455_METHOD_2_FD97730C562BB210_OFFSET UNITYSDK_OFFSET(0xD1B0D00)
#define CLASS_2_D2F02F529424F455__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B0EE0)

inline static constexpr unsigned int Class_2_D2F02F529424F455_TypeDefinitionIndex = 63244;

class Class_2_D2F02F529424F455 : public ::Class_1_43BD383C98B4C0C5_170
{
public:
	::System::Collections::Generic::List_1<::Class_2_D2F02F529424F455_Class_1_92ED1115BA8A04F4*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2F02F529424F455__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_45F554E506CE4638(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2F02F529424F455_METHOD_2_45F554E506CE4638_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_FD97730C562BB210(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2F02F529424F455_METHOD_2_FD97730C562BB210_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_FD97730C562BB210_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D2F02F529424F455_METHOD_2_FD97730C562BB210_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
