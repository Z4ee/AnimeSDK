#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A335CFE48265E251;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE2C11D41E955545_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1574DD40)
#define CLASS_1_BE2C11D41E955545_METHOD_1_01AC33AF0330F7F0_OFFSET UNITYSDK_OFFSET(0x1574CF60)
#define CLASS_1_BE2C11D41E955545_METHOD_1_3DCAF09BEB5CADD1_OFFSET UNITYSDK_OFFSET(0x1574D550)
#define CLASS_1_BE2C11D41E955545_METHOD_1_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0x1574DA50)
#define CLASS_1_BE2C11D41E955545_METHOD_1_69C99C07E3B7351D_OFFSET UNITYSDK_OFFSET(0x1574DC90)
#define CLASS_1_BE2C11D41E955545_METHOD_1_777B0266200FB1A1_OFFSET UNITYSDK_OFFSET(0x1574D7B0)
#define CLASS_1_BE2C11D41E955545__CTOR_OFFSET UNITYSDK_OFFSET(0x1574CF50)

inline static constexpr unsigned int Class_1_BE2C11D41E955545_TypeDefinitionIndex = 73927;

class Class_1_BE2C11D41E955545 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_A335CFE48265E251*>* CNIHDDHLAAI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_01AC33AF0330F7F0(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_01AC33AF0330F7F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DCAF09BEB5CADD1(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_3DCAF09BEB5CADD1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_777B0266200FB1A1(::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_777B0266200FB1A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_44196695CAF284A8(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_44196695CAF284A8_OFFSET))(this, a1);
	}

	::Class_1_A335CFE48265E251* Method_1_69C99C07E3B7351D(::System::Type* a1)
	{
		return ((::Class_1_A335CFE48265E251*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_69C99C07E3B7351D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_DISPOSE_OFFSET))(this);
	}
};
