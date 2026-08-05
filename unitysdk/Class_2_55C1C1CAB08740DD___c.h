#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_55C1C1CAB08740DD___C_METHOD_1_D6AE6EF47A1DDB72_OFFSET UNITYSDK_OFFSET(0x166B52C0)
#define CLASS_2_55C1C1CAB08740DD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166B5270)
#define CLASS_2_55C1C1CAB08740DD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166B52B0)

inline static constexpr unsigned int Class_2_55C1C1CAB08740DD___c_TypeDefinitionIndex = 56749;

class Class_2_55C1C1CAB08740DD___c : public ::System::Object
{
public:
	static ::Class_2_55C1C1CAB08740DD___c** StaticGet___9()
	{
		return (::Class_2_55C1C1CAB08740DD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_55C1C1CAB08740DD___c_TypeDefinitionIndex)->GetStaticField(0x480A0);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__5_6()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_55C1C1CAB08740DD___c_TypeDefinitionIndex)->GetStaticField(0x480A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_55C1C1CAB08740DD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55C1C1CAB08740DD___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_D6AE6EF47A1DDB72()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55C1C1CAB08740DD___C_METHOD_1_D6AE6EF47A1DDB72_OFFSET))(this);
	}
};
