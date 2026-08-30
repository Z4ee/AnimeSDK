#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_413;
namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_14FA7A3912B06196_METHOD_1_3C8ECD0EE70849EB_OFFSET UNITYSDK_OFFSET(0xBBD2240)
#define CLASS_1_14FA7A3912B06196_METHOD_1_65C01C624BA15F48_OFFSET UNITYSDK_OFFSET(0xBBD2E20)
#define CLASS_1_14FA7A3912B06196_METHOD_1_B8F2EF79B449E0DA_OFFSET UNITYSDK_OFFSET(0xBBD1BE0)
#define CLASS_1_14FA7A3912B06196_METHOD_1_CF27C9BD8A3A9907_OFFSET UNITYSDK_OFFSET(0xBBD2A20)
#define CLASS_1_14FA7A3912B06196__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD1BD0)

inline static constexpr unsigned int Class_1_14FA7A3912B06196_TypeDefinitionIndex = 66501;

class Class_1_14FA7A3912B06196 : public ::System::Object
{
public:
	::RPG::Client::PlanetFesFloatingController* CFKHNPGEAJA; // 0x10

	::System::Void _ctor(::RPG::Client::PlanetFesFloatingController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController*))((::PBYTE)hIl2Cpp + CLASS_1_14FA7A3912B06196__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_413* Method_1_B8F2EF79B449E0DA(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::PlanetFesFloatingController_CoinAmount a3)
	{
		return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::PlanetFesFloatingController_CoinAmount))((::PBYTE)hIl2Cpp + CLASS_1_14FA7A3912B06196_METHOD_1_B8F2EF79B449E0DA_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_413* Method_1_3C8ECD0EE70849EB(::UnityEngine::Transform* a1, ::RPG::Client::PlanetFesFloatingController_ItemType a2, ::System::String* a3, ::System::String* a4, ::System::Single a5)
	{
		return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_14FA7A3912B06196_METHOD_1_3C8ECD0EE70849EB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_0_16E4307DCC419505_413* Method_1_CF27C9BD8A3A9907(::UnityEngine::Vector3 a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14FA7A3912B06196_METHOD_1_CF27C9BD8A3A9907_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_413* Method_1_65C01C624BA15F48(::UnityEngine::Transform* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_14FA7A3912B06196_METHOD_1_65C01C624BA15F48_OFFSET))(this, a1, a2, a3, a4);
	}
};
