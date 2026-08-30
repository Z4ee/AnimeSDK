#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
class Class_1_F3CAAE7E7C7111CC;

#define CLASS_1_00FE176078F2D3D0_METHOD_1_EC03CD8F6B21BF47_OFFSET UNITYSDK_OFFSET(0x1E76A340)
#define CLASS_1_00FE176078F2D3D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76AD30)
#define CLASS_1_00FE176078F2D3D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E76A330)

inline static constexpr unsigned int Class_1_00FE176078F2D3D0_TypeDefinitionIndex = 42507;

class Class_1_00FE176078F2D3D0 : public ::System::Object
{
public:
	static ::Class_1_00FE176078F2D3D0** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_00FE176078F2D3D0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_00FE176078F2D3D0_TypeDefinitionIndex)->GetStaticField(0x607A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00FE176078F2D3D0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_00FE176078F2D3D0__CCTOR_OFFSET))();
	}

	::System::Object* Method_1_EC03CD8F6B21BF47(::Class_1_F3CAAE7E7C7111CC* a1, ::Class_1_7B4E9156998275BE* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_F3CAAE7E7C7111CC*, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_00FE176078F2D3D0_METHOD_1_EC03CD8F6B21BF47_OFFSET))(this, a1, a2);
	}
};
