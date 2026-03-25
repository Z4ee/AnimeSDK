#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_908;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1D51FC7AFB8960A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104D19D0)
#define CLASS_1_1D51FC7AFB8960A3_METHOD_1_0E17CFF414BD4A5D_OFFSET UNITYSDK_OFFSET(0x104D15E0)
#define CLASS_1_1D51FC7AFB8960A3_METHOD_1_4812AEE6ECF32DD9_OFFSET UNITYSDK_OFFSET(0x104D1780)
#define CLASS_1_1D51FC7AFB8960A3_METHOD_1_A4A8A95D4C2E41FB_OFFSET UNITYSDK_OFFSET(0x104D1510)
#define CLASS_1_1D51FC7AFB8960A3_METHOD_1_D340BE0DE40B7E40_OFFSET UNITYSDK_OFFSET(0x104D1440)
#define CLASS_1_1D51FC7AFB8960A3__CTOR_OFFSET UNITYSDK_OFFSET(0x104D1A70)

inline static constexpr unsigned int Class_1_1D51FC7AFB8960A3_TypeDefinitionIndex = 60194;

class Class_1_1D51FC7AFB8960A3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action_1<::Class_0_16E4307DCC419505_908*>*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D51FC7AFB8960A3__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_D340BE0DE40B7E40(::System::Action_1<::Class_0_16E4307DCC419505_908*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_908*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D51FC7AFB8960A3_METHOD_1_D340BE0DE40B7E40_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A4A8A95D4C2E41FB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D51FC7AFB8960A3_METHOD_1_A4A8A95D4C2E41FB_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0E17CFF414BD4A5D(::System::Action_1<::Class_0_16E4307DCC419505_908*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_908*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D51FC7AFB8960A3_METHOD_1_0E17CFF414BD4A5D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4812AEE6ECF32DD9(::Class_0_16E4307DCC419505_908* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_908*))((::PBYTE)hIl2Cpp + CLASS_1_1D51FC7AFB8960A3_METHOD_1_4812AEE6ECF32DD9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D51FC7AFB8960A3_DISPOSE_OFFSET))(this);
	}
};
