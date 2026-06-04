#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_31D39E0B0ADFB12E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D44F90)
#define CLASS_2_31D39E0B0ADFB12E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D44FD0)
#define CLASS_2_31D39E0B0ADFB12E___C___CTOR_B__125_0_OFFSET UNITYSDK_OFFSET(0x18D44FE0)
#define CLASS_2_31D39E0B0ADFB12E___C___CTOR_B__125_1_OFFSET UNITYSDK_OFFSET(0x18D45010)

inline static constexpr unsigned int Class_2_31D39E0B0ADFB12E___c_TypeDefinitionIndex = 38952;

class Class_2_31D39E0B0ADFB12E___c : public ::System::Object
{
public:
	static ::Class_2_31D39E0B0ADFB12E___c** StaticGet___9()
	{
		return (::Class_2_31D39E0B0ADFB12E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31D39E0B0ADFB12E___c_TypeDefinitionIndex)->GetStaticField(0x2F770);
	}
	static ::System::Func_1<::Class_2_B8E38BF47138A2E5*>** StaticGet___9__125_1()
	{
		return (::System::Func_1<::Class_2_B8E38BF47138A2E5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31D39E0B0ADFB12E___c_TypeDefinitionIndex)->GetStaticField(0x2F778);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__125_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31D39E0B0ADFB12E___c_TypeDefinitionIndex)->GetStaticField(0x2F780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_31D39E0B0ADFB12E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D39E0B0ADFB12E___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__125_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_31D39E0B0ADFB12E___C___CTOR_B__125_0_OFFSET))(this, a1);
	}

	::Class_2_B8E38BF47138A2E5* __ctor_b__125_1()
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D39E0B0ADFB12E___C___CTOR_B__125_1_OFFSET))(this);
	}
};
