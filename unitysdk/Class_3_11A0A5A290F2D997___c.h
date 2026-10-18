#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_11A0A5A290F2D997;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_11A0A5A290F2D997___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBE5C050)
#define CLASS_3_11A0A5A290F2D997___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBE5C080)
#define CLASS_3_11A0A5A290F2D997___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xBE5C090)

inline static constexpr unsigned int Class_3_11A0A5A290F2D997___c_TypeDefinitionIndex = 52832;

class Class_3_11A0A5A290F2D997___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_11A0A5A290F2D997*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::Class_3_11A0A5A290F2D997*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_11A0A5A290F2D997___c_TypeDefinitionIndex)->GetStaticField(0x637F0);
	}
	static ::Class_3_11A0A5A290F2D997___c** StaticGet___9()
	{
		return (::Class_3_11A0A5A290F2D997___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_11A0A5A290F2D997___c_TypeDefinitionIndex)->GetStaticField(0x637F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_11A0A5A290F2D997___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A0A5A290F2D997___C__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__0_0(::Class_3_11A0A5A290F2D997* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_11A0A5A290F2D997*))((::PBYTE)hIl2Cpp + CLASS_3_11A0A5A290F2D997___C___CTOR_B__0_0_OFFSET))(this, a1);
	}
};
