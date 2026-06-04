#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TravelShipCameraMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class Freelook3rdRigParams; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_393788F99F11B777_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1400E580)
#define CLASS_1_393788F99F11B777_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1400ED90)
#define CLASS_1_393788F99F11B777_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1400DAE0)
#define CLASS_1_393788F99F11B777_METHOD_1_53E30A4F2E776E4F_OFFSET UNITYSDK_OFFSET(0x1400E940)
#define CLASS_1_393788F99F11B777_METHOD_1_64748F4446A4BF5B_OFFSET UNITYSDK_OFFSET(0x1400EB60)
#define CLASS_1_393788F99F11B777_METHOD_1_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x1400DB30)
#define CLASS_1_393788F99F11B777_METHOD_1_DD452FFC9DB74C79_OFFSET UNITYSDK_OFFSET(0x1400E700)
#define CLASS_1_393788F99F11B777_METHOD_1_ECE69D9D242E4D7A_OFFSET UNITYSDK_OFFSET(0x1400E090)
#define CLASS_1_393788F99F11B777_METHOD_1_F5972DD1C3F4267B_OFFSET UNITYSDK_OFFSET(0x1400DF40)
#define CLASS_1_393788F99F11B777_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1400EDA0)
#define CLASS_1_393788F99F11B777__CTOR_OFFSET UNITYSDK_OFFSET(0x1400DA80)

inline static constexpr unsigned int Class_1_393788F99F11B777_TypeDefinitionIndex = 64347;

class Class_1_393788F99F11B777 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Single Field_1_5; // 0x28
	::RPG::Client::TravelShipCameraMode _Mode_k__BackingField; // 0x2C
	::System::Single Field_1_7; // 0x30
	::System::Single Field_1_8; // 0x34
	::System::Single Field_1_9; // 0x38
	::System::Single Field_1_10; // 0x3C
	::System::Boolean Field_1_11; // 0x40
	::System::Boolean Field_1_12; // 0x41
	::System::Single Field_1_13; // 0x44

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
