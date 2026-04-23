#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"

class Class_2_8C67A14CD66BE3FA;
namespace RPG::Client { class IAssetOperation; }

#define CLASS_2_8C67A14CD66BE3FA___C__DISPLAYCLASS42_0__ASYNCLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xD35AB50)
#define CLASS_2_8C67A14CD66BE3FA___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD358420)

inline static constexpr unsigned int Class_2_8C67A14CD66BE3FA___c__DisplayClass42_0_TypeDefinitionIndex = 46167;

class Class_2_8C67A14CD66BE3FA___c__DisplayClass42_0 : public ::System::Object
{
public:
	::Class_2_8C67A14CD66BE3FA* __4__this; // 0x10
	::RPG::Client::OpenWorld::StreamingLightEnum state; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoad_b__0(::RPG::Client::IAssetOperation* assetOpt)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_2_8C67A14CD66BE3FA___C__DISPLAYCLASS42_0__ASYNCLOAD_B__0_OFFSET))(this, assetOpt);
	}
};
