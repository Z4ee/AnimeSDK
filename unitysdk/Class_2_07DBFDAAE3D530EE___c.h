#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_46778EB0EE8D9609_OFFSET UNITYSDK_OFFSET(0x107A5360)
#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_7FE3EA8542ED97C3_OFFSET UNITYSDK_OFFSET(0x107A5750)
#define CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_84287931B1F63150_OFFSET UNITYSDK_OFFSET(0x107A5790)
#define CLASS_2_07DBFDAAE3D530EE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x107A5310)
#define CLASS_2_07DBFDAAE3D530EE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x107A5350)

inline static constexpr unsigned int Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex = 42289;

class Class_2_07DBFDAAE3D530EE___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::DateTime>** StaticGet___9__25_4()
	{
		return (::System::Func_1<::System::DateTime>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x33780);
	}
	static ::System::Action_1<::System::Int32>** StaticGet___9__25_13()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x33788);
	}
	static ::Class_2_07DBFDAAE3D530EE___c** StaticGet___9()
	{
		return (::Class_2_07DBFDAAE3D530EE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x33790);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__25_11()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_07DBFDAAE3D530EE___c_TypeDefinitionIndex)->GetStaticField(0x33798);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_46778EB0EE8D9609(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_46778EB0EE8D9609_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_1_7FE3EA8542ED97C3()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_7FE3EA8542ED97C3_OFFSET))(this);
	}

	::System::DateTime Method_1_84287931B1F63150()
	{
		return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DBFDAAE3D530EE___C_METHOD_1_84287931B1F63150_OFFSET))(this);
	}
};
