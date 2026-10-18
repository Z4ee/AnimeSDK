#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_409;
class Class_1_1294FEF8E985635C;
class Class_1_16C4955EF2FA3814;
class Class_1_19DB7D53A82B0771;
class Class_1_43BD383C98B4C0C5_232;
class Class_1_43BD383C98B4C0C5_233;
class Class_1_43BD383C98B4C0C5_234;
class Class_1_9CEBB4BF7E5A7B3F;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_67683F6A256780AF_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0xBA65510)
#define CLASS_1_67683F6A256780AF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA65920)
#define CLASS_1_67683F6A256780AF_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBA65EA0)
#define CLASS_1_67683F6A256780AF_METHOD_1_5436C3E034D14309_1_OFFSET UNITYSDK_OFFSET(0xBA65FE0)
#define CLASS_1_67683F6A256780AF_METHOD_1_5436C3E034D14309_2_OFFSET UNITYSDK_OFFSET(0xBA66090)
#define CLASS_1_67683F6A256780AF_METHOD_1_5436C3E034D14309_3_OFFSET UNITYSDK_OFFSET(0xBA66140)
#define CLASS_1_67683F6A256780AF_METHOD_1_5436C3E034D14309_OFFSET UNITYSDK_OFFSET(0xBA65F30)
#define CLASS_1_67683F6A256780AF_METHOD_1_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0xBA65980)
#define CLASS_1_67683F6A256780AF_METHOD_1_5E5742FE86D8AAE5_OFFSET UNITYSDK_OFFSET(0xBA65720)
#define CLASS_1_67683F6A256780AF_METHOD_1_8CD745C718BD874D_OFFSET UNITYSDK_OFFSET(0xBA655D0)
#define CLASS_1_67683F6A256780AF_METHOD_1_C189D2AC554215A8_OFFSET UNITYSDK_OFFSET(0xBA65C10)
#define CLASS_1_67683F6A256780AF_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0xBA65570)
#define CLASS_1_67683F6A256780AF__CTOR_OFFSET UNITYSDK_OFFSET(0xBA657B0)

inline static constexpr unsigned int Class_1_67683F6A256780AF_TypeDefinitionIndex = 79679;

class Class_1_67683F6A256780AF : public ::System::Object
{
public:
	::System::Action* OnMaybeChanged; // 0x10
	::Class_0_16E4307DCC419505_409* GJALMBBNNOF; // 0x18
	::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>* GPLCMNCOJPL; // 0x20
	::Class_1_9CEBB4BF7E5A7B3F* BDLGFMBOOGC; // 0x28
	::Class_1_16C4955EF2FA3814* GKPHGLBPCKD; // 0x30

	::System::Void _ctor(::Class_1_1294FEF8E985635C* a1, ::Class_1_9CEBB4BF7E5A7B3F* a2, ::Class_1_16C4955EF2FA3814* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1294FEF8E985635C*, ::Class_1_9CEBB4BF7E5A7B3F*, ::Class_1_16C4955EF2FA3814*))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void add_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnMaybeChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>* Method_1_8CD745C718BD874D()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_8CD745C718BD874D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Boolean Method_1_C189D2AC554215A8(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_C189D2AC554215A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_5E5742FE86D8AAE5()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_5E5742FE86D8AAE5_OFFSET))(this);
	}

	::System::Void Method_1_5436C3E034D14309(::System::Object* a1, ::Class_1_43BD383C98B4C0C5_232* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_43BD383C98B4C0C5_232*))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_5436C3E034D14309_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5436C3E034D14309_1(::System::Object* a1, ::Class_1_43BD383C98B4C0C5_233* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_43BD383C98B4C0C5_233*))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_5436C3E034D14309_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5436C3E034D14309_2(::System::Object* a1, ::Class_1_19DB7D53A82B0771* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_19DB7D53A82B0771*))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_5436C3E034D14309_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5436C3E034D14309_3(::System::Object* a1, ::Class_1_43BD383C98B4C0C5_234* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_43BD383C98B4C0C5_234*))((::PBYTE)hIl2Cpp + CLASS_1_67683F6A256780AF_METHOD_1_5436C3E034D14309_3_OFFSET))(this, a1, a2);
	}
};
