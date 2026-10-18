#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TravelShipCameraMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Freelook3rdRigParams; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_393788F99F11B777_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162F64F0)
#define CLASS_1_393788F99F11B777_GET_MODE_OFFSET UNITYSDK_OFFSET(0x162F6D00)
#define CLASS_1_393788F99F11B777_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x162F5A50)
#define CLASS_1_393788F99F11B777_METHOD_1_53E30A4F2E776E4F_OFFSET UNITYSDK_OFFSET(0x162F68B0)
#define CLASS_1_393788F99F11B777_METHOD_1_64748F4446A4BF5B_OFFSET UNITYSDK_OFFSET(0x162F6AD0)
#define CLASS_1_393788F99F11B777_METHOD_1_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x162F5AA0)
#define CLASS_1_393788F99F11B777_METHOD_1_DD452FFC9DB74C79_OFFSET UNITYSDK_OFFSET(0x162F6670)
#define CLASS_1_393788F99F11B777_METHOD_1_ECE69D9D242E4D7A_OFFSET UNITYSDK_OFFSET(0x162F6000)
#define CLASS_1_393788F99F11B777_METHOD_1_F5972DD1C3F4267B_OFFSET UNITYSDK_OFFSET(0x162F5EB0)
#define CLASS_1_393788F99F11B777_SET_MODE_OFFSET UNITYSDK_OFFSET(0x162F6D10)
#define CLASS_1_393788F99F11B777__CTOR_OFFSET UNITYSDK_OFFSET(0x162F59F0)

inline static constexpr unsigned int Class_1_393788F99F11B777_TypeDefinitionIndex = 68789;

class Class_1_393788F99F11B777 : public ::System::Object
{
public:
	// static const ::System::Single IHBFOINGLEC; // 0x0
	::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x10
	::UnityEngine::Transform* ILFCKOFPHGH; // 0x18
	::System::Single MDALBHBADBJ; // 0x20
	::RPG::Client::TravelShipCameraMode _Mode_k__BackingField; // 0x24
	::System::Single BAAHCPEDNDO; // 0x28
	::System::Boolean GMJHMBDAAID; // 0x2C
	::System::Boolean MHEAIOMEGCA; // 0x2D
	::System::Single EMFNDEMFDAE; // 0x30
	::System::Single KALMIGLCEAP; // 0x34
	::System::Single JDLCCIPIHEM; // 0x38
	::System::Single EILFNDNFIFK; // 0x3C
	::System::Single DBNPPMOPFNG; // 0x40
	::System::Single CNPIJNIMJHA; // 0x44

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_METHOD_1_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DD452FFC9DB74C79(::RPG::Client::TravelShipCameraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TravelShipCameraMode))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_METHOD_1_DD452FFC9DB74C79_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F5972DD1C3F4267B(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_METHOD_1_F5972DD1C3F4267B_OFFSET))(this, a1);
	}

	::System::Single Method_1_ECE69D9D242E4D7A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_METHOD_1_ECE69D9D242E4D7A_OFFSET))(this, a1);
	}

	::System::Single Method_1_53E30A4F2E776E4F(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_METHOD_1_53E30A4F2E776E4F_OFFSET))(this, a1);
	}

	::System::Single Method_1_64748F4446A4BF5B(::RPG::Client::Freelook3rdRigParams* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::Freelook3rdRigParams*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_METHOD_1_64748F4446A4BF5B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::TravelShipCameraMode get_Mode()
	{
		return ((::RPG::Client::TravelShipCameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_GET_MODE_OFFSET))(this);
	}

	::System::Void set_Mode(::RPG::Client::TravelShipCameraMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TravelShipCameraMode))((::PBYTE)hIl2Cpp + CLASS_1_393788F99F11B777_SET_MODE_OFFSET))(this, a1);
	}
};
