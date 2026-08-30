#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_16301709DD0B0FD3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CE9C20)
#define CLASS_1_16301709DD0B0FD3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE9C60)
#define CLASS_1_16301709DD0B0FD3___C__HASVALUE_B__1_0_OFFSET UNITYSDK_OFFSET(0x15CE9C70)
#define CLASS_1_16301709DD0B0FD3___C__ISPOSITIVE_B__3_0_OFFSET UNITYSDK_OFFSET(0x15CE9CA0)

inline static constexpr unsigned int Class_1_16301709DD0B0FD3___c_TypeDefinitionIndex = 50305;

class Class_1_16301709DD0B0FD3___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16301709DD0B0FD3___c_TypeDefinitionIndex)->GetStaticField(0x2F360);
	}
	static ::Class_1_16301709DD0B0FD3___c** StaticGet___9()
	{
		return (::Class_1_16301709DD0B0FD3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16301709DD0B0FD3___c_TypeDefinitionIndex)->GetStaticField(0x2F368);
	}
	static ::System::Func_2<::RPG::Client::TextID, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::Client::TextID, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16301709DD0B0FD3___c_TypeDefinitionIndex)->GetStaticField(0x2F370);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16301709DD0B0FD3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16301709DD0B0FD3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _HasValue_b__1_0(::RPG::Client::TextID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_16301709DD0B0FD3___C__HASVALUE_B__1_0_OFFSET))(this, a1);
	}

	::System::Boolean _IsPositive_b__3_0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_16301709DD0B0FD3___C__ISPOSITIVE_B__3_0_OFFSET))(this, a1);
	}
};
