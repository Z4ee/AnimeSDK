#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3ABA989E5AECB261;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_8C608625ABC8C4FA_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C20180)
#define CLASS_2_8C608625ABC8C4FA_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C201C0)
#define CLASS_2_8C608625ABC8C4FA_2___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x17C201D0)
#define CLASS_2_8C608625ABC8C4FA_2___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x17C20200)

inline static constexpr unsigned int Class_2_8C608625ABC8C4FA_2___c_TypeDefinitionIndex = 34513;

class Class_2_8C608625ABC8C4FA_2___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8C608625ABC8C4FA_2___c_TypeDefinitionIndex)->GetStaticField(0x6A590);
	}
	static ::System::Func_1<::Class_2_3ABA989E5AECB261*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_3ABA989E5AECB261*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8C608625ABC8C4FA_2___c_TypeDefinitionIndex)->GetStaticField(0x6A598);
	}
	static ::Class_2_8C608625ABC8C4FA_2___c** StaticGet___9()
	{
		return (::Class_2_8C608625ABC8C4FA_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8C608625ABC8C4FA_2___c_TypeDefinitionIndex)->GetStaticField(0x6A5A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_2___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_2___C___CTOR_B__0_0_OFFSET))(this, entity);
	}

	::Class_2_3ABA989E5AECB261* __ctor_b__0_1()
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_2___C___CTOR_B__0_1_OFFSET))(this);
	}
};
