#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E0FF2D319FB4F148;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F045B8C450CAFB48___C_METHOD_1_7D15773C476261B2_OFFSET UNITYSDK_OFFSET(0x11DA6260)
#define CLASS_3_F045B8C450CAFB48___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DA6210)
#define CLASS_3_F045B8C450CAFB48___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA6250)

inline static constexpr unsigned int Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex = 79677;

class Class_3_F045B8C450CAFB48___c : public ::System::Object
{
public:
	static ::Class_3_F045B8C450CAFB48___c** StaticGet___9()
	{
		return (::Class_3_F045B8C450CAFB48___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex)->GetStaticField(0x3D2D0);
	}
	static ::System::Action_1<::Class_3_E0FF2D319FB4F148*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_E0FF2D319FB4F148*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F045B8C450CAFB48___c_TypeDefinitionIndex)->GetStaticField(0x3D2D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D15773C476261B2(::Class_3_E0FF2D319FB4F148* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E0FF2D319FB4F148*))((::PBYTE)hIl2Cpp + CLASS_3_F045B8C450CAFB48___C_METHOD_1_7D15773C476261B2_OFFSET))(this, a1);
	}
};
