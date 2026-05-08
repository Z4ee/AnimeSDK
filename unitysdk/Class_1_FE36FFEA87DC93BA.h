#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_215;
class Class_0_16E4307DCC419505_645;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_0B2ACA533259B73D_OFFSET UNITYSDK_OFFSET(0xF5E7650)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_1E725F834BE760E8_OFFSET UNITYSDK_OFFSET(0xF5E7890)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0xF5E7600)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0xF5E7940)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_57598E1E990D49D0_OFFSET UNITYSDK_OFFSET(0xF5E7B30)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0xF5E7DD0)
#define CLASS_1_FE36FFEA87DC93BA_METHOD_1_BD90D844FA4A80AA_OFFSET UNITYSDK_OFFSET(0xF5E7C30)
#define CLASS_1_FE36FFEA87DC93BA__CTOR_OFFSET UNITYSDK_OFFSET(0xF5E7A40)

inline static constexpr unsigned int Class_1_FE36FFEA87DC93BA_TypeDefinitionIndex = 64558;

class Class_1_FE36FFEA87DC93BA : public ::System::Object
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_215*>* Field_1_3; // 0x10
	::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_645*>* Field_1_0; // 0x18
	::Class_0_16E4307DCC419505_645* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_645*, ::System::Action_1<::Class_0_16E4307DCC419505_215*>*>* Field_1_4; // 0x28
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_1_1E725F834BE760E8(::System::Action_1<::Class_0_16E4307DCC419505_215*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_215*>*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_1E725F834BE760E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::System::Boolean Method_1_57598E1E990D49D0(::Class_0_16E4307DCC419505_645* a1, ::System::Action_1<::Class_0_16E4307DCC419505_215*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_645*, ::System::Action_1<::Class_0_16E4307DCC419505_215*>*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_57598E1E990D49D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BD90D844FA4A80AA(::Class_0_16E4307DCC419505_215* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_215*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_BD90D844FA4A80AA_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B2ACA533259B73D(::Class_0_16E4307DCC419505_215* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_215*))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_0B2ACA533259B73D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_645* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_645*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE36FFEA87DC93BA_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}
};
