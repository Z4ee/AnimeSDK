#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_49CDA4D52DA483F8.h"
#include "unitysdk/Struct_2_1FE873E4ECDC93A1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UIPrefabLoader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_5_A7185CB44B3E71DB_METHOD_5_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x154E1700)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x154E1650)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x154E12D0)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x154E1350)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x154E1020)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x154E1560)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x154E17E0)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154E17A0)
#define CLASS_5_A7185CB44B3E71DB__CTOR_OFFSET UNITYSDK_OFFSET(0x154E0FF0)

inline static constexpr unsigned int Class_5_A7185CB44B3E71DB_TypeDefinitionIndex = 49757;

class Class_5_A7185CB44B3E71DB : public ::Class_4_49CDA4D52DA483F8<::Struct_2_1FE873E4ECDC93A1>
{
public:
	::UnityEngine::GameObject* LBNBPMIFDHI; // 0x60
	::UnityEngine::Transform* OIMCMKFHMDK; // 0x68
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x70
	::System::Single PBLGHIGPEIP; // 0x78
	::UnityEngine::Quaternion HBAIICJGPGC; // 0x7C
	::UnityEngine::Vector3 OIMMGKNHKOA; // 0x8C

	::System::Void _ctor(::Struct_2_1FE873E4ECDC93A1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1FE873E4ECDC93A1))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_5_8D6879CAA76F6588()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
	}

	::System::Void Method_5_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_5_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_5_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_5_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
