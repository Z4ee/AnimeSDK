#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9F1CCF0374E58E56___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1436BAB0)
#define CLASS_1_9F1CCF0374E58E56___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1436BAF0)
#define CLASS_1_9F1CCF0374E58E56___C__SATISFY_B__0_0_OFFSET UNITYSDK_OFFSET(0x1436BB00)

inline static constexpr unsigned int Class_1_9F1CCF0374E58E56___c_TypeDefinitionIndex = 60693;

class Class_1_9F1CCF0374E58E56___c : public ::System::Object
{
public:
	static ::Class_1_9F1CCF0374E58E56___c** StaticGet___9()
	{
		return (::Class_1_9F1CCF0374E58E56___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F1CCF0374E58E56___c_TypeDefinitionIndex)->GetStaticField(0x2E270);
	}
	static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F1CCF0374E58E56___c_TypeDefinitionIndex)->GetStaticField(0x2E278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F1CCF0374E58E56___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F1CCF0374E58E56___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Satisfy_b__0_0(::RPG::Client::GridFightGridMember* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + CLASS_1_9F1CCF0374E58E56___C__SATISFY_B__0_0_OFFSET))(this, a1);
	}
};
