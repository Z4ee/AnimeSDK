#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_6136D02275B62E7C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x121202B0)
#define CLASS_2_6136D02275B62E7C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x121202F0)
#define CLASS_2_6136D02275B62E7C___C___CLOSESCREENTRANSFER_B__18_0_OFFSET UNITYSDK_OFFSET(0x12120300)

inline static constexpr unsigned int Class_2_6136D02275B62E7C___c_TypeDefinitionIndex = 48619;

class Class_2_6136D02275B62E7C___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__18_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6136D02275B62E7C___c_TypeDefinitionIndex)->GetStaticField(0x5BDE0);
	}
	static ::Class_2_6136D02275B62E7C___c** StaticGet___9()
	{
		return (::Class_2_6136D02275B62E7C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6136D02275B62E7C___c_TypeDefinitionIndex)->GetStaticField(0x5BDE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6136D02275B62E7C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6136D02275B62E7C___C__CTOR_OFFSET))(this);
	}

	::System::Void __CloseScreenTransfer_b__18_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6136D02275B62E7C___C___CLOSESCREENTRANSFER_B__18_0_OFFSET))(this);
	}
};
