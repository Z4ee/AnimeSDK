#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_815;
class Class_0_16E4307DCC419505_834;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E127FD41712458EE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x11F15DB0)
#define CLASS_1_E127FD41712458EE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11F16400)
#define CLASS_1_E127FD41712458EE_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11F16160)
#define CLASS_1_E127FD41712458EE_METHOD_1_7298AC7B777E7D02_OFFSET UNITYSDK_OFFSET(0x11F165B0)
#define CLASS_1_E127FD41712458EE_METHOD_1_79A0DD953C362A58_OFFSET UNITYSDK_OFFSET(0x11F16210)
#define CLASS_1_E127FD41712458EE_METHOD_1_A36DD6986EFA06F9_OFFSET UNITYSDK_OFFSET(0x11F15F90)
#define CLASS_1_E127FD41712458EE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F16910)

inline static constexpr unsigned int Class_1_E127FD41712458EE_TypeDefinitionIndex = 67570;

class Class_1_E127FD41712458EE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_834*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E127FD41712458EE__CTOR_OFFSET))(this);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_E127FD41712458EE_GETCONTEXT_OFFSET))(this, a1);
	}

	::System::Void Method_1_A36DD6986EFA06F9(::Class_0_16E4307DCC419505_834* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_834*))((::PBYTE)hIl2Cpp + CLASS_1_E127FD41712458EE_METHOD_1_A36DD6986EFA06F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E127FD41712458EE_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_79A0DD953C362A58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E127FD41712458EE_METHOD_1_79A0DD953C362A58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E127FD41712458EE_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Object* Method_1_7298AC7B777E7D02(::System::String* a1, ::System::String* a2, ::Class_0_16E4307DCC419505_815* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::Class_0_16E4307DCC419505_815*))((::PBYTE)hIl2Cpp + CLASS_1_E127FD41712458EE_METHOD_1_7298AC7B777E7D02_OFFSET))(this, a1, a2, a3);
	}
};
