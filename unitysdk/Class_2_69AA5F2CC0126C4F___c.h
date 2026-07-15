#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_465E3DC13CE68267;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_69AA5F2CC0126C4F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9E83D0)
#define CLASS_2_69AA5F2CC0126C4F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E8410)
#define CLASS_2_69AA5F2CC0126C4F___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A9E8420)
#define CLASS_2_69AA5F2CC0126C4F___C___CTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x1A9E8450)

inline static constexpr unsigned int Class_2_69AA5F2CC0126C4F___c_TypeDefinitionIndex = 39958;

class Class_2_69AA5F2CC0126C4F___c : public ::System::Object
{
public:
	static ::Class_2_69AA5F2CC0126C4F___c** StaticGet___9()
	{
		return (::Class_2_69AA5F2CC0126C4F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69AA5F2CC0126C4F___c_TypeDefinitionIndex)->GetStaticField(0x3DD50);
	}
	static ::System::Func_1<::Class_2_465E3DC13CE68267*>** StaticGet___9__9_1()
	{
		return (::System::Func_1<::Class_2_465E3DC13CE68267*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69AA5F2CC0126C4F___c_TypeDefinitionIndex)->GetStaticField(0x3DD58);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_69AA5F2CC0126C4F___c_TypeDefinitionIndex)->GetStaticField(0x3DD60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_69AA5F2CC0126C4F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69AA5F2CC0126C4F___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__9_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_69AA5F2CC0126C4F___C___CTOR_B__9_0_OFFSET))(this, a1);
	}

	::Class_2_465E3DC13CE68267* __ctor_b__9_1()
	{
		return ((::Class_2_465E3DC13CE68267*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_69AA5F2CC0126C4F___C___CTOR_B__9_1_OFFSET))(this);
	}
};
