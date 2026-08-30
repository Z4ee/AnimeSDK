#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_002DEDC9C18A055B;
class Class_1_02C9F7D26CD84B5F;
class Class_1_41DC55EACF71282F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6A7A7C8B0D1F0EF1_METHOD_1_60082323116883CC_OFFSET UNITYSDK_OFFSET(0x19ADA340)
#define CLASS_1_6A7A7C8B0D1F0EF1_METHOD_1_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0x19ADA2E0)
#define CLASS_1_6A7A7C8B0D1F0EF1__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADAA30)

inline static constexpr unsigned int Class_1_6A7A7C8B0D1F0EF1_TypeDefinitionIndex = 80617;

class Class_1_6A7A7C8B0D1F0EF1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A7A7C8B0D1F0EF1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A3CD8010EE7E2C0B(::Class_1_002DEDC9C18A055B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_002DEDC9C18A055B*))((::PBYTE)hIl2Cpp + CLASS_1_6A7A7C8B0D1F0EF1_METHOD_1_A3CD8010EE7E2C0B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>* Method_1_60082323116883CC(::Class_1_002DEDC9C18A055B* a1, ::Class_1_02C9F7D26CD84B5F* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_41DC55EACF71282F*>*(*)(::PVOID, ::Class_1_002DEDC9C18A055B*, ::Class_1_02C9F7D26CD84B5F*))((::PBYTE)hIl2Cpp + CLASS_1_6A7A7C8B0D1F0EF1_METHOD_1_60082323116883CC_OFFSET))(this, a1, a2);
	}
};
