#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_98E85266F8DC9000___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EDB990)
#define CLASS_1_98E85266F8DC9000___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDB9D0)
#define CLASS_1_98E85266F8DC9000___C___CHECKACTIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0x15EDB9E0)

inline static constexpr unsigned int Class_1_98E85266F8DC9000___c_TypeDefinitionIndex = 62567;

class Class_1_98E85266F8DC9000___c : public ::System::Object
{
public:
	static ::Class_1_98E85266F8DC9000___c** StaticGet___9()
	{
		return (::Class_1_98E85266F8DC9000___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98E85266F8DC9000___c_TypeDefinitionIndex)->GetStaticField(0x5FD80);
	}
	static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98E85266F8DC9000___c_TypeDefinitionIndex)->GetStaticField(0x5FD88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __CheckActive_b__1_0(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_98E85266F8DC9000___C___CHECKACTIVE_B__1_0_OFFSET))(this, a1);
	}
};
