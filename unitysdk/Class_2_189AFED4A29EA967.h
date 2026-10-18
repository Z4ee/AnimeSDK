#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Enum_3_01618AD0437C8486.h"

class Class_1_1294FEF8E985635C;
class Class_1_7FF19F6206AF6DD7_42;
class Class_1_87EFB4AE600EE94A;
class Class_1_946C8BC94E6B6DA1_5;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_189AFED4A29EA967_METHOD_2_7B8085C4F712FEFB_OFFSET UNITYSDK_OFFSET(0xE827130)
#define CLASS_2_189AFED4A29EA967_METHOD_2_8CF65637A2492BE2_OFFSET UNITYSDK_OFFSET(0xE8270A0)
#define CLASS_2_189AFED4A29EA967_METHOD_2_960B7A129E4256AC_OFFSET UNITYSDK_OFFSET(0xE8276F0)
#define CLASS_2_189AFED4A29EA967_START_OFFSET UNITYSDK_OFFSET(0xE826FA0)
#define CLASS_2_189AFED4A29EA967_STOP_OFFSET UNITYSDK_OFFSET(0xE827040)
#define CLASS_2_189AFED4A29EA967__CTOR_OFFSET UNITYSDK_OFFSET(0xE826F50)

inline static constexpr unsigned int Class_2_189AFED4A29EA967_TypeDefinitionIndex = 82071;

class Class_2_189AFED4A29EA967 : public ::Class_1_5E4ED920015DC82D
{
public:
	::Class_1_1294FEF8E985635C* GJALMBBNNOF; // 0x20

	::System::Void _ctor(::Class_1_1294FEF8E985635C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1294FEF8E985635C*))((::PBYTE)hIl2Cpp + CLASS_2_189AFED4A29EA967__CTOR_OFFSET))(this, a1);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_189AFED4A29EA967_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_189AFED4A29EA967_STOP_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_7FF19F6206AF6DD7_42*>* Method_2_8CF65637A2492BE2()
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_7FF19F6206AF6DD7_42*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_189AFED4A29EA967_METHOD_2_8CF65637A2492BE2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_946C8BC94E6B6DA1_5*>* Method_2_7B8085C4F712FEFB(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::Enum_3_01618AD0437C8486>*>* a3)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_946C8BC94E6B6DA1_5*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::System::UInt32, ::Enum_3_01618AD0437C8486>*>*))((::PBYTE)hIl2Cpp + CLASS_2_189AFED4A29EA967_METHOD_2_7B8085C4F712FEFB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_960B7A129E4256AC(::System::UInt16 a1, ::Class_1_87EFB4AE600EE94A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::Class_1_87EFB4AE600EE94A*))((::PBYTE)hIl2Cpp + CLASS_2_189AFED4A29EA967_METHOD_2_960B7A129E4256AC_OFFSET))(this, a1, a2);
	}
};
