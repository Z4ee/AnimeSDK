#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B1B7187C58DA729;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define CLASS_1_C89FC83EC1DE25D0_METHOD_1_230485F5397889AC_OFFSET UNITYSDK_OFFSET(0x13A2D390)
#define CLASS_1_C89FC83EC1DE25D0_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x13A2D310)
#define CLASS_1_C89FC83EC1DE25D0_METHOD_1_8894E534FED3129C_OFFSET UNITYSDK_OFFSET(0x13A2D600)
#define CLASS_1_C89FC83EC1DE25D0_METHOD_1_D88DD735675A46B8_OFFSET UNITYSDK_OFFSET(0x13A2D2D0)
#define CLASS_1_C89FC83EC1DE25D0__CTOR_OFFSET UNITYSDK_OFFSET(0x13A2D650)

inline static constexpr unsigned int Class_1_C89FC83EC1DE25D0_TypeDefinitionIndex = 79507;

class Class_1_C89FC83EC1DE25D0 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::Class_1_0B1B7187C58DA729*>* ODJHAMAGJHO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C89FC83EC1DE25D0__CTOR_OFFSET))(this);
	}

	::R3::ReadOnlyReactiveProperty_1<::Class_1_0B1B7187C58DA729*>* Method_1_D88DD735675A46B8()
	{
		return ((::R3::ReadOnlyReactiveProperty_1<::Class_1_0B1B7187C58DA729*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C89FC83EC1DE25D0_METHOD_1_D88DD735675A46B8_OFFSET))(this);
	}

	::Class_1_0B1B7187C58DA729* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_0B1B7187C58DA729*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C89FC83EC1DE25D0_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Void Method_1_230485F5397889AC(::Class_1_0B1B7187C58DA729* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B1B7187C58DA729*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C89FC83EC1DE25D0_METHOD_1_230485F5397889AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8894E534FED3129C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C89FC83EC1DE25D0_METHOD_1_8894E534FED3129C_OFFSET))(this);
	}
};
