#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"

class Class_2_3E971D2CC37E1611;
namespace RPG::Client { class IAssetOperation; }

#define CLASS_2_3E971D2CC37E1611___C__DISPLAYCLASS43_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x162A3490)
#define CLASS_2_3E971D2CC37E1611___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162A15A0)

inline static constexpr unsigned int Class_2_3E971D2CC37E1611___c__DisplayClass43_0_TypeDefinitionIndex = 49996;

class Class_2_3E971D2CC37E1611___c__DisplayClass43_0 : public ::System::Object
{
public:
	::Class_2_3E971D2CC37E1611* __4__this; // 0x10
	::RPG::Client::OpenWorld::StreamingLightEnum state; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoad_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_3E971D2CC37E1611___C__DISPLAYCLASS43_0__ASYNCLOAD_B__0_OFFSET))(this, a1);
	}
};
