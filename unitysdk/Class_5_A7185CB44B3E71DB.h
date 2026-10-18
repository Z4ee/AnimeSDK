#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_49CDA4D52DA483F8.h"
#include "unitysdk/Struct_2_1FE873E4ECDC93A1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UIPrefabLoader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_5_A7185CB44B3E71DB_METHOD_5_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0x154ED440)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x154ED3E0)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x154ED050)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x154ED0E0)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x154ECDF0)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x154ED2F0)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x154ED4D0)
#define CLASS_5_A7185CB44B3E71DB_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154ED490)
#define CLASS_5_A7185CB44B3E71DB__CTOR_OFFSET UNITYSDK_OFFSET(0x154ECDC0)

inline static constexpr unsigned int Class_5_A7185CB44B3E71DB_TypeDefinitionIndex = 49757;

class Class_5_A7185CB44B3E71DB : public ::Class_4_49CDA4D52DA483F8<::Struct_2_1FE873E4ECDC93A1>
{
public:
	::UnityEngine::GameObject* LBNBPMIFDHI; // 0x60
	::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x68
	::UnityEngine::Transform* OIMCMKFHMDK; // 0x70
	::UnityEngine::Quaternion HBAIICJGPGC; // 0x78
	::System::Single PBLGHIGPEIP; // 0x88
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

	::System::Void Method_5_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_5_25DEA5C65A602671_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_25DEA5C65A602671_1_OFFSET))(this);
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

	::System::Void Method_5_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A7185CB44B3E71DB_METHOD_5_30D1209326FA87FC_OFFSET))(this);
	}
};
