#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_46778EB0EE8D9609_OFFSET UNITYSDK_OFFSET(0xF6328B0)
#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_84287931B1F63150_OFFSET UNITYSDK_OFFSET(0xF632710)
#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_D6AE6EF47A1DDB72_OFFSET UNITYSDK_OFFSET(0xF632CA0)
#define CLASS_2_07DBFDAAE3D530EE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF6326C0)
#define CLASS_2_07DBFDAAE3D530EE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF632700)

inline static constexpr unsigned int Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex = 72929;

class Class_2_07DBFDAAE3D530EE___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Int32>** StaticGet___9__25_13()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x37EC0);
	}
	static ::System::Func_1<::System::DateTime>** StaticGet___9__25_4()
	{
		return (::System::Func_1<::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x37EC8);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__25_11()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x37ED0);
	}
	static ::Class_2_07DBFDAAE3D530EE___c** StaticGet___9()
	{
		return (::Class_2_07DBFDAAE3D530EE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x37ED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C__CTOR_OFFSET))(this);
	}

	::System::DateTime Method_1_84287931B1F63150()
	{
		return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_84287931B1F63150_OFFSET))(this);
	}

	::System::Void Method_1_46778EB0EE8D9609(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_46778EB0EE8D9609_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_1_D6AE6EF47A1DDB72()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_D6AE6EF47A1DDB72_OFFSET))(this);
	}
};
