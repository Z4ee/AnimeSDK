#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F4E3F83281950E63___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A48DD0)
#define CLASS_1_F4E3F83281950E63___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A48E10)
#define CLASS_1_F4E3F83281950E63___C__SATISFY_B__0_0_OFFSET UNITYSDK_OFFSET(0x9A48E20)

inline static constexpr unsigned int Class_1_F4E3F83281950E63___c_TypeDefinitionIndex = 59758;

class Class_1_F4E3F83281950E63___c : public ::System::Object
{
public:
	static ::Class_1_F4E3F83281950E63___c** StaticGet___9()
	{
		return (::Class_1_F4E3F83281950E63___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4E3F83281950E63___c_TypeDefinitionIndex)->GetStaticField(0x1B370);
	}
	static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4E3F83281950E63___c_TypeDefinitionIndex)->GetStaticField(0x1B378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4E3F83281950E63___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4E3F83281950E63___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Satisfy_b__0_0(::RPG::Client::GridFightGridMember* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + CLASS_1_F4E3F83281950E63___C__SATISFY_B__0_0_OFFSET))(this, x);
	}
};
