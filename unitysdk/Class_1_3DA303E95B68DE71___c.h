#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3DA303E95B68DE71;

#define CLASS_1_3DA303E95B68DE71___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A83D930)
#define CLASS_1_3DA303E95B68DE71___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A83D960)
#define CLASS_1_3DA303E95B68DE71___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A83D970)

inline static constexpr unsigned int Class_1_3DA303E95B68DE71___c_TypeDefinitionIndex = 31788;

class Class_1_3DA303E95B68DE71___c : public ::System::Object
{
public:
	static ::Class_1_3DA303E95B68DE71___c** StaticGet___9()
	{
		return (::Class_1_3DA303E95B68DE71___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DA303E95B68DE71___c_TypeDefinitionIndex)->GetStaticField(0x52AB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DA303E95B68DE71___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA303E95B68DE71___C__CTOR_OFFSET))(this);
	}

	::Class_1_3DA303E95B68DE71* __cctor_b__38_0()
	{
		return ((::Class_1_3DA303E95B68DE71*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DA303E95B68DE71___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
