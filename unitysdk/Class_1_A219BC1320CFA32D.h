#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;
class Class_1_F3CAAE7E7C7111CC;

#define CLASS_1_A219BC1320CFA32D_METHOD_1_67479EA3E59BD19F_OFFSET UNITYSDK_OFFSET(0x1EC5D7E0)
#define CLASS_1_A219BC1320CFA32D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC5DA70)
#define CLASS_1_A219BC1320CFA32D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC5D7D0)

inline static constexpr unsigned int Class_1_A219BC1320CFA32D_TypeDefinitionIndex = 44313;

class Class_1_A219BC1320CFA32D : public ::System::Object
{
public:
	static ::Class_1_A219BC1320CFA32D** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_A219BC1320CFA32D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A219BC1320CFA32D_TypeDefinitionIndex)->GetStaticField(0x48600);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A219BC1320CFA32D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A219BC1320CFA32D__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_67479EA3E59BD19F(::Class_1_F3CAAE7E7C7111CC* a1, ::Class_1_C6F4C4ABEDB8B5E9* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_A219BC1320CFA32D_METHOD_1_67479EA3E59BD19F_OFFSET))(this, a1, a2);
	}
};
