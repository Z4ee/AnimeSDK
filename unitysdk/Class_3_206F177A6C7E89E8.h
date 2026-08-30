#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1792A4214A514F27.h"

class Class_0_16E4307DCC419505_1271;
class Class_1_0EE68920FE366BFF_2;
class Class_1_3FF87F4926CD1B22;
class Class_1_4F12C4FA9BF0B865;
class Class_1_4FAE3CBDEA4A599A;
class Class_1_8130CBB13F62AEE0;
class Class_1_B4357A1C72BABC6B;
class Class_2_2FF2986CE7F8FBE1;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class ISystem; }
namespace Entitas { class Systems; }
namespace RPG::Client { class FiveDimGameInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_206F177A6C7E89E8_ADD_OFFSET UNITYSDK_OFFSET(0xC15CB80)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_0A2C90C6A56B419C_OFFSET UNITYSDK_OFFSET(0xC15D580)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_6C0D3BB3C6621FFD_OFFSET UNITYSDK_OFFSET(0xC15D260)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_7017C9D6C32E7D7F_OFFSET UNITYSDK_OFFSET(0xC15C6B0)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_83AE46DB8772209E_OFFSET UNITYSDK_OFFSET(0xC15D620)
#define CLASS_3_206F177A6C7E89E8_METHOD_3_F4BACB8E9D45997B_OFFSET UNITYSDK_OFFSET(0xC15CD90)
#define CLASS_3_206F177A6C7E89E8__CTOR_OFFSET UNITYSDK_OFFSET(0xC15D850)

inline static constexpr unsigned int Class_3_206F177A6C7E89E8_TypeDefinitionIndex = 76453;

class Class_3_206F177A6C7E89E8 : public ::Class_2_1792A4214A514F27
{
public:
	::Class_2_2FF2986CE7F8FBE1* PFOBCJOOMAD; // 0x30
	::Class_1_3FF87F4926CD1B22* FGAMCDANBPI; // 0x38
	::Class_1_4FAE3CBDEA4A599A* IHNPLBIJJDA; // 0x40
	::Class_1_4F12C4FA9BF0B865* PBDCDIJLCNN; // 0x48
	::Class_1_8130CBB13F62AEE0* EOEBCMKBHEI; // 0x50
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1271*>* LBGDAIGJNNI; // 0x58
	::Class_1_0EE68920FE366BFF_2* OKLJHINJMOO; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* JEBEHBGJKNA; // 0x68

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
