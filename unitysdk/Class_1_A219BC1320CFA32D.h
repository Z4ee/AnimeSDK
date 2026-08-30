#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
class Class_1_F3CAAE7E7C7111CC;

#define CLASS_1_A219BC1320CFA32D_METHOD_1_67479EA3E59BD19F_OFFSET UNITYSDK_OFFSET(0x1E778FC0)
#define CLASS_1_A219BC1320CFA32D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E779250)
#define CLASS_1_A219BC1320CFA32D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E778FB0)

inline static constexpr unsigned int Class_1_A219BC1320CFA32D_TypeDefinitionIndex = 42506;

class Class_1_A219BC1320CFA32D : public ::System::Object
{
public:
	static ::Class_1_A219BC1320CFA32D** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_A219BC1320CFA32D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A219BC1320CFA32D_TypeDefinitionIndex)->GetStaticField(0x607B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A219BC1320CFA32D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A219BC1320CFA32D__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_67479EA3E59BD19F(::Class_1_F3CAAE7E7C7111CC* a1, ::Class_1_7B4E9156998275BE* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_A219BC1320CFA32D_METHOD_1_67479EA3E59BD19F_OFFSET))(this, a1, a2);
	}
};
