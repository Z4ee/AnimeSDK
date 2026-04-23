#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_FB76A3ACD69F4459___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FD5450)
#define CLASS_2_FB76A3ACD69F4459___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD5490)
#define CLASS_2_FB76A3ACD69F4459___C___CLOSESCREENTRANSFER_B__15_0_OFFSET UNITYSDK_OFFSET(0x8FD54A0)

inline static constexpr unsigned int Class_2_FB76A3ACD69F4459___c_TypeDefinitionIndex = 48713;

class Class_2_FB76A3ACD69F4459___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__15_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB76A3ACD69F4459___c_TypeDefinitionIndex)->GetStaticField(0x64B10);
	}
	static ::Class_2_FB76A3ACD69F4459___c** StaticGet___9()
	{
		return (::Class_2_FB76A3ACD69F4459___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB76A3ACD69F4459___c_TypeDefinitionIndex)->GetStaticField(0x64B18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459___C__CTOR_OFFSET))(this);
	}

	::System::Void __CloseScreenTransfer_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459___C___CLOSESCREENTRANSFER_B__15_0_OFFSET))(this);
	}
};
