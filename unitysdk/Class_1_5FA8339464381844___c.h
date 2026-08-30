#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5FA8339464381844___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153CDEA0)
#define CLASS_1_5FA8339464381844___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153CDEE0)
#define CLASS_1_5FA8339464381844___C__GET_ISVALID_B__5_0_OFFSET UNITYSDK_OFFSET(0x153CDEF0)
#define CLASS_1_5FA8339464381844___C__GET_ISVALID_B__5_1_OFFSET UNITYSDK_OFFSET(0x153CDFB0)

inline static constexpr unsigned int Class_1_5FA8339464381844___c_TypeDefinitionIndex = 65238;

class Class_1_5FA8339464381844___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FA8339464381844___c_TypeDefinitionIndex)->GetStaticField(0x658A0);
	}
	static ::Class_1_5FA8339464381844___c** StaticGet___9()
	{
		return (::Class_1_5FA8339464381844___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FA8339464381844___c_TypeDefinitionIndex)->GetStaticField(0x658A8);
	}
	static ::System::Func_2<::RPG::Client::GridFightProjection*, ::System::Boolean>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::RPG::Client::GridFightProjection*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FA8339464381844___c_TypeDefinitionIndex)->GetStaticField(0x658B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _get_IsValid_b__5_0(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844___C__GET_ISVALID_B__5_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_IsValid_b__5_1(::RPG::Client::GridFightProjection* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightProjection*))((::PBYTE)hIl2Cpp + CLASS_1_5FA8339464381844___C__GET_ISVALID_B__5_1_OFFSET))(this, a1);
	}
};
