#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6313984181A582D7_2;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_8C608625ABC8C4FA_4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C0E6E0)
#define CLASS_2_8C608625ABC8C4FA_4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C0E720)
#define CLASS_2_8C608625ABC8C4FA_4___C___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x17C0E730)
#define CLASS_2_8C608625ABC8C4FA_4___C___CTOR_B__4_1_OFFSET UNITYSDK_OFFSET(0x17C0E760)

inline static constexpr unsigned int Class_2_8C608625ABC8C4FA_4___c_TypeDefinitionIndex = 34527;

class Class_2_8C608625ABC8C4FA_4___c : public ::System::Object
{
public:
	static ::Class_2_8C608625ABC8C4FA_4___c** StaticGet___9()
	{
		return (::Class_2_8C608625ABC8C4FA_4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8C608625ABC8C4FA_4___c_TypeDefinitionIndex)->GetStaticField(0x6A320);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8C608625ABC8C4FA_4___c_TypeDefinitionIndex)->GetStaticField(0x6A328);
	}
	static ::System::Func_1<::Class_2_6313984181A582D7_2*>** StaticGet___9__4_1()
	{
		return (::System::Func_1<::Class_2_6313984181A582D7_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8C608625ABC8C4FA_4___c_TypeDefinitionIndex)->GetStaticField(0x6A330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__4_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4___C___CTOR_B__4_0_OFFSET))(this, entity);
	}

	::Class_2_6313984181A582D7_2* __ctor_b__4_1()
	{
		return ((::Class_2_6313984181A582D7_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C608625ABC8C4FA_4___C___CTOR_B__4_1_OFFSET))(this);
	}
};
