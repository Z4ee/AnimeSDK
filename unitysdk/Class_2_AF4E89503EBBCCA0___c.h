#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_AF4E89503EBBCCA0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168FA350)
#define CLASS_2_AF4E89503EBBCCA0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168FA390)
#define CLASS_2_AF4E89503EBBCCA0___C___CTOR_B__104_0_OFFSET UNITYSDK_OFFSET(0x168FA3A0)
#define CLASS_2_AF4E89503EBBCCA0___C___CTOR_B__104_1_OFFSET UNITYSDK_OFFSET(0x168FA3D0)

inline static constexpr unsigned int Class_2_AF4E89503EBBCCA0___c_TypeDefinitionIndex = 32522;

class Class_2_AF4E89503EBBCCA0___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__104_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF4E89503EBBCCA0___c_TypeDefinitionIndex)->GetStaticField(0x14450);
	}
	static ::Class_2_AF4E89503EBBCCA0___c** StaticGet___9()
	{
		return (::Class_2_AF4E89503EBBCCA0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF4E89503EBBCCA0___c_TypeDefinitionIndex)->GetStaticField(0x14458);
	}
	static ::System::Func_1<::Class_2_0C58AD91B0F4D809*>** StaticGet___9__104_1()
	{
		return (::System::Func_1<::Class_2_0C58AD91B0F4D809*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AF4E89503EBBCCA0___c_TypeDefinitionIndex)->GetStaticField(0x14460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AF4E89503EBBCCA0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4E89503EBBCCA0___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__104_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AF4E89503EBBCCA0___C___CTOR_B__104_0_OFFSET))(this, entity);
	}

	::Class_2_0C58AD91B0F4D809* __ctor_b__104_1()
	{
		return ((::Class_2_0C58AD91B0F4D809*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF4E89503EBBCCA0___C___CTOR_B__104_1_OFFSET))(this);
	}
};
