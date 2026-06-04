#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;

#define CLASS_1_689B812305532BD6_METHOD_1_D11B132EFAE1BA2E_OFFSET UNITYSDK_OFFSET(0x1AC36300)
#define CLASS_1_689B812305532BD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC36B90)
#define CLASS_1_689B812305532BD6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC362F0)

inline static constexpr unsigned int Class_1_689B812305532BD6_TypeDefinitionIndex = 40696;

class Class_1_689B812305532BD6 : public ::System::Object
{
public:
	static ::Class_1_689B812305532BD6** StaticGet_Field_1_0()
	{
		return (::Class_1_689B812305532BD6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_689B812305532BD6_TypeDefinitionIndex)->GetStaticField(0x50610);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_689B812305532BD6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_689B812305532BD6__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_D11B132EFAE1BA2E(::Class_1_60B5E5A0CB5606E4* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_689B812305532BD6_METHOD_1_D11B132EFAE1BA2E_OFFSET))(this, a1);
	}
};
