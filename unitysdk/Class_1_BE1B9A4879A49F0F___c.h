#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class LevelData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_BE1B9A4879A49F0F___C_METHOD_1_DD4F016BB5B32AD3_1_OFFSET UNITYSDK_OFFSET(0x1153DE90)
#define CLASS_1_BE1B9A4879A49F0F___C_METHOD_1_DD4F016BB5B32AD3_OFFSET UNITYSDK_OFFSET(0x1153DE60)
#define CLASS_1_BE1B9A4879A49F0F___C_METHOD_1_E1892A65AADE9B8E_OFFSET UNITYSDK_OFFSET(0x1153DE70)
#define CLASS_1_BE1B9A4879A49F0F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1153DE10)
#define CLASS_1_BE1B9A4879A49F0F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1153DE50)

inline static constexpr unsigned int Class_1_BE1B9A4879A49F0F___c_TypeDefinitionIndex = 44667;

class Class_1_BE1B9A4879A49F0F___c : public ::System::Object
{
public:
	static ::Class_1_BE1B9A4879A49F0F___c** StaticGet___9()
	{
		return (::Class_1_BE1B9A4879A49F0F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE1B9A4879A49F0F___c_TypeDefinitionIndex)->GetStaticField(0x358E0);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE1B9A4879A49F0F___c_TypeDefinitionIndex)->GetStaticField(0x358E8);
	}
	static ::System::Func_2<::MoleMole::Project::Config::LevelData*, ::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::MoleMole::Project::Config::LevelData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE1B9A4879A49F0F___c_TypeDefinitionIndex)->GetStaticField(0x358F0);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE1B9A4879A49F0F___c_TypeDefinitionIndex)->GetStaticField(0x358F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE1B9A4879A49F0F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE1B9A4879A49F0F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DD4F016BB5B32AD3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE1B9A4879A49F0F___C_METHOD_1_DD4F016BB5B32AD3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E1892A65AADE9B8E(::MoleMole::Project::Config::LevelData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Project::Config::LevelData*))((::PBYTE)hIl2Cpp + CLASS_1_BE1B9A4879A49F0F___C_METHOD_1_E1892A65AADE9B8E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DD4F016BB5B32AD3_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE1B9A4879A49F0F___C_METHOD_1_DD4F016BB5B32AD3_1_OFFSET))(this, a1);
	}
};
