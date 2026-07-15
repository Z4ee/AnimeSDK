#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1792A4214A514F27.h"

class Class_0_16E4307DCC419505_1208;
class Class_1_0EE68920FE366BFF_2;
class Class_1_3FF87F4926CD1B22;
class Class_1_4FAE3CBDEA4A599A;
class Class_1_54B0BD06FA860515;
class Class_1_B4357A1C72BABC6B;
class Class_1_FE0E300FA55D1287;
class Class_2_2FF2986CE7F8FBE1;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class ISystem; }
namespace Entitas { class Systems; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_206F177A6C7E89E8_ADD_OFFSET UNITYSDK_OFFSET(0x177CF320)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_0A2C90C6A56B419C_OFFSET UNITYSDK_OFFSET(0x177CFD20)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_6C0D3BB3C6621FFD_OFFSET UNITYSDK_OFFSET(0x177CFA00)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_7017C9D6C32E7D7F_OFFSET UNITYSDK_OFFSET(0x177CEE50)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_83AE46DB8772209E_OFFSET UNITYSDK_OFFSET(0x177CFDC0)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_F4BACB8E9D45997B_OFFSET UNITYSDK_OFFSET(0x177CF530)
#define CLASS_3_206F177A6C7E89E8__CTOR_OFFSET UNITYSDK_OFFSET(0x177CFFF0)

inline static constexpr unsigned int Class_3_206F177A6C7E89E8_TypeDefinitionIndex = 72978;

class Class_3_206F177A6C7E89E8 : public ::Class_2_1792A4214A514F27
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x30
	::Class_1_0EE68920FE366BFF_2* Field_3_1; // 0x38
	::Class_1_FE0E300FA55D1287* Field_3_2; // 0x40
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1208*>* Field_3_3; // 0x48
	::Class_1_4FAE3CBDEA4A599A* Field_3_4; // 0x50
	::Class_1_54B0BD06FA860515* Field_3_5; // 0x58
	::Class_1_3FF87F4926CD1B22* Field_3_6; // 0x60
	::Class_2_2FF2986CE7F8FBE1* Field_3_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7017C9D6C32E7D7F(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::RPG::Client::FiveDimGameInstance* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_7017C9D6C32E7D7F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_83AE46DB8772209E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_83AE46DB8772209E_OFFSET))(this);
	}

	::Entitas::Systems* Add(::Entitas::ISystem* a1)
	{
		return ((::Entitas::Systems*(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_ADD_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4BACB8E9D45997B(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_F4BACB8E9D45997B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0A2C90C6A56B419C(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_0A2C90C6A56B419C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6C0D3BB3C6621FFD(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::RPG::Client::FiveDimGameInstance* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_206F177A6C7E89E8_METHOD_3_6C0D3BB3C6621FFD_OFFSET))(this, a1, a2, a3);
	}
};
