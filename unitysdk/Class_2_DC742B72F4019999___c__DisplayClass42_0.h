#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"

class Class_2_DC742B72F4019999;
namespace RPG::Client { class IAssetOperation; }

#define CLASS_2_DC742B72F4019999___C__DISPLAYCLASS42_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x143032A0)
#define CLASS_2_DC742B72F4019999___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14300EC0)

inline static constexpr unsigned int Class_2_DC742B72F4019999___c__DisplayClass42_0_TypeDefinitionIndex = 46750;

class Class_2_DC742B72F4019999___c__DisplayClass42_0 : public ::System::Object
{
public:
	::Class_2_DC742B72F4019999* __4__this; // 0x10
	::RPG::Client::OpenWorld::StreamingLightEnum state; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoad_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_DC742B72F4019999___C__DISPLAYCLASS42_0__ASYNCLOAD_B__0_OFFSET))(this, a1);
	}
};
