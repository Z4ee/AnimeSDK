#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1792A4214A514F27.h"

class Class_0_16E4307DCC419505_1111;
class Class_1_0EE68920FE366BFF_2;
class Class_1_24C2E7EF22229C6A;
class Class_1_3FF87F4926CD1B22;
class Class_1_61F4F52B897D6AD7;
class Class_1_6C51279A514848F4;
class Class_2_A037C38274F8726A;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class ISystem; }
namespace Entitas { class Systems; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_206F177A6C7E89E8_ADD_OFFSET UNITYSDK_OFFSET(0x8FD8D50)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_6C0D3BB3C6621FFD_OFFSET UNITYSDK_OFFSET(0x8FD92E0)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_816E6D8FC1A47842_OFFSET UNITYSDK_OFFSET(0x8FD95F0)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_B18EB6934D94DA71_OFFSET UNITYSDK_OFFSET(0x8FD8900)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x8FD9690)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_F4BACB8E9D45997B_OFFSET UNITYSDK_OFFSET(0x8FD8E30)
#define CLASS_3_206F177A6C7E89E8__CTOR_OFFSET UNITYSDK_OFFSET(0x8FD9830)
#define CLASS_3_206F177A6C7E89E8___IFIXBASEPROXY_ADD_OFFSET UNITYSDK_OFFSET(0x8FD9910)

inline static constexpr unsigned int Class_3_206F177A6C7E89E8_TypeDefinitionIndex = 70634;

class Class_3_206F177A6C7E89E8 : public ::Class_2_1792A4214A514F27
{
public:
	::Class_1_61F4F52B897D6AD7* Field_3_0; // 0x30
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1111*>* Field_3_5; // 0x38
	::Class_1_0EE68920FE366BFF_2* Field_3_4; // 0x40
	::Class_1_6C51279A514848F4* Field_3_2; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0x50
	::Class_1_3FF87F4926CD1B22* Field_3_1; // 0x58
	::Class_2_A037C38274F8726A* Field_3_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_B18EB6934D94DA71(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2, ::RPG::Client::FiveDimGameInstance* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_B18EB6934D94DA71_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_C796A0B42720FBD3_OFFSET))(this);
	}

	::Entitas::Systems* Add(::Entitas::ISystem* a1)
	{
		return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_ADD_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4BACB8E9D45997B(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_F4BACB8E9D45997B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_816E6D8FC1A47842(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_816E6D8FC1A47842_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6C0D3BB3C6621FFD(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2, ::RPG::Client::FiveDimGameInstance* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_6C0D3BB3C6621FFD_OFFSET))(this, a1, a2, a3);
	}

	::Entitas::Systems* __iFixBaseProxy_Add(::Entitas::ISystem* P0)
	{
		return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8___IFIXBASEPROXY_ADD_OFFSET))(this, P0);
	}
};
