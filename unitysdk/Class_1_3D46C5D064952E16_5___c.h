#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3D46C5D064952E16_5___C_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x14199A70)
#define CLASS_1_3D46C5D064952E16_5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14199A20)
#define CLASS_1_3D46C5D064952E16_5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14199A60)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_5___c_TypeDefinitionIndex = 54987;

class Class_1_3D46C5D064952E16_5___c : public ::System::Object
{
public:
	static ::Class_1_3D46C5D064952E16_5___c** StaticGet___9()
	{
		return (::Class_1_3D46C5D064952E16_5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D46C5D064952E16_5___c_TypeDefinitionIndex)->GetStaticField(0x42FC0);
	}
	static ::System::Action** StaticGet___9__22_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D46C5D064952E16_5___c_TypeDefinitionIndex)->GetStaticField(0x42FC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_5___C_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}
};
