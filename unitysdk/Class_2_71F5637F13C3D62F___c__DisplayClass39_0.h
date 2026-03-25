#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"

class Class_2_71F5637F13C3D62F;
namespace RPG::Client { class IAssetOperation; }

#define CLASS_2_71F5637F13C3D62F___C__DISPLAYCLASS39_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x877CE00)
#define CLASS_2_71F5637F13C3D62F___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x877A630)

inline static constexpr unsigned int Class_2_71F5637F13C3D62F___c__DisplayClass39_0_TypeDefinitionIndex = 40258;

class Class_2_71F5637F13C3D62F___c__DisplayClass39_0 : public ::System::Object
{
public:
	::Class_2_71F5637F13C3D62F* __4__this; // 0x10
	::RPG::Client::OpenWorld::StreamingLightEnum state; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoad_b__0(::RPG::Client::IAssetOperation* assetOpt)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_71F5637F13C3D62F___C__DISPLAYCLASS39_0__ASYNCLOAD_B__0_OFFSET))(this, assetOpt);
	}
};
